
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int,int*) ;
 int FUNC_1 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void
FUNC_3(void)
{
 u_int VAR_13[4], VAR_14;






 FUNC_0(0xc0000000, VAR_13);
 if (VAR_13[0] >= 0xc0000001) {
  FUNC_0(0xc0000001, VAR_13);
  VAR_14 = VAR_13[3];
 } else
  return;


 if ((VAR_14 & VAR_5) != 0) {
  VAR_11 = VAR_9;
  FUNC_2(0x110B, FUNC_1(0x110B) | VAR_0);
 }


 if ((VAR_14 & VAR_1) != 0)
  VAR_12 |= VAR_6;
 if ((VAR_14 & VAR_2) != 0)
  VAR_12 |= VAR_7;
 if ((VAR_14 & VAR_3) != 0)
  VAR_12 |= VAR_10;
 if ((VAR_14 & VAR_4) != 0)
  VAR_12 |= VAR_8;
 if (VAR_12 != 0)
  FUNC_2(0x1107, FUNC_1(0x1107) | (1 << 28));
}
