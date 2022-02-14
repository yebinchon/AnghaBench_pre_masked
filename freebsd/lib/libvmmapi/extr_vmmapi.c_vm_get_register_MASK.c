
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vmreg ;
typedef int uint64_t ;
struct vmctx {int fd; } ;
struct vm_register {int cpuid; int regnum; int regval; } ;


 int VAR_0 ;
 int FUNC_0 (struct vm_register*,int) ;
 int FUNC_1 (int ,int ,struct vm_register*) ;

int
FUNC_2(struct vmctx *VAR_1, int VAR_2, int VAR_3, uint64_t *VAR_4)
{
 int VAR_5;
 struct vm_register VAR_6;

 FUNC_0(&VAR_6, sizeof(VAR_6));
 VAR_6.cpuid = VAR_2;
 VAR_6.regnum = VAR_3;

 VAR_5 = FUNC_1(VAR_1->fd, VAR_0, &VAR_6);
 *VAR_4 = VAR_6.regval;
 return (VAR_5);
}
