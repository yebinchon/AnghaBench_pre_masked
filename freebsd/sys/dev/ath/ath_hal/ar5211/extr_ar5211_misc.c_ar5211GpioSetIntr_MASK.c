
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
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ath_hal*,int ) ;
 int FUNC_2 (struct ath_hal*,int ,int) ;
 int FUNC_3 (struct ath_hal*,int) ;

void
FUNC_4(struct ath_hal *VAR_6, u_int VAR_7, uint32_t VAR_8)
{
 uint32_t VAR_9 = FUNC_1(VAR_6, VAR_0);


 VAR_9 &= ~(VAR_3 | VAR_4 | VAR_2 |
   VAR_1);

 VAR_9 |= VAR_3 | VAR_2;
 if (VAR_8)
  VAR_9 |= VAR_4;


 FUNC_2(VAR_6, VAR_0, VAR_9);


 FUNC_3(VAR_6, FUNC_0(VAR_6)->ah_maskReg | VAR_5);
}
