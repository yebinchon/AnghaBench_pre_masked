
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
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct ath_hal*,int ) ;
 int FUNC_5 (struct ath_hal*,int ,int) ;
 int FUNC_6 (struct ath_hal*,int) ;

void
FUNC_7(struct ath_hal *VAR_7, u_int VAR_8, uint32_t VAR_9)
{
 uint32_t VAR_10;


 VAR_10 = FUNC_4(VAR_7, VAR_0);
 VAR_10 &= ~(FUNC_1(VAR_8) |
   VAR_2 | VAR_1 | VAR_3);
 VAR_10 |= FUNC_2(VAR_8) | FUNC_3(VAR_8) | VAR_1;
 if (VAR_9)
  VAR_10 |= VAR_4;
 else
  VAR_10 |= VAR_5;


 FUNC_5(VAR_7, VAR_0, VAR_10);


 (void) FUNC_6(VAR_7, FUNC_0(VAR_7)->ah_maskReg | VAR_6);
}
