
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ath_hal_5212 {scalar_t__ ah_txTrigLev; scalar_t__ ah_maxTxTrigLev; int ah_maskReg; } ;
struct ath_hal {int dummy; } ;
typedef int HAL_INT ;
typedef int HAL_BOOL ;


 struct ath_hal_5212* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct ath_hal*,int ) ;
 int FUNC_3 (struct ath_hal*,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (struct ath_hal*,int) ;

HAL_BOOL
FUNC_6(struct ath_hal *VAR_5, HAL_BOOL VAR_6)
{
 struct ath_hal_5212 *VAR_7 = FUNC_0(VAR_5);
 uint32_t VAR_8, VAR_9, VAR_10;
 HAL_INT VAR_11;

 if (VAR_7->ah_txTrigLev >= VAR_7->ah_maxTxTrigLev)
  return VAR_0;




 VAR_11 = FUNC_5(VAR_5, VAR_7->ah_maskReg &~ VAR_3);

 VAR_8 = FUNC_2(VAR_5, VAR_2);
 VAR_9 = FUNC_1(VAR_8, VAR_1);
 VAR_10 = VAR_9;
 if (VAR_6) {
  if (VAR_9 < VAR_7->ah_maxTxTrigLev)
   VAR_10++;
 } else if (VAR_9 > VAR_4)
  VAR_10--;
 if (VAR_10 != VAR_9)

  FUNC_3(VAR_5, VAR_2,
   (VAR_8 &~ VAR_1) | FUNC_4(VAR_10, VAR_1));

 VAR_7->ah_txTrigLev = VAR_10;


 FUNC_5(VAR_5, VAR_11);

 return (VAR_10 != VAR_9);
}
