
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int const lzma_ret ;
struct TYPE_5__ {int coder; int const (* code ) (int ,int const*,int const*,size_t*,size_t,int*,size_t*,size_t,int ) ;} ;
struct TYPE_4__ {int sequence; int flags; TYPE_2__ next; int memlimit; } ;
typedef TYPE_1__ lzma_auto_coder ;
typedef int lzma_allocator ;
typedef int lzma_action ;


 int VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int const*,int ,int) ;
 int FUNC_2 (TYPE_2__*,int const*,int ,int) ;
 int FUNC_3 (int ) ;
 int const FUNC_4 (int ,int const*,int const*,size_t*,size_t,int*,size_t*,size_t,int ) ;

__attribute__((used)) static lzma_ret
FUNC_5(void *VAR_10, const lzma_allocator *VAR_11,
  const uint8_t *restrict VAR_12, size_t *restrict VAR_13,
  size_t VAR_14, uint8_t *restrict VAR_15,
  size_t *restrict VAR_16, size_t VAR_17, lzma_action VAR_18)
{
 lzma_auto_coder *VAR_19 = VAR_10;

 switch (VAR_19->sequence) {
 case 128:
  if (*VAR_13 >= VAR_14)
   return VAR_5;



  VAR_19->sequence = 130;





  if (VAR_12[*VAR_13] == 0xFD) {
   FUNC_3(FUNC_2(
     &VAR_19->next, VAR_11,
     VAR_19->memlimit, VAR_19->flags));
  } else {
   FUNC_3(FUNC_1(&VAR_19->next,
     VAR_11, VAR_19->memlimit, 1));





   if (VAR_19->flags & VAR_9)
    return VAR_4;

   if (VAR_19->flags & VAR_8)
    return VAR_3;
  }



 case 130: {
  const lzma_ret VAR_20 = VAR_19->next.code(
    VAR_19->next.coder, VAR_11,
    VAR_12, VAR_13, VAR_14,
    VAR_15, VAR_16, VAR_17, VAR_18);
  if (VAR_20 != VAR_7
    || (VAR_19->flags & VAR_0) == 0)
   return VAR_20;

  VAR_19->sequence = 129;
 }



 case 129:



  if (*VAR_13 < VAR_14)
   return VAR_1;

  return VAR_18 == VAR_2 ? VAR_7 : VAR_5;

 default:
  FUNC_0(0);
  return VAR_6;
 }
}
