
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_3__ {size_t const dist_special; size_t const dist_align; size_t* reps; int match_price_count; int align_price_count; int rc; int * dist_slot; int fast_mode; int match_len_encoder; int state; } ;
typedef TYPE_1__ lzma_lzma1_encoder ;


 size_t const VAR_0 ;
 size_t const VAR_1 ;
 size_t const VAR_2 ;
 size_t const VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (size_t const) ;
 size_t FUNC_1 (size_t const) ;
 int FUNC_2 (int *,int *,size_t const,size_t const,int ) ;
 int FUNC_3 (int *,int ,int ,size_t const) ;
 int FUNC_4 (int *,size_t const,size_t const,size_t const) ;
 int FUNC_5 (int *,size_t const,size_t const) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static inline void
FUNC_7(lzma_lzma1_encoder *VAR_5, const uint32_t VAR_6,
  const uint32_t VAR_7, const uint32_t VAR_8)
{
 FUNC_6(VAR_5->state);

 FUNC_2(&VAR_5->rc, &VAR_5->match_len_encoder, VAR_6, VAR_8,
   VAR_5->fast_mode);

 const uint32_t VAR_9 = FUNC_0(VAR_7);
 const uint32_t VAR_10 = FUNC_1(VAR_8);
 FUNC_3(&VAR_5->rc, VAR_5->dist_slot[VAR_10],
   VAR_4, VAR_9);

 if (VAR_9 >= VAR_3) {
  const uint32_t VAR_11 = (VAR_9 >> 1) - 1;
  const uint32_t VAR_12 = (2 | (VAR_9 & 1)) << VAR_11;
  const uint32_t VAR_13 = VAR_7 - VAR_12;

  if (VAR_9 < VAR_2) {


   FUNC_4(&VAR_5->rc,
    VAR_5->dist_special + VAR_12 - VAR_9 - 1,
    VAR_11, VAR_13);
  } else {
   FUNC_5(&VAR_5->rc, VAR_13 >> VAR_0,
     VAR_11 - VAR_0);
   FUNC_4(
     &VAR_5->rc, VAR_5->dist_align,
     VAR_0, VAR_13 & VAR_1);
   ++VAR_5->align_price_count;
  }
 }

 VAR_5->reps[3] = VAR_5->reps[2];
 VAR_5->reps[2] = VAR_5->reps[1];
 VAR_5->reps[1] = VAR_5->reps[0];
 VAR_5->reps[0] = VAR_7;
 ++VAR_5->match_price_count;
}
