
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vmcap ;
struct vmctx {int fd; } ;
struct vm_capability {int cpuid; int captype; int capval; } ;
typedef enum vm_cap_type { ____Placeholder_vm_cap_type } vm_cap_type ;


 int VAR_0 ;
 int FUNC_0 (struct vm_capability*,int) ;
 int FUNC_1 (int ,int ,struct vm_capability*) ;

int
FUNC_2(struct vmctx *VAR_1, int VAR_2, enum vm_cap_type VAR_3, int VAR_4)
{
 struct vm_capability VAR_5;

 FUNC_0(&VAR_5, sizeof(VAR_5));
 VAR_5.cpuid = VAR_2;
 VAR_5.captype = VAR_3;
 VAR_5.capval = VAR_4;

 return (FUNC_1(VAR_1->fd, VAR_0, &VAR_5));
}
