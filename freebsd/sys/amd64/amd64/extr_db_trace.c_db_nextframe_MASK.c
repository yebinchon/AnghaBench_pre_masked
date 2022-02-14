
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {long tf_rsp; long tf_rip; long tf_rbp; int tf_rax; int tf_trapno; } ;
struct thread {int dummy; } ;
struct amd64_frame {int f_frame; int f_retaddr; } ;
typedef int db_expr_t ;
typedef scalar_t__ db_addr_t ;
typedef int c_db_sym_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (long) ;

 int VAR_2 ;


 long FUNC_1 (long,int,int ) ;
 int FUNC_2 (char const*,long,int *) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (long,int ,int *) ;
 int FUNC_5 (int ,char const**,int *) ;
 int FUNC_6 (int ,struct thread*) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 scalar_t__ FUNC_9 (char const*,char*,int) ;

__attribute__((used)) static void
FUNC_10(struct amd64_frame **VAR_3, db_addr_t *VAR_4, struct thread *VAR_5)
{
 struct trapframe *VAR_6;
 int VAR_7;
 long VAR_8, VAR_9, VAR_10;
 db_expr_t VAR_11;
 c_db_sym_t VAR_12;
 const char *VAR_13;

 VAR_8 = FUNC_1((long) &(*VAR_3)->f_retaddr, 8, VAR_1);
 VAR_10 = FUNC_1((long) &(*VAR_3)->f_frame, 8, VAR_1);
 VAR_7 = VAR_2;
 VAR_12 = FUNC_4(VAR_8 - 1, VAR_0, &VAR_11);
 FUNC_5(VAR_12, &VAR_13, ((void*)0));
 if (VAR_13 != ((void*)0)) {
  if (FUNC_8(VAR_13, "calltrap") == 0 ||
      FUNC_8(VAR_13, "fork_trampoline") == 0 ||
      FUNC_8(VAR_13, "mchk_calltrap") == 0 ||
      FUNC_8(VAR_13, "nmi_calltrap") == 0 ||
      FUNC_8(VAR_13, "Xdblfault") == 0)
   VAR_7 = 128;
  else if (FUNC_9(VAR_13, "Xatpic_intr", 11) == 0 ||
      FUNC_9(VAR_13, "Xapic_isr", 9) == 0 ||
      FUNC_8(VAR_13, "Xxen_intr_upcall") == 0 ||
      FUNC_8(VAR_13, "Xtimerint") == 0 ||
      FUNC_8(VAR_13, "Xipi_intr_bitmap_handler") == 0 ||
      FUNC_8(VAR_13, "Xcpustop") == 0 ||
      FUNC_8(VAR_13, "Xcpususpend") == 0 ||
      FUNC_8(VAR_13, "Xrendezvous") == 0)
   VAR_7 = 130;
  else if (FUNC_8(VAR_13, "Xfast_syscall") == 0 ||
      FUNC_8(VAR_13, "Xfast_syscall_pti") == 0 ||
      FUNC_8(VAR_13, "fast_syscall_common") == 0)
   VAR_7 = 129;




 }




 if (VAR_7 == VAR_2) {
  *VAR_4 = (db_addr_t) VAR_8;
  *VAR_3 = (struct amd64_frame *) VAR_10;
  return;
 }

 FUNC_2(VAR_13, VAR_8, &(*VAR_3)->f_frame);





 VAR_6 = (struct trapframe *)((long)*VAR_3 + 16);

 if (FUNC_0((long) VAR_6)) {
  VAR_9 = VAR_6->tf_rsp;
  VAR_8 = VAR_6->tf_rip;
  VAR_10 = VAR_6->tf_rbp;
  switch (VAR_7) {
  case 128:
   FUNC_3("--- trap %#r", VAR_6->tf_trapno);
   break;
  case 129:
   FUNC_3("--- syscall");
   FUNC_6(VAR_6->tf_rax, VAR_5);
   break;
  case 130:
   FUNC_3("--- interrupt");
   break;
  default:
   FUNC_7("The moon has moved again.");
  }
  FUNC_3(", rip = %#lr, rsp = %#lr, rbp = %#lr ---\n", VAR_8,
      VAR_9, VAR_10);
 }

 *VAR_4 = (db_addr_t) VAR_8;
 *VAR_3 = (struct amd64_frame *) VAR_10;
}
