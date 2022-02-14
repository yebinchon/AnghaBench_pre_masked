
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct ath_hal {int dummy; } ;
struct TYPE_2__ {int ah_rfsilent; } ;


 TYPE_1__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ath_hal*,int ,int) ;
 int FUNC_4 (struct ath_hal*,int) ;
 int FUNC_5 (struct ath_hal*,int) ;
 int FUNC_6 (struct ath_hal*,int,int) ;

void
FUNC_7(struct ath_hal *VAR_2)
{
 uint16_t VAR_3 = FUNC_0(VAR_2)->ah_rfsilent;
 int VAR_4 = FUNC_2(VAR_3, VAR_0);
 int VAR_5 = FUNC_2(VAR_3, VAR_1);





 FUNC_4(VAR_2, VAR_4);
 FUNC_3(VAR_2, FUNC_1(0), 0x00002000);
 FUNC_6(VAR_2, VAR_4,
     (FUNC_5(VAR_2, VAR_4) == VAR_5 ? !VAR_5 : VAR_5));
}
