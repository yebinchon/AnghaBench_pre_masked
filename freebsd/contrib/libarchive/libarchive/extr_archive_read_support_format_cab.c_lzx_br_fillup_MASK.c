
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct lzx_stream {int avail_in; int * next_in; } ;
struct lzx_br {int cache_avail; int cache_buffer; int have_odd; int odd; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(struct lzx_stream *VAR_1, struct lzx_br *VAR_2)
{



 int VAR_3 = VAR_0 - VAR_2->cache_avail;

 for (;;) {
  switch (VAR_3 >> 4) {
  case 4:
   if (VAR_1->avail_in >= 8) {
    VAR_2->cache_buffer =
        ((uint64_t)VAR_1->next_in[1]) << 56 |
        ((uint64_t)VAR_1->next_in[0]) << 48 |
        ((uint64_t)VAR_1->next_in[3]) << 40 |
        ((uint64_t)VAR_1->next_in[2]) << 32 |
        ((uint32_t)VAR_1->next_in[5]) << 24 |
        ((uint32_t)VAR_1->next_in[4]) << 16 |
        ((uint32_t)VAR_1->next_in[7]) << 8 |
         (uint32_t)VAR_1->next_in[6];
    VAR_1->next_in += 8;
    VAR_1->avail_in -= 8;
    VAR_2->cache_avail += 8 * 8;
    return (1);
   }
   break;
  case 3:
   if (VAR_1->avail_in >= 6) {
    VAR_2->cache_buffer =
        (VAR_2->cache_buffer << 48) |
        ((uint64_t)VAR_1->next_in[1]) << 40 |
        ((uint64_t)VAR_1->next_in[0]) << 32 |
        ((uint32_t)VAR_1->next_in[3]) << 24 |
        ((uint32_t)VAR_1->next_in[2]) << 16 |
        ((uint32_t)VAR_1->next_in[5]) << 8 |
         (uint32_t)VAR_1->next_in[4];
    VAR_1->next_in += 6;
    VAR_1->avail_in -= 6;
    VAR_2->cache_avail += 6 * 8;
    return (1);
   }
   break;
  case 0:


   return (1);
  default:
   break;
  }
  if (VAR_1->avail_in < 2) {


   if (VAR_1->avail_in == 1) {
    VAR_2->odd = *VAR_1->next_in++;
    VAR_1->avail_in--;
    VAR_2->have_odd = 1;
   }
   return (0);
  }
  VAR_2->cache_buffer =
     (VAR_2->cache_buffer << 16) |
      FUNC_0(VAR_1->next_in);
  VAR_1->next_in += 2;
  VAR_1->avail_in -= 2;
  VAR_2->cache_avail += 16;
  VAR_3 -= 16;
 }
}
