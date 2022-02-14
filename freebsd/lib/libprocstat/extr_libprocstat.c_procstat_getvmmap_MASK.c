
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procstat {int type; int core; } ;
struct kinfo_vmentry {int dummy; } ;
struct kinfo_proc {int ki_pid; } ;





 struct kinfo_vmentry* FUNC_0 (int ,unsigned int*) ;
 struct kinfo_vmentry* FUNC_1 (int ,unsigned int*) ;
 int FUNC_2 (char*,...) ;

struct kinfo_vmentry *
FUNC_3(struct procstat *VAR_0, struct kinfo_proc *VAR_1,
    unsigned int *VAR_2)
{

 switch(VAR_0->type) {
 case 129:
  FUNC_2("kvm method is not supported");
  return (((void*)0));
 case 128:
  return (FUNC_0(VAR_1->ki_pid, VAR_2));
 case 130:
  return (FUNC_1(VAR_0->core, VAR_2));
 default:
  FUNC_2("unknown access method: %d", VAR_0->type);
  return (((void*)0));
 }
}
