
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int VAR_0 ;
 int FUNC_0 (int,int*) ;

const char *
FUNC_1(void)
{
 static union {
  struct {
   u_int high;
   char name[13];
  } hv;
  u_int regs[4];
 } VAR_1;


 FUNC_0(1, VAR_1.regs);
 if ((VAR_1.regs[2] & VAR_0) == 0)
  return (((void*)0));

 FUNC_0(0x40000000, VAR_1.regs);
 return (VAR_1.hv.name);
}
