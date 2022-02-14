
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint32_t ;
typedef int reps ;
struct TYPE_16__ {scalar_t__ read_ahead; int nice_len; } ;
typedef TYPE_2__ lzma_mf ;
struct TYPE_17__ {size_t opts_end_index; size_t opts_current_index; int match_price_count; scalar_t__ align_price_count; int longest_match_length; int matches; int matches_count; int reps; TYPE_1__* opts; } ;
typedef TYPE_3__ lzma_lzma1_encoder ;
struct TYPE_15__ {int pos_prev; int back_prev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int*,int*,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*,int*,int*,int) ;
 int FUNC_5 (TYPE_3__*,int*,scalar_t__,int,int,int,int ,int ) ;
 int FUNC_6 (int*,int ,int) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int *,int ) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (scalar_t__,int) ;

extern void
FUNC_11(lzma_lzma1_encoder *restrict VAR_4,
  lzma_mf *restrict VAR_5,
  uint32_t *restrict VAR_6, uint32_t *restrict VAR_7,
  uint32_t VAR_8)
{

 if (VAR_4->opts_end_index != VAR_4->opts_current_index) {
  FUNC_0(VAR_5->read_ahead > 0);
  *VAR_7 = VAR_4->opts[VAR_4->opts_current_index].pos_prev
    - VAR_4->opts_current_index;
  *VAR_6 = VAR_4->opts[VAR_4->opts_current_index].back_prev;
  VAR_4->opts_current_index = VAR_4->opts[
    VAR_4->opts_current_index].pos_prev;
  return;
 }




 if (VAR_5->read_ahead == 0) {
  if (VAR_4->match_price_count >= (1 << 7))
   FUNC_3(VAR_4);

  if (VAR_4->align_price_count >= VAR_0)
   FUNC_2(VAR_4);
 }





 uint32_t VAR_9 = FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 if (VAR_9 == VAR_3)
  return;

 uint32_t VAR_10[VAR_2];
 FUNC_6(VAR_10, VAR_4->reps, sizeof(VAR_10));

 uint32_t VAR_11;
 for (VAR_11 = 1; VAR_11 < VAR_9; ++VAR_11) {
  FUNC_0(VAR_11 < VAR_1);

  VAR_4->longest_match_length = FUNC_8(
    VAR_5, &VAR_4->matches_count, VAR_4->matches);

  if (VAR_4->longest_match_length >= VAR_5->nice_len)
   break;

  VAR_9 = FUNC_5(VAR_4, VAR_10, FUNC_9(VAR_5) - 1, VAR_9,
    VAR_8 + VAR_11, VAR_11, VAR_5->nice_len,
    FUNC_10(FUNC_7(VAR_5) + 1, VAR_1 - 1 - VAR_11));
 }

 FUNC_1(VAR_4, VAR_7, VAR_6, VAR_11);
 return;
}
