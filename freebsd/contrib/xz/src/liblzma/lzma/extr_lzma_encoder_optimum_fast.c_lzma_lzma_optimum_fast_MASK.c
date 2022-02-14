
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_10__ {int nice_len; int read_ahead; } ;
typedef TYPE_1__ lzma_mf ;
struct TYPE_11__ {int longest_match_length; int matches_count; int const** reps; TYPE_6__* matches; } ;
typedef TYPE_2__ lzma_lzma1_encoder ;
struct TYPE_12__ {int dist; int len; } ;


 int MATCH_LEN_MAX ;
 int REPS ;
 int UINT32_C (int) ;
 int UINT32_MAX ;
 int assert (int) ;
 scalar_t__ change_pair (int const,int const) ;
 int lzma_memcmplen (int const*,int const* const,int,int const) ;
 scalar_t__ memcmp (int const*,int,int const) ;
 scalar_t__ mf_avail (TYPE_1__*) ;
 void* mf_find (TYPE_1__*,int*,TYPE_6__*) ;
 int * mf_ptr (TYPE_1__*) ;
 int mf_skip (TYPE_1__*,int const) ;
 int my_max (int,int) ;
 int my_min (scalar_t__,int ) ;
 scalar_t__ not_equal_16 (int const*,int const* const) ;

extern void
lzma_lzma_optimum_fast(lzma_lzma1_encoder *restrict coder,
  lzma_mf *restrict mf,
  uint32_t *restrict back_res, uint32_t *restrict len_res)
{
 const uint32_t nice_len = mf->nice_len;

 uint32_t len_main;
 uint32_t matches_count;
 if (mf->read_ahead == 0) {
  len_main = mf_find(mf, &matches_count, coder->matches);
 } else {
  assert(mf->read_ahead == 1);
  len_main = coder->longest_match_length;
  matches_count = coder->matches_count;
 }

 const uint8_t *buf = mf_ptr(mf) - 1;
 const uint32_t buf_avail = my_min(mf_avail(mf) + 1, MATCH_LEN_MAX);

 if (buf_avail < 2) {

  *back_res = UINT32_MAX;
  *len_res = 1;
  return;
 }


 uint32_t rep_len = 0;
 uint32_t rep_index = 0;

 for (uint32_t i = 0; i < REPS; ++i) {

  const uint8_t *const buf_back = buf - coder->reps[i] - 1;



  if (not_equal_16(buf, buf_back))
   continue;



  const uint32_t len = lzma_memcmplen(
    buf, buf_back, 2, buf_avail);



  if (len >= nice_len) {
   *back_res = i;
   *len_res = len;
   mf_skip(mf, len - 1);
   return;
  }

  if (len > rep_len) {
   rep_index = i;
   rep_len = len;
  }
 }



 if (len_main >= nice_len) {
  *back_res = coder->matches[matches_count - 1].dist + REPS;
  *len_res = len_main;
  mf_skip(mf, len_main - 1);
  return;
 }

 uint32_t back_main = 0;
 if (len_main >= 2) {
  back_main = coder->matches[matches_count - 1].dist;

  while (matches_count > 1 && len_main ==
    coder->matches[matches_count - 2].len + 1) {
   if (!change_pair(coder->matches[
      matches_count - 2].dist,
     back_main))
    break;

   --matches_count;
   len_main = coder->matches[matches_count - 1].len;
   back_main = coder->matches[matches_count - 1].dist;
  }

  if (len_main == 2 && back_main >= 0x80)
   len_main = 1;
 }

 if (rep_len >= 2) {
  if (rep_len + 1 >= len_main
    || (rep_len + 2 >= len_main
     && back_main > (UINT32_C(1) << 9))
    || (rep_len + 3 >= len_main
     && back_main > (UINT32_C(1) << 15))) {
   *back_res = rep_index;
   *len_res = rep_len;
   mf_skip(mf, rep_len - 1);
   return;
  }
 }

 if (len_main < 2 || buf_avail <= 2) {
  *back_res = UINT32_MAX;
  *len_res = 1;
  return;
 }



 coder->longest_match_length = mf_find(mf,
   &coder->matches_count, coder->matches);

 if (coder->longest_match_length >= 2) {
  const uint32_t new_dist = coder->matches[
    coder->matches_count - 1].dist;

  if ((coder->longest_match_length >= len_main
     && new_dist < back_main)
    || (coder->longest_match_length == len_main + 1
     && !change_pair(back_main, new_dist))
    || (coder->longest_match_length > len_main + 1)
    || (coder->longest_match_length + 1 >= len_main
     && len_main >= 3
     && change_pair(new_dist, back_main))) {
   *back_res = UINT32_MAX;
   *len_res = 1;
   return;
  }
 }




 ++buf;

 const uint32_t limit = my_max(2, len_main - 1);

 for (uint32_t i = 0; i < REPS; ++i) {
  if (memcmp(buf, buf - coder->reps[i] - 1, limit) == 0) {
   *back_res = UINT32_MAX;
   *len_res = 1;
   return;
  }
 }

 *back_res = back_main + REPS;
 *len_res = len_main;
 mf_skip(mf, len_main - 2);
 return;
}
