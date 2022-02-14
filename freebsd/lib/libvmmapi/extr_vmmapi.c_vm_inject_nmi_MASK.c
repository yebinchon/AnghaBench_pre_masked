
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vmnmi ;
struct vmctx {int fd; } ;
struct vm_nmi {int cpuid; } ;


 int VAR_0 ;
 int FUNC_0 (struct vm_nmi*,int) ;
 int FUNC_1 (int ,int ,struct vm_nmi*) ;

int
FUNC_2(struct vmctx *VAR_1, int VAR_2)
{
 struct vm_nmi VAR_3;

 FUNC_0(&VAR_3, sizeof(VAR_3));
 VAR_3.cpuid = VAR_2;

 return (FUNC_1(VAR_1->fd, VAR_0, &VAR_3));
}
