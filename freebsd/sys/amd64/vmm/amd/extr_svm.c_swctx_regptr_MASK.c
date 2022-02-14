
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svm_regctx {int sctx_dr3; int sctx_dr2; int sctx_dr1; int sctx_dr0; int sctx_r15; int sctx_r14; int sctx_r13; int sctx_r12; int sctx_r11; int sctx_r10; int sctx_r9; int sctx_r8; int sctx_rbp; int sctx_rsi; int sctx_rdi; int sctx_rdx; int sctx_rcx; int sctx_rbx; } ;
typedef int register_t ;
__attribute__((used)) static register_t *
FUNC_0(struct svm_regctx *VAR_0, int VAR_1)
{

 switch (VAR_1) {
 case 132:
  return (&VAR_0->sctx_rbx);
 case 131:
  return (&VAR_0->sctx_rcx);
 case 129:
  return (&VAR_0->sctx_rdx);
 case 130:
  return (&VAR_0->sctx_rdi);
 case 128:
  return (&VAR_0->sctx_rsi);
 case 133:
  return (&VAR_0->sctx_rbp);
 case 135:
  return (&VAR_0->sctx_r8);
 case 134:
  return (&VAR_0->sctx_r9);
 case 141:
  return (&VAR_0->sctx_r10);
 case 140:
  return (&VAR_0->sctx_r11);
 case 139:
  return (&VAR_0->sctx_r12);
 case 138:
  return (&VAR_0->sctx_r13);
 case 137:
  return (&VAR_0->sctx_r14);
 case 136:
  return (&VAR_0->sctx_r15);
 case 145:
  return (&VAR_0->sctx_dr0);
 case 144:
  return (&VAR_0->sctx_dr1);
 case 143:
  return (&VAR_0->sctx_dr2);
 case 142:
  return (&VAR_0->sctx_dr3);
 default:
  return (((void*)0));
 }
}
