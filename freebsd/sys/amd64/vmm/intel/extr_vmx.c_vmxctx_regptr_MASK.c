
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmxctx {int guest_dr6; int guest_dr3; int guest_dr2; int guest_dr1; int guest_dr0; int guest_cr2; int guest_r15; int guest_r14; int guest_r13; int guest_r12; int guest_r11; int guest_r10; int guest_r9; int guest_r8; int guest_rbp; int guest_rdi; int guest_rsi; int guest_rdx; int guest_rcx; int guest_rbx; int guest_rax; } ;
typedef int register_t ;
__attribute__((used)) static register_t *
FUNC_0(struct vmxctx *VAR_0, int VAR_1)
{

 switch (VAR_1) {
 case 134:
  return (&VAR_0->guest_rax);
 case 132:
  return (&VAR_0->guest_rbx);
 case 131:
  return (&VAR_0->guest_rcx);
 case 129:
  return (&VAR_0->guest_rdx);
 case 128:
  return (&VAR_0->guest_rsi);
 case 130:
  return (&VAR_0->guest_rdi);
 case 133:
  return (&VAR_0->guest_rbp);
 case 136:
  return (&VAR_0->guest_r8);
 case 135:
  return (&VAR_0->guest_r9);
 case 142:
  return (&VAR_0->guest_r10);
 case 141:
  return (&VAR_0->guest_r11);
 case 140:
  return (&VAR_0->guest_r12);
 case 139:
  return (&VAR_0->guest_r13);
 case 138:
  return (&VAR_0->guest_r14);
 case 137:
  return (&VAR_0->guest_r15);
 case 148:
  return (&VAR_0->guest_cr2);
 case 147:
  return (&VAR_0->guest_dr0);
 case 146:
  return (&VAR_0->guest_dr1);
 case 145:
  return (&VAR_0->guest_dr2);
 case 144:
  return (&VAR_0->guest_dr3);
 case 143:
  return (&VAR_0->guest_dr6);
 default:
  break;
 }
 return (((void*)0));
}
