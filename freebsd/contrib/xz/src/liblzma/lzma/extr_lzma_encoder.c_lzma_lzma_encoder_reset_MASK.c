
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int lzma_ret ;
struct TYPE_6__ {unsigned int pb; unsigned int lp; int lc; } ;
typedef TYPE_1__ lzma_options_lzma ;
struct TYPE_7__ {unsigned int pos_mask; unsigned int literal_pos_mask; int match_price_count; int align_price_count; scalar_t__ opts_current_index; scalar_t__ opts_end_index; int fast_mode; int rep_len_encoder; int match_len_encoder; int dist_align; int * dist_slot; int * dist_special; int * is_rep2; int * is_rep1; int * is_rep0; int * is_rep; int ** is_rep0_long; int ** is_match; int literal; scalar_t__* reps; int state; int rc; int literal_context_bits; } ;
typedef TYPE_2__ lzma_lzma1_encoder ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__ const*) ;
 int FUNC_3 (int *,unsigned int,int ) ;
 int FUNC_4 (int ,int ,unsigned int) ;
 int FUNC_5 (int *) ;

extern lzma_ret
FUNC_6(lzma_lzma1_encoder *VAR_11,
  const lzma_options_lzma *VAR_12)
{
 if (!FUNC_2(VAR_12))
  return VAR_6;

 VAR_11->pos_mask = (1U << VAR_12->pb) - 1;
 VAR_11->literal_context_bits = VAR_12->lc;
 VAR_11->literal_pos_mask = (1U << VAR_12->lp) - 1;


 FUNC_5(&VAR_11->rc);


 VAR_11->state = VAR_9;
 for (size_t VAR_13 = 0; VAR_13 < VAR_7; ++VAR_13)
  VAR_11->reps[VAR_13] = 0;

 FUNC_4(VAR_11->literal, VAR_12->lc, VAR_12->lp);


 for (size_t VAR_14 = 0; VAR_14 < VAR_8; ++VAR_14) {
  for (size_t VAR_15 = 0; VAR_15 <= VAR_11->pos_mask; ++VAR_15) {
   FUNC_0(VAR_11->is_match[VAR_14][VAR_15]);
   FUNC_0(VAR_11->is_rep0_long[VAR_14][VAR_15]);
  }

  FUNC_0(VAR_11->is_rep[VAR_14]);
  FUNC_0(VAR_11->is_rep0[VAR_14]);
  FUNC_0(VAR_11->is_rep1[VAR_14]);
  FUNC_0(VAR_11->is_rep2[VAR_14]);
 }

 for (size_t VAR_16 = 0; VAR_16 < VAR_4 - VAR_1; ++VAR_16)
  FUNC_0(VAR_11->dist_special[VAR_16]);


 for (size_t VAR_17 = 0; VAR_17 < VAR_3; ++VAR_17)
  FUNC_1(VAR_11->dist_slot[VAR_17], VAR_2);

 FUNC_1(VAR_11->dist_align, VAR_0);


 FUNC_3(&VAR_11->match_len_encoder,
   1U << VAR_12->pb, VAR_11->fast_mode);

 FUNC_3(&VAR_11->rep_len_encoder,
   1U << VAR_12->pb, VAR_11->fast_mode);
 VAR_11->match_price_count = VAR_10 / 2;
 VAR_11->align_price_count = VAR_10 / 2;

 VAR_11->opts_end_index = 0;
 VAR_11->opts_current_index = 0;

 return VAR_5;
}
