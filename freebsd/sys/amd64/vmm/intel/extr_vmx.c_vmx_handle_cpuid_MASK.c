
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmxctx {int guest_rax; int guest_rdx; int guest_rcx; int guest_rbx; } ;
struct vm {int dummy; } ;


 int FUNC_0 (struct vm*,int,int *,int *,int *,int *) ;

__attribute__((used)) static int
FUNC_1(struct vm *VAR_0, int VAR_1, struct vmxctx *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_4 = VAR_2->guest_rax;

 VAR_3 = FUNC_0(VAR_0, VAR_1,
        (uint32_t*)(&VAR_2->guest_rax),
        (uint32_t*)(&VAR_2->guest_rbx),
        (uint32_t*)(&VAR_2->guest_rcx),
        (uint32_t*)(&VAR_2->guest_rdx));
 return (VAR_3);
}
