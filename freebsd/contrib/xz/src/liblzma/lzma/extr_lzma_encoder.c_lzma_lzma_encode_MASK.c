
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int lzma_ret ;
struct TYPE_15__ {scalar_t__ read_pos; scalar_t__ read_ahead; scalar_t__ read_limit; scalar_t__ action; } ;
typedef TYPE_1__ lzma_mf ;
struct TYPE_16__ {int is_flushed; int rc; scalar_t__ fast_mode; int is_initialized; } ;
typedef TYPE_2__ lzma_lzma1_encoder ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,scalar_t__*,scalar_t__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*,scalar_t__*,scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int *,int *,size_t*,size_t) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;

extern lzma_ret
FUNC_10(lzma_lzma1_encoder *restrict VAR_6, lzma_mf *restrict VAR_7,
  uint8_t *restrict VAR_8, size_t *restrict VAR_9,
  size_t VAR_10, uint32_t VAR_11)
{

 if (!VAR_6->is_initialized && !FUNC_2(VAR_6, VAR_7))
  return VAR_2;


 uint32_t VAR_12 = FUNC_6(VAR_7);

 while (1) {






  if (FUNC_7(&VAR_6->rc, VAR_8, VAR_9, VAR_10)) {
   FUNC_0(VAR_11 == VAR_5);
   return VAR_2;
  }




  if (VAR_11 != VAR_5
    && (VAR_7->read_pos - VAR_7->read_ahead >= VAR_11
     || *VAR_9 + FUNC_9(&VAR_6->rc)
      >= VAR_1
       - VAR_0))
   break;


  if (VAR_7->read_pos >= VAR_7->read_limit) {
   if (VAR_7->action == VAR_3)
    return VAR_2;

   if (VAR_7->read_ahead == 0)
    break;
  }
  uint32_t VAR_13;
  uint32_t VAR_14;

  if (VAR_6->fast_mode)
   FUNC_4(VAR_6, VAR_7, &VAR_14, &VAR_13);
  else
   FUNC_5(
     VAR_6, VAR_7, &VAR_14, &VAR_13, VAR_12);

  FUNC_3(VAR_6, VAR_7, VAR_14, VAR_13, VAR_12);

  VAR_12 += VAR_13;
 }

 if (!VAR_6->is_flushed) {
  VAR_6->is_flushed = 1;



  if (VAR_11 == VAR_5)
   FUNC_1(VAR_6, VAR_12);


  FUNC_8(&VAR_6->rc);





  if (FUNC_7(&VAR_6->rc, VAR_8, VAR_9, VAR_10)) {
   FUNC_0(VAR_11 == VAR_5);
   return VAR_2;
  }
 }


 VAR_6->is_flushed = 0;

 return VAR_4;
}
