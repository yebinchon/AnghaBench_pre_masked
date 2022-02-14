
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vmregset ;
typedef int uint64_t ;
struct vmctx {int fd; } ;
struct vm_register_set {int cpuid; unsigned int count; int const* regnums; int * regvals; } ;


 int VAR_0 ;
 int FUNC_0 (struct vm_register_set*,int) ;
 int FUNC_1 (int ,int ,struct vm_register_set*) ;

int
FUNC_2(struct vmctx *VAR_1, int VAR_2, unsigned int VAR_3,
    const int *VAR_4, uint64_t *VAR_5)
{
 int VAR_6;
 struct vm_register_set VAR_7;

 FUNC_0(&VAR_7, sizeof(VAR_7));
 VAR_7.cpuid = VAR_2;
 VAR_7.count = VAR_3;
 VAR_7.regnums = VAR_4;
 VAR_7.regvals = VAR_5;

 VAR_6 = FUNC_1(VAR_1->fd, VAR_0, &VAR_7);
 return (VAR_6);
}
