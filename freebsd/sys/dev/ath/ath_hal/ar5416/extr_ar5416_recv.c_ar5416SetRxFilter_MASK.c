
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int32_t ;
struct ath_hal {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ath_hal*,int ) ;
 int FUNC_1 (struct ath_hal*,int ,int) ;

void
FUNC_2(struct ath_hal *VAR_9, u_int32_t VAR_10)
{
 uint32_t VAR_11;

 FUNC_1(VAR_9, VAR_6, (VAR_10 & 0xffff));
 VAR_11 = 0;
 if (VAR_10 & VAR_8)
  VAR_11 |= VAR_3;
 if (VAR_10 & VAR_7)
  VAR_11 |= VAR_2 | VAR_1;
 FUNC_1(VAR_9, VAR_0, VAR_11);
 if (VAR_11) {
  FUNC_1(VAR_9, VAR_4,
      FUNC_0(VAR_9, VAR_4) | VAR_5);
 } else {
  FUNC_1(VAR_9, VAR_4,
      FUNC_0(VAR_9, VAR_4) &~ VAR_5);
 }
}
