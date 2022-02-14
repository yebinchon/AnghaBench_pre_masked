
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint64_t ;
typedef int uint32_t ;
struct vmctx {int fd; } ;
struct vm_pptdev_msix {int vcpu; int bus; int slot; int func; int idx; int vector_control; void* addr; void* msg; } ;
typedef int pptmsix ;


 int VAR_0 ;
 int FUNC_0 (struct vm_pptdev_msix*,int) ;
 int FUNC_1 (int ,int ,struct vm_pptdev_msix*) ;

int
FUNC_2(struct vmctx *VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5,
    int VAR_6, uint64_t VAR_7, uint64_t VAR_8, uint32_t VAR_9)
{
 struct vm_pptdev_msix VAR_10;

 FUNC_0(&VAR_10, sizeof(VAR_10));
 VAR_10.vcpu = VAR_2;
 VAR_10.bus = VAR_3;
 VAR_10.slot = VAR_4;
 VAR_10.func = VAR_5;
 VAR_10.idx = VAR_6;
 VAR_10.msg = VAR_8;
 VAR_10.addr = VAR_7;
 VAR_10.vector_control = VAR_9;

 return FUNC_1(VAR_1->fd, VAR_0, &VAR_10);
}
