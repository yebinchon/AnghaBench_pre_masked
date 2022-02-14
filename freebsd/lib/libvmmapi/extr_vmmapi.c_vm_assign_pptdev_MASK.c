
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmctx {int fd; } ;
struct vm_pptdev {int bus; int slot; int func; } ;
typedef int pptdev ;


 int VAR_0 ;
 int FUNC_0 (struct vm_pptdev*,int) ;
 int FUNC_1 (int ,int ,struct vm_pptdev*) ;

int
FUNC_2(struct vmctx *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 struct vm_pptdev VAR_5;

 FUNC_0(&VAR_5, sizeof(VAR_5));
 VAR_5.bus = VAR_2;
 VAR_5.slot = VAR_3;
 VAR_5.func = VAR_4;

 return (FUNC_1(VAR_1->fd, VAR_0, &VAR_5));
}
