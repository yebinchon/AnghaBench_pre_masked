
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procstat {int type; } ;
struct kinfo_proc {int ki_pid; } ;
struct kinfo_kstack {int dummy; } ;





 struct kinfo_kstack* FUNC_0 (int ,unsigned int*) ;
 int FUNC_1 (char*,...) ;

struct kinfo_kstack *
FUNC_2(struct procstat *VAR_0, struct kinfo_proc *VAR_1,
    unsigned int *VAR_2)
{
 switch(VAR_0->type) {
 case 129:
  FUNC_1("kvm method is not supported");
  return (((void*)0));
 case 128:
  return (FUNC_0(VAR_1->ki_pid, VAR_2));
 case 130:
  FUNC_1("core method is not supported");
  return (((void*)0));
 default:
  FUNC_1("unknown access method: %d", VAR_0->type);
  return (((void*)0));
 }
}
