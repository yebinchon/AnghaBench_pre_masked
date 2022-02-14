
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint64_t ;
struct vmxctx {void* guest_r15; void* guest_r14; void* guest_r13; void* guest_r12; void* guest_r11; void* guest_r10; void* guest_r9; void* guest_r8; void* guest_rdi; void* guest_rsi; void* guest_rbp; void* guest_rbx; void* guest_rdx; void* guest_rcx; void* guest_rax; } ;
struct vmx {struct vmxctx* ctx; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,void*) ;

__attribute__((used)) static void
FUNC_2(struct vmx *VAR_1, int VAR_2, int VAR_3, uint64_t VAR_4)
{
 struct vmxctx *VAR_5;

 VAR_5 = &VAR_1->ctx[VAR_2];

 switch (VAR_3) {
 case 0:
  VAR_5->guest_rax = VAR_4;
  break;
 case 1:
  VAR_5->guest_rcx = VAR_4;
  break;
 case 2:
  VAR_5->guest_rdx = VAR_4;
  break;
 case 3:
  VAR_5->guest_rbx = VAR_4;
  break;
 case 4:
  FUNC_1(VAR_0, VAR_4);
  break;
 case 5:
  VAR_5->guest_rbp = VAR_4;
  break;
 case 6:
  VAR_5->guest_rsi = VAR_4;
  break;
 case 7:
  VAR_5->guest_rdi = VAR_4;
  break;
 case 8:
  VAR_5->guest_r8 = VAR_4;
  break;
 case 9:
  VAR_5->guest_r9 = VAR_4;
  break;
 case 10:
  VAR_5->guest_r10 = VAR_4;
  break;
 case 11:
  VAR_5->guest_r11 = VAR_4;
  break;
 case 12:
  VAR_5->guest_r12 = VAR_4;
  break;
 case 13:
  VAR_5->guest_r13 = VAR_4;
  break;
 case 14:
  VAR_5->guest_r14 = VAR_4;
  break;
 case 15:
  VAR_5->guest_r15 = VAR_4;
  break;
 default:
  FUNC_0("invalid vmx register %d", VAR_3);
 }
}
