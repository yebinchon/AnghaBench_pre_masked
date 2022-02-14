
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* vm_paddr_t ;
struct vmctx {int fd; } ;
struct vm_pptdev_mmio {int bus; int slot; int func; size_t len; void* hpa; void* gpa; } ;
typedef int pptmmio ;


 int VAR_0 ;
 int FUNC_0 (struct vm_pptdev_mmio*,int) ;
 int FUNC_1 (int ,int ,struct vm_pptdev_mmio*) ;

int
FUNC_2(struct vmctx *VAR_1, int VAR_2, int VAR_3, int VAR_4,
     vm_paddr_t VAR_5, size_t VAR_6, vm_paddr_t VAR_7)
{
 struct vm_pptdev_mmio VAR_8;

 FUNC_0(&VAR_8, sizeof(VAR_8));
 VAR_8.bus = VAR_2;
 VAR_8.slot = VAR_3;
 VAR_8.func = VAR_4;
 VAR_8.gpa = VAR_5;
 VAR_8.len = VAR_6;
 VAR_8.hpa = VAR_7;

 return (FUNC_1(VAR_1->fd, VAR_0, &VAR_8));
}
