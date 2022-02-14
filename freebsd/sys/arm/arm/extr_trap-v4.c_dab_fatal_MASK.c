
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct trapframe {size_t tf_spsr; int tf_pc; int tf_r0; int tf_r1; int tf_r2; int tf_r3; int tf_r4; int tf_r5; int tf_r6; int tf_r7; int tf_r8; int tf_r9; int tf_r10; int tf_r11; size_t tf_r12; int tf_usr_sp; int tf_usr_lr; int tf_svc_sp; int tf_svc_lr; } ;
struct thread {int dummy; } ;
struct ksig {int dummy; } ;
struct TYPE_2__ {char* desc; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct trapframe*) ;
 TYPE_1__* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct trapframe*,size_t) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 () ;
 int FUNC_4 (size_t,int ,struct trapframe*) ;
 int VAR_9 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,...) ;
 scalar_t__ FUNC_7 (struct trapframe*,size_t) ;

__attribute__((used)) static int
FUNC_8(struct trapframe *VAR_10, u_int VAR_11, u_int VAR_12, struct thread *VAR_13,
    struct ksig *VAR_14)
{
 const char *VAR_15;
 VAR_15 = FUNC_0(VAR_10) ? "user" : "kernel";

 FUNC_1(VAR_5|VAR_4);
 if (VAR_13 != ((void*)0)) {
  FUNC_6("Fatal %s mode data abort: '%s'\n", VAR_15,
      VAR_6[VAR_11 & VAR_1].desc);
  FUNC_6("trapframe: %p\nFSR=%08x, FAR=", VAR_10, VAR_11);
  if ((VAR_11 & VAR_0) == 0)
   FUNC_6("%08x, ", VAR_12);
  else
   FUNC_6("Invalid,  ");
  FUNC_6("spsr=%08x\n", VAR_10->tf_spsr);
 } else {
  FUNC_6("Fatal %s mode prefetch abort at 0x%08x\n",
      VAR_15, VAR_10->tf_pc);
  FUNC_6("trapframe: %p, spsr=%08x\n", VAR_10, VAR_10->tf_spsr);
 }

 FUNC_6("r0 =%08x, r1 =%08x, r2 =%08x, r3 =%08x\n",
     VAR_10->tf_r0, VAR_10->tf_r1, VAR_10->tf_r2, VAR_10->tf_r3);
 FUNC_6("r4 =%08x, r5 =%08x, r6 =%08x, r7 =%08x\n",
     VAR_10->tf_r4, VAR_10->tf_r5, VAR_10->tf_r6, VAR_10->tf_r7);
 FUNC_6("r8 =%08x, r9 =%08x, r10=%08x, r11=%08x\n",
     VAR_10->tf_r8, VAR_10->tf_r9, VAR_10->tf_r10, VAR_10->tf_r11);
 FUNC_6("r12=%08x, ", VAR_10->tf_r12);

 if (FUNC_0(VAR_10))
  FUNC_6("usp=%08x, ulr=%08x",
      VAR_10->tf_usr_sp, VAR_10->tf_usr_lr);
 else
  FUNC_6("ssp=%08x, slr=%08x",
      VAR_10->tf_svc_sp, VAR_10->tf_svc_lr);
 FUNC_6(", pc =%08x\n\n", VAR_10->tf_pc);
 FUNC_5("Fatal abort");

}
