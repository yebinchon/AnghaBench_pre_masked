
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procstat {int type; int core; int kd; } ;
struct kinfo_proc {int ki_pid; } ;





 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int ,struct kinfo_proc*,int*) ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (char*,int) ;

int
FUNC_4(struct procstat *VAR_0, struct kinfo_proc *VAR_1, int *VAR_2)
{
 switch(VAR_0->type) {
 case 129:
  return (FUNC_1(VAR_0->kd, VAR_1, VAR_2));
 case 128:
  return (FUNC_2(VAR_1->ki_pid, VAR_2));
 case 130:
  return (FUNC_0(VAR_0->core, VAR_2));
 default:
  FUNC_3("unknown access method: %d", VAR_0->type);
  return (-1);
 }
}
