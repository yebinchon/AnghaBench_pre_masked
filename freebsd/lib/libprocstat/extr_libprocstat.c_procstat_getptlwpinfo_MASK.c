
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptrace_lwpinfo {int dummy; } ;
struct procstat {int type; int core; } ;





 struct ptrace_lwpinfo* FUNC_0 (int ,unsigned int*) ;
 int FUNC_1 (char*,...) ;

struct ptrace_lwpinfo *
FUNC_2(struct procstat *VAR_0, unsigned int *VAR_1)
{
 switch (VAR_0->type) {
 case 129:
  FUNC_1("kvm method is not supported");
  return (((void*)0));
 case 128:
  FUNC_1("sysctl method is not supported");
  return (((void*)0));
 case 130:
   return (FUNC_0(VAR_0->core, VAR_1));
 default:
  FUNC_1("unknown access method: %d", VAR_0->type);
  return (((void*)0));
 }
}
