
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_int ;


 int VAR_0 ;
 int FUNC_0 (char*,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int,int*) ;
 int* VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_5(void)
{
 u_int VAR_8[4];
 uint64_t VAR_9;
 bool VAR_10;

 if (!VAR_6)
  return;
 FUNC_1(0xd, 0x0, VAR_8);
 VAR_7 = VAR_3 | VAR_2;
 if ((VAR_8[0] & VAR_7) != VAR_7)
  FUNC_3("CPU0 does not support X87 or SSE: %x", VAR_8[0]);
 VAR_7 = ((uint64_t)VAR_8[3] << 32) | VAR_8[0];
 VAR_9 = VAR_7;
 FUNC_0("hw.xsave_mask", &VAR_9);
 VAR_9 |= VAR_3 | VAR_2;
 VAR_7 &= VAR_9;
 if ((VAR_7 & VAR_1) != VAR_1)
  VAR_7 &= ~VAR_1;
 if ((VAR_7 & VAR_4) != VAR_4)
  VAR_7 &= ~VAR_4;

 FUNC_1(0xd, 0x1, VAR_8);
 if ((VAR_8[0] & VAR_0) != 0) {
  VAR_10 = FUNC_2();
  VAR_5[3] |= 0x10;
  FUNC_4(VAR_10);
 }
}
