
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vmsuspend ;
struct vmctx {int fd; } ;
struct vm_suspend {int how; } ;
typedef enum vm_suspend_how { ____Placeholder_vm_suspend_how } vm_suspend_how ;


 int VAR_0 ;
 int FUNC_0 (struct vm_suspend*,int) ;
 int FUNC_1 (int ,int ,struct vm_suspend*) ;

int
FUNC_2(struct vmctx *VAR_1, enum vm_suspend_how VAR_2)
{
 struct vm_suspend VAR_3;

 FUNC_0(&VAR_3, sizeof(VAR_3));
 VAR_3.how = VAR_2;
 return (FUNC_1(VAR_1->fd, VAR_0, &VAR_3));
}
