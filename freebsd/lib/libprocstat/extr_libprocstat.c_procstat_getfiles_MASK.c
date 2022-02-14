
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procstat {int type; } ;
struct kinfo_proc {int dummy; } ;
struct filestat_list {int dummy; } ;





 struct filestat_list* FUNC_0 (struct procstat*,struct kinfo_proc*,int) ;
 struct filestat_list* FUNC_1 (struct procstat*,struct kinfo_proc*,int) ;
 int FUNC_2 (char*,int) ;

struct filestat_list *
FUNC_3(struct procstat *VAR_0, struct kinfo_proc *VAR_1, int VAR_2)
{

 switch(VAR_0->type) {
 case 129:
  return (FUNC_0(VAR_0, VAR_1, VAR_2));
 case 128:
 case 130:
  return (FUNC_1(VAR_0, VAR_1, VAR_2));
 default:
  FUNC_2("unknown access method: %d", VAR_0->type);
  return (((void*)0));
 }
}
