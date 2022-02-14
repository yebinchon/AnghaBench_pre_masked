
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint64_t ;
struct vmctx {int fd; } ;
struct vm_pptdev_msi {int vcpu; int bus; int slot; int func; int numvec; void* addr; void* msg; } ;
typedef int pptmsi ;


 int VAR_0 ;
 int FUNC_0 (struct vm_pptdev_msi*,int) ;
 int FUNC_1 (int ,int ,struct vm_pptdev_msi*) ;

int
FUNC_2(struct vmctx *VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5,
    uint64_t VAR_6, uint64_t VAR_7, int VAR_8)
{
 struct vm_pptdev_msi VAR_9;

 FUNC_0(&VAR_9, sizeof(VAR_9));
 VAR_9.vcpu = VAR_2;
 VAR_9.bus = VAR_3;
 VAR_9.slot = VAR_4;
 VAR_9.func = VAR_5;
 VAR_9.msg = VAR_7;
 VAR_9.addr = VAR_6;
 VAR_9.numvec = VAR_8;

 return (FUNC_1(VAR_1->fd, VAR_0, &VAR_9));
}
