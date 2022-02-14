
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct ath_hal {int dummy; } ;
struct TYPE_2__ {int ah_maskReg; } ;


 TYPE_1__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct ath_hal*,int ) ;
 int FUNC_4 (struct ath_hal*,int ,int) ;
 int FUNC_5 (struct ath_hal*,int) ;

void
FUNC_6(struct ath_hal *VAR_4, u_int VAR_5, uint32_t VAR_6)
{
 uint32_t VAR_7 = FUNC_3(VAR_4, VAR_0);


 VAR_7 &= ~(FUNC_2(VAR_5) | VAR_2 | VAR_1 |
   FUNC_1(VAR_5));

 VAR_7 |= FUNC_2(VAR_5) | VAR_1;
 if (VAR_6)
  VAR_7 |= VAR_2;


 FUNC_4(VAR_4, VAR_0, VAR_7);


 FUNC_5(VAR_4, FUNC_0(VAR_4)->ah_maskReg | VAR_3);
}
