
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int32_t ;
typedef int u_int ;
struct utrapframe {int uf_fsr; int uf_state; scalar_t__ uf_pc; } ;
struct fpemu {int fe_fsr; } ;




 int VAR_0 ;




 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct utrapframe*,struct fpemu*,int ,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

int
FUNC_6(struct utrapframe *VAR_5)
{
 struct fpemu VAR_6;
 u_long VAR_7, VAR_8;
 u_int VAR_9;
 int VAR_10;

 VAR_7 = VAR_5->uf_fsr;

 switch (FUNC_0(VAR_7)) {
 case 131:
  FUNC_5("lost FPU trap type\n");
  return (0);
 case 132:
  return (VAR_4);
 case 130:
  FUNC_5("FPU sequence error\n");
  return (VAR_4);
 case 133:
  FUNC_5("FPU hardware error\n");
  return (VAR_4);
 case 129:
 case 128:
  break;
 default:
  FUNC_5("unknown FPU error\n");
  return (VAR_4);
 }

 VAR_6.fe_fsr = VAR_7 & ~VAR_0;
 VAR_9 = *(u_int32_t *)VAR_5->uf_pc;
 if (FUNC_2(VAR_9) != VAR_3 || (FUNC_1(VAR_9) != VAR_1 &&
     FUNC_1(VAR_9) != VAR_2))
  FUNC_4("bogus FP fault");
 VAR_8 = VAR_5->uf_state;
 VAR_10 = FUNC_3(VAR_5, &VAR_6, VAR_9, VAR_8);
 if (VAR_10 != 0)
  return (VAR_10);
 __asm __volatile("ldx %0, %%fsr" : : "m" (VAR_6.fe_fsr));
 return (0);
}
