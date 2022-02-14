
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong_t ;
typedef int uint_t ;
struct reg {int r_gs; int r_es; int r_ds; int r_fs; int r_ss; int r_rsp; int r_rflags; int r_cs; int r_rip; int r_err; int r_trapno; int r_rax; int r_rcx; int r_rdx; int r_rbx; int r_rbp; int r_rsi; int r_rdi; int r_r8; int r_r9; int r_r10; int r_r11; int r_r12; int r_r13; int r_r14; int r_r15; } ;
typedef int greg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static ulong_t
FUNC_2(struct reg *VAR_3, uint_t VAR_4)
{

 switch (VAR_4) {
 case 142: return (VAR_3->r_r15);
 case 143: return (VAR_3->r_r14);
 case 144: return (VAR_3->r_r13);
 case 145: return (VAR_3->r_r12);
 case 146: return (VAR_3->r_r11);
 case 147: return (VAR_3->r_r10);
 case 140: return (VAR_3->r_r9);
 case 141: return (VAR_3->r_r8);
 case 135: return (VAR_3->r_rdi);
 case 131: return (VAR_3->r_rsi);
 case 138: return (VAR_3->r_rbp);
 case 137: return (VAR_3->r_rbx);
 case 134: return (VAR_3->r_rdx);
 case 136: return (VAR_3->r_rcx);
 case 139: return (VAR_3->r_rax);
 case 128: return (VAR_3->r_trapno);
 case 153: return (VAR_3->r_err);
 case 132: return (VAR_3->r_rip);
 case 155: return (VAR_3->r_cs);
 case 133: return (VAR_3->r_rflags);
 case 130: return (VAR_3->r_rsp);
 case 129: return (VAR_3->r_ss);
 case 151: return (VAR_3->r_fs);
 case 149: return (VAR_3->r_gs);
 case 154: return (VAR_3->r_ds);
 case 152: return (VAR_3->r_es);
 case 150: return (FUNC_1(VAR_0));
 case 148: return (FUNC_1(VAR_1));
 }

 FUNC_0("dtrace: illegal register constant");
}
