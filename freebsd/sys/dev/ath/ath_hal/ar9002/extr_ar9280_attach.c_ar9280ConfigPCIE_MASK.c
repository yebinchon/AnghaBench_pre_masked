
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct ath_hal {int dummy; } ;
struct TYPE_4__ {int ah_ini_pcieserdes; } ;
struct TYPE_3__ {scalar_t__ ah_ispcie; } ;
typedef scalar_t__ HAL_BOOL ;


 TYPE_2__* FUNC_0 (struct ath_hal*) ;
 TYPE_1__* FUNC_1 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ath_hal*,int ,int ) ;
 int FUNC_4 (struct ath_hal*,int ) ;
 int FUNC_5 (struct ath_hal*,int ,int ) ;
 int FUNC_6 (struct ath_hal*,int ,int) ;
 int FUNC_7 (struct ath_hal*,int *,int,int ) ;

__attribute__((used)) static void
FUNC_8(struct ath_hal *VAR_8, HAL_BOOL VAR_9, HAL_BOOL VAR_10)
{
 uint32_t VAR_11;

 if (FUNC_1(VAR_8)->ah_ispcie && !VAR_9) {
  FUNC_7(VAR_8, &FUNC_0(VAR_8)->ah_ini_pcieserdes, 1, 0);
  FUNC_2(1000);
 }
 if (VAR_10) {
  FUNC_3(VAR_8, VAR_1, VAR_2);

  VAR_11 = FUNC_4(VAR_8, VAR_3);





  VAR_11 &= ~(VAR_5 | VAR_6);




  VAR_11 |= VAR_4;
  if (VAR_0 & VAR_7)
   VAR_11 |= VAR_7;

  FUNC_6(VAR_8, VAR_3, VAR_11);
 } else {
  VAR_11 = VAR_0;




  VAR_11 &= (~VAR_7);
  FUNC_6(VAR_8, VAR_3, VAR_11);


  FUNC_5(VAR_8, VAR_1, VAR_2);
 }
}
