
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procstat {int type; int core; } ;
struct kinfo_proc {int ki_pid; } ;





 int FUNC_0 (int ,char*,size_t) ;
 int FUNC_1 (int ,char*,size_t) ;
 int FUNC_2 (char*,int) ;

int
FUNC_3(struct procstat *VAR_0, struct kinfo_proc *VAR_1,
    char *VAR_2, size_t VAR_3)
{
 switch(VAR_0->type) {
 case 129:

  if (VAR_3 > 0)
   VAR_2[0] = '\0';
  return (0);
 case 128:
  return (FUNC_1(VAR_1->ki_pid, VAR_2,
      VAR_3));
 case 130:
  return (FUNC_0(VAR_0->core, VAR_2,
      VAR_3));
 default:
  FUNC_2("unknown access method: %d", VAR_0->type);
  return (-1);
 }
}
