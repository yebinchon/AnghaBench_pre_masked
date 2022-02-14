
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {size_t pos; size_t filtered; size_t size; int allocated; scalar_t__ end_was_reached; int * buffer; } ;
typedef TYPE_1__ lzma_simple_coder ;
typedef scalar_t__ const lzma_ret ;
typedef int lzma_allocator ;
typedef int lzma_action ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (TYPE_1__*,int *,size_t const) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int const*,int const*,size_t*,size_t,int *,size_t*,size_t,int ) ;
 int FUNC_3 (int *,size_t*,size_t,int *,size_t*,size_t) ;
 int FUNC_4 (int *,int *,size_t const) ;
 int FUNC_5 (int *,int *,size_t const) ;

__attribute__((used)) static lzma_ret
FUNC_6(void *VAR_4, const lzma_allocator *VAR_5,
  const uint8_t *restrict VAR_6, size_t *restrict VAR_7,
  size_t VAR_8, uint8_t *restrict VAR_9,
  size_t *restrict VAR_10, size_t VAR_11, lzma_action VAR_12)
{
 lzma_simple_coder *VAR_13 = VAR_4;






 if (VAR_12 == VAR_3)
  return VAR_1;


 if (VAR_13->pos < VAR_13->filtered) {
  FUNC_3(VAR_13->buffer, &VAR_13->pos, VAR_13->filtered,
    VAR_9, VAR_10, VAR_11);



  if (VAR_13->pos < VAR_13->filtered)
   return VAR_0;

  if (VAR_13->end_was_reached) {
   FUNC_0(VAR_13->filtered == VAR_13->size);
   return VAR_2;
  }
 }


 VAR_13->filtered = 0;

 FUNC_0(!VAR_13->end_was_reached);






 const size_t VAR_14 = VAR_11 - *VAR_10;
 const size_t VAR_15 = VAR_13->size - VAR_13->pos;
 if (VAR_14 > VAR_15 || VAR_15 == 0) {


  const size_t VAR_16 = *VAR_10;





  FUNC_4(VAR_9 + *VAR_10, VAR_13->buffer + VAR_13->pos, VAR_15);
  *VAR_10 += VAR_15;


  {
   const lzma_ret VAR_17 = FUNC_2(VAR_13, VAR_5,
     VAR_6, VAR_7, VAR_8,
     VAR_9, VAR_10, VAR_11, VAR_12);
   FUNC_0(VAR_17 != VAR_2);
   if (VAR_17 != VAR_0)
    return VAR_17;
  }


  const size_t VAR_18 = *VAR_10 - VAR_16;
  const size_t VAR_19 = FUNC_1(
    VAR_13, VAR_9 + VAR_16, VAR_18);

  const size_t VAR_20 = VAR_18 - VAR_19;
  FUNC_0(VAR_20 <= VAR_13->allocated / 2);



  VAR_13->pos = 0;
  VAR_13->size = VAR_20;

  if (VAR_13->end_was_reached) {


   VAR_13->size = 0;

  } else if (VAR_20 > 0) {


   *VAR_10 -= VAR_20;
   FUNC_4(VAR_13->buffer, VAR_9 + *VAR_10, VAR_20);
  }
 } else if (VAR_13->pos > 0) {
  FUNC_5(VAR_13->buffer, VAR_13->buffer + VAR_13->pos, VAR_15);
  VAR_13->size -= VAR_13->pos;
  VAR_13->pos = 0;
 }

 FUNC_0(VAR_13->pos == 0);





 if (VAR_13->size > 0) {
  {
   const lzma_ret VAR_21 = FUNC_2(VAR_13, VAR_5,
     VAR_6, VAR_7, VAR_8,
     VAR_13->buffer, &VAR_13->size,
     VAR_13->allocated, VAR_12);
   FUNC_0(VAR_21 != VAR_2);
   if (VAR_21 != VAR_0)
    return VAR_21;
  }

  VAR_13->filtered = FUNC_1(
    VAR_13, VAR_13->buffer, VAR_13->size);



  if (VAR_13->end_was_reached)
   VAR_13->filtered = VAR_13->size;


  FUNC_3(VAR_13->buffer, &VAR_13->pos, VAR_13->filtered,
    VAR_9, VAR_10, VAR_11);
 }


 if (VAR_13->end_was_reached && VAR_13->pos == VAR_13->size)
  return VAR_2;

 return VAR_0;
}
