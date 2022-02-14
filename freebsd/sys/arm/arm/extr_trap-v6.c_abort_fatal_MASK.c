
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct trapframe {int tf_spsr; int tf_pc; int tf_r0; int tf_r1; int tf_r2; int tf_r3; int tf_r4; int tf_r5; int tf_r6; int tf_r7; int tf_r8; int tf_r9; int tf_r10; int tf_r11; int tf_r12; int tf_usr_sp; int tf_usr_lr; int tf_svc_sp; int tf_svc_lr; } ;
struct thread {int dummy; } ;
struct ksig {int dummy; } ;
struct TYPE_2__ {char* desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct trapframe*) ;
 TYPE_1__* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct trapframe*,int) ;
 int FUNC_3 (int,int ,struct trapframe*) ;
 int VAR_8 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (struct trapframe*,int) ;

__attribute__((used)) static int
FUNC_7(struct trapframe *VAR_9, u_int VAR_10, u_int VAR_11, u_int VAR_12,
    u_int VAR_13, struct thread *VAR_14, struct ksig *VAR_15)
{
 bool VAR_16;
 const char *VAR_17;
 const char *VAR_18;

 VAR_16 = FUNC_0(VAR_9);







 VAR_17 = VAR_16 ? "user" : "kernel";
 VAR_18 = VAR_11 & VAR_1 ? "write" : "read";
 FUNC_1(VAR_5|VAR_4);

 if (VAR_14 != ((void*)0)) {
  FUNC_5("Fatal %s mode data abort: '%s' on %s\n", VAR_17,
      VAR_6[VAR_10].desc, VAR_18);
  FUNC_5("trapframe: %p\nFSR=%08x, FAR=", VAR_9, VAR_11);
  if (VAR_10 != VAR_0)
   FUNC_5("%08x, ", VAR_12);
  else
   FUNC_5("Invalid,  ");
  FUNC_5("spsr=%08x\n", VAR_9->tf_spsr);
 } else {
  FUNC_5("Fatal %s mode prefetch abort at 0x%08x\n",
      VAR_17, VAR_9->tf_pc);
  FUNC_5("trapframe: %p, spsr=%08x\n", VAR_9, VAR_9->tf_spsr);
 }

 FUNC_5("r0 =%08x, r1 =%08x, r2 =%08x, r3 =%08x\n",
     VAR_9->tf_r0, VAR_9->tf_r1, VAR_9->tf_r2, VAR_9->tf_r3);
 FUNC_5("r4 =%08x, r5 =%08x, r6 =%08x, r7 =%08x\n",
     VAR_9->tf_r4, VAR_9->tf_r5, VAR_9->tf_r6, VAR_9->tf_r7);
 FUNC_5("r8 =%08x, r9 =%08x, r10=%08x, r11=%08x\n",
     VAR_9->tf_r8, VAR_9->tf_r9, VAR_9->tf_r10, VAR_9->tf_r11);
 FUNC_5("r12=%08x, ", VAR_9->tf_r12);

 if (VAR_16)
  FUNC_5("usp=%08x, ulr=%08x",
      VAR_9->tf_usr_sp, VAR_9->tf_usr_lr);
 else
  FUNC_5("ssp=%08x, slr=%08x",
      VAR_9->tf_svc_sp, VAR_9->tf_svc_lr);
 FUNC_5(", pc =%08x\n\n", VAR_9->tf_pc);
 FUNC_4("Fatal abort");

}
