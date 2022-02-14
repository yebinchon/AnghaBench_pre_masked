
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vmrun ;
struct vmctx {int fd; } ;
struct vm_run {int cpuid; int vm_exit; } ;
struct vm_exit {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct vm_exit*,int) ;
 int FUNC_1 (struct vm_run*,int) ;
 int FUNC_2 (int ,int ,struct vm_run*) ;

int
FUNC_3(struct vmctx *VAR_1, int VAR_2, struct vm_exit *VAR_3)
{
 int VAR_4;
 struct vm_run VAR_5;

 FUNC_1(&VAR_5, sizeof(VAR_5));
 VAR_5.cpuid = VAR_2;

 VAR_4 = FUNC_2(VAR_1->fd, VAR_0, &VAR_5);
 FUNC_0(&VAR_5.vm_exit, VAR_3, sizeof(struct vm_exit));
 return (VAR_4);
}
