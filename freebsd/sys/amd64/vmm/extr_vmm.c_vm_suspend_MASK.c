
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {int maxcpus; int active_cpus; int suspend; } ;
typedef enum vm_suspend_how { ____Placeholder_vm_suspend_how } vm_suspend_how ;


 scalar_t__ FUNC_0 (int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct vm*,char*,int) ;
 int FUNC_2 (struct vm*,char*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct vm*,int,int) ;

int
FUNC_5(struct vm *VAR_4, enum vm_suspend_how VAR_5)
{
 int VAR_6;

 if (VAR_5 <= VAR_3 || VAR_5 >= VAR_2)
  return (VAR_1);

 if (FUNC_3(&VAR_4->suspend, 0, VAR_5) == 0) {
  FUNC_2(VAR_4, "virtual machine already suspended %d/%d",
      VAR_4->suspend, VAR_5);
  return (VAR_0);
 }

 FUNC_1(VAR_4, "virtual machine successfully suspended %d", VAR_5);




 for (VAR_6 = 0; VAR_6 < VAR_4->maxcpus; VAR_6++) {
  if (FUNC_0(VAR_6, &VAR_4->active_cpus))
   FUNC_4(VAR_4, VAR_6, 0);
 }

 return (0);
}
