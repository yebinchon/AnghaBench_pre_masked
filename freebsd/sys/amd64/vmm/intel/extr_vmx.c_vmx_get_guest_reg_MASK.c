
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vmxctx {int guest_r15; int guest_r14; int guest_r13; int guest_r12; int guest_r11; int guest_r10; int guest_r9; int guest_r8; int guest_rdi; int guest_rsi; int guest_rbp; int guest_rbx; int guest_rdx; int guest_rcx; int guest_rax; } ;
struct vmx {struct vmxctx* ctx; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static uint64_t
FUNC_2(struct vmx *VAR_1, int VAR_2, int VAR_3)
{
 const struct vmxctx *VAR_4;

 VAR_4 = &VAR_1->ctx[VAR_2];

 switch (VAR_3) {
 case 0:
  return (VAR_4->guest_rax);
 case 1:
  return (VAR_4->guest_rcx);
 case 2:
  return (VAR_4->guest_rdx);
 case 3:
  return (VAR_4->guest_rbx);
 case 4:
  return (FUNC_1(VAR_0));
 case 5:
  return (VAR_4->guest_rbp);
 case 6:
  return (VAR_4->guest_rsi);
 case 7:
  return (VAR_4->guest_rdi);
 case 8:
  return (VAR_4->guest_r8);
 case 9:
  return (VAR_4->guest_r9);
 case 10:
  return (VAR_4->guest_r10);
 case 11:
  return (VAR_4->guest_r11);
 case 12:
  return (VAR_4->guest_r12);
 case 13:
  return (VAR_4->guest_r13);
 case 14:
  return (VAR_4->guest_r14);
 case 15:
  return (VAR_4->guest_r15);
 default:
  FUNC_0("invalid vmx register %d", VAR_3);
 }
}
