
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ath_hal {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath_hal*,int ,char*,int,int,int,int,int,int,int,int,int) ;
 int VAR_1 ;
 int FUNC_1 (struct ath_hal*,int,int) ;
 int FUNC_2 (struct ath_hal*,int) ;

void
FUNC_3(struct ath_hal *VAR_2, int VAR_3, uint8_t VAR_4[])
{
 int VAR_5, VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_6 = FUNC_2(VAR_2, VAR_3);
 VAR_5 = VAR_0 + (672 << 2) + VAR_6;

 for (VAR_7 = 0; VAR_7 < 32; VAR_7++) {
  VAR_8 = ((VAR_4[4*VAR_7 + 0] & 0xFF) << 0) |
      ((VAR_4[4*VAR_7 + 1] & 0xFF) << 8) |
      ((VAR_4[4*VAR_7 + 2] & 0xFF) << 16) |
      ((VAR_4[4*VAR_7 + 3] & 0xFF) << 24) ;
  FUNC_1(VAR_2, VAR_5, VAR_8);
  FUNC_0(VAR_2, VAR_1, "PDADC: Chain %d |"
      " PDADC %3d Value %3d | PDADC %3d Value %3d | PDADC %3d"
      " Value %3d | PDADC %3d Value %3d |\n",
      VAR_3,
      4*VAR_7, VAR_4[4*VAR_7],
      4*VAR_7+1, VAR_4[4*VAR_7 + 1],
      4*VAR_7+2, VAR_4[4*VAR_7 + 2],
      4*VAR_7+3, VAR_4[4*VAR_7 + 3]);
  VAR_5 += 4;
 }
}
