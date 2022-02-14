
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trapframe {int tf_eip; int tf_ebp; int tf_eax; int tf_trapno; } ;
struct thread {int dummy; } ;
struct i386_frame {scalar_t__ f_frame; int f_retaddr; } ;
typedef int db_expr_t ;
typedef scalar_t__ db_addr_t ;
typedef int c_db_sym_t ;
struct TYPE_2__ {int tss_esp; int tss_eip; int tss_ebp; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ) ;
 int VAR_3 ;


 int FUNC_1 (struct trapframe*) ;
 int VAR_4 ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (char const*,int ,int ,int ,int,scalar_t__*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int,int ,int *) ;
 int FUNC_6 (int ,char const**,int *) ;
 int FUNC_7 (int ,struct thread*) ;
 int FUNC_8 (struct trapframe*) ;
 int FUNC_9 (char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_10 (char const*,char*) ;
 scalar_t__ FUNC_11 (char const*,char*,int) ;

__attribute__((used)) static void
FUNC_12(struct i386_frame **VAR_6, db_addr_t *VAR_7, struct thread *VAR_8)
{
 struct trapframe *VAR_9;
 int VAR_10;
 int VAR_11, VAR_12, VAR_13;
 db_expr_t VAR_14;
 c_db_sym_t VAR_15;
 const char *VAR_16;

 VAR_11 = FUNC_2((int) &(*VAR_6)->f_retaddr, 4, 0);
 VAR_13 = FUNC_2((int) &(*VAR_6)->f_frame, 4, 0);
 VAR_10 = VAR_2;

 if (VAR_11 >= VAR_3) {
  VAR_15 = FUNC_5(VAR_11 - 1 - VAR_5, VAR_0,
      &VAR_14);
 } else {
  VAR_15 = FUNC_5(VAR_11 - 1, VAR_0, &VAR_14);
 }
 FUNC_6(VAR_15, &VAR_16, ((void*)0));
 if (VAR_16 != ((void*)0)) {
  if (FUNC_10(VAR_16, "calltrap") == 0 ||
      FUNC_10(VAR_16, "fork_trampoline") == 0)
   VAR_10 = 128;
  else if (FUNC_11(VAR_16, "Xatpic_intr", 11) == 0 ||
      FUNC_11(VAR_16, "Xapic_isr", 9) == 0) {
   VAR_10 = 130;
  } else if (FUNC_10(VAR_16, "Xlcall_syscall") == 0 ||
      FUNC_10(VAR_16, "Xint0x80_syscall") == 0)
   VAR_10 = 129;
  else if (FUNC_10(VAR_16, "dblfault_handler") == 0)
   VAR_10 = VAR_1;
  else if (FUNC_10(VAR_16, "Xtimerint") == 0 ||
      FUNC_10(VAR_16, "Xxen_intr_upcall") == 0)
   VAR_10 = 130;
  else if (FUNC_10(VAR_16, "Xcpustop") == 0 ||
      FUNC_10(VAR_16, "Xrendezvous") == 0 ||
      FUNC_10(VAR_16, "Xipi_intr_bitmap_handler") == 0) {

   VAR_10 = 130;
  }
 }




 if (VAR_10 == VAR_2) {
  *VAR_7 = (db_addr_t) VAR_11;
  *VAR_6 = (struct i386_frame *) VAR_13;
  return;
 }

 FUNC_3(VAR_16, 0, 0, 0, VAR_11, &(*VAR_6)->f_frame);






 if (VAR_10 == VAR_1) {
  VAR_12 = FUNC_0(VAR_4)->tss_esp;
  VAR_11 = FUNC_0(VAR_4)->tss_eip;
  VAR_13 = FUNC_0(VAR_4)->tss_ebp;
  FUNC_4(
      "--- trap 0x17, eip = %#r, esp = %#r, ebp = %#r ---\n",
      VAR_11, VAR_12, VAR_13);
  *VAR_7 = (db_addr_t) VAR_11;
  *VAR_6 = (struct i386_frame *) VAR_13;
  return;
 }






 VAR_9 = (struct trapframe *)(*VAR_6)->f_frame;





 if (VAR_9 == ((void*)0)) {
  *VAR_7 = 0;
  *VAR_6 = 0;
  FUNC_4("--- kthread start\n");
  return;
 }

 VAR_12 = FUNC_8(VAR_9);
 VAR_11 = VAR_9->tf_eip;
 VAR_13 = VAR_9->tf_ebp;
 switch (VAR_10) {
 case 128:
  FUNC_4("--- trap %#r", VAR_9->tf_trapno);
  break;
 case 129:
  FUNC_4("--- syscall");
  FUNC_7(VAR_9->tf_eax, VAR_8);
  break;
 case 130:
  FUNC_4("--- interrupt");
  break;
 default:
  FUNC_9("The moon has moved again.");
 }
 FUNC_4(", eip = %#r, esp = %#r, ebp = %#r ---\n", VAR_11, VAR_12, VAR_13);






 switch (VAR_10) {
 case 128:
 case 130:
  if (!FUNC_1(VAR_9))
   break;

 case 129:
  VAR_13 = 0;
  VAR_11 = 0;
  break;
 }

 *VAR_7 = (db_addr_t) VAR_11;
 *VAR_6 = (struct i386_frame *) VAR_13;
}
