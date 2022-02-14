
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_int ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,int,int*) ;
 int VAR_4 ;
 int FUNC_3 (char*,int) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_4(void)
{
 u_int VAR_7[4];
 uint64_t VAR_8;

 FUNC_0("hw.lazy_fpu_switch", &VAR_4);
 if (!VAR_5)
  return;
 FUNC_2(0xd, 0x0, VAR_7);
 VAR_6 = VAR_2 | VAR_1;
 if ((VAR_7[0] & VAR_6) != VAR_6)
  FUNC_3("CPU0 does not support X87 or SSE: %x", VAR_7[0]);
 VAR_6 = ((uint64_t)VAR_7[3] << 32) | VAR_7[0];
 VAR_8 = VAR_6;
 FUNC_1("hw.xsave_mask", &VAR_8);
 VAR_8 |= VAR_2 | VAR_1;
 VAR_6 &= VAR_8;
 if ((VAR_6 & VAR_0) != VAR_0)
  VAR_6 &= ~VAR_0;
 if ((VAR_6 & VAR_3) != VAR_3)
  VAR_6 &= ~VAR_3;
}
