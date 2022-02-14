
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ath_hal_5416 {int ah_hangs; } ;
struct ath_hal {int dummy; } ;
typedef int HAL_BOOL ;


 struct ath_hal_5416* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_1 (struct ath_hal*,int,void const*,int,void**,int*) ;
 int FUNC_2 (struct ath_hal*) ;
 int FUNC_3 (struct ath_hal*) ;
 int FUNC_4 (struct ath_hal*,int,void const*,int,void**,int*) ;
 scalar_t__ FUNC_5 (struct ath_hal*,int,void const*,int,void**,int*) ;

HAL_BOOL
FUNC_6(struct ath_hal *VAR_4, int VAR_5,
 const void *VAR_6, uint32_t VAR_7,
 void **VAR_8, uint32_t *VAR_9)
{
 struct ath_hal_5416 *VAR_10 = FUNC_0(VAR_4);
 int VAR_11;

 if (FUNC_5(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9))
  return VAR_1;
 switch (VAR_5) {
 case 128:
  return FUNC_4(VAR_4, VAR_5,
      VAR_6, VAR_7, VAR_8, VAR_9);
 case 129:
  if (VAR_7 != sizeof(int))
   return VAR_0;
  VAR_11 = *(const int *) VAR_6;
  VAR_10->ah_hangs = 0;
  if (VAR_11 & VAR_2)
   VAR_10->ah_hangs |= FUNC_2(VAR_4);

  if (VAR_10->ah_hangs == 0 && (VAR_11 & VAR_3))
   VAR_10->ah_hangs |= FUNC_3(VAR_4);
  *VAR_8 = &VAR_10->ah_hangs;
  *VAR_9 = sizeof(VAR_10->ah_hangs);
  return VAR_1;
 }
 return FUNC_1(VAR_4, VAR_5,
     VAR_6, VAR_7, VAR_8, VAR_9);
}
