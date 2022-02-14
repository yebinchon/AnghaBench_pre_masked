
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int tf_eflags; intptr_t tf_esp; scalar_t__ tf_ebp; scalar_t__ tf_err; int tf_ss; int tf_eip; int tf_cs; } ;
struct thread {int dummy; } ;
struct i386_frame {int f_arg0; int f_retaddr; } ;
typedef scalar_t__ register_t ;
typedef scalar_t__ db_expr_t ;
typedef scalar_t__ db_addr_t ;
typedef int * c_db_sym_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct trapframe*) ;
 scalar_t__ FUNC_1 (int,int,int) ;
 int FUNC_2 (struct i386_frame**,scalar_t__*,struct thread*) ;
 int FUNC_3 (struct i386_frame*) ;
 int VAR_5 ;
 int FUNC_4 (char const*,int,char**,int*,scalar_t__,struct i386_frame*) ;
 int FUNC_5 (char*,char*,int ,int ,int ,intptr_t,scalar_t__,struct trapframe*) ;
 int * FUNC_6 (scalar_t__,int ,scalar_t__*) ;
 int FUNC_7 (struct trapframe*) ;
 scalar_t__ FUNC_8 (int *,int*,char**) ;
 int FUNC_9 (int *,char const**,int *) ;
 int FUNC_10 (struct trapframe*) ;
 struct trapframe* VAR_6 ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (char const*,char*) ;

__attribute__((used)) static int
FUNC_13(struct thread *VAR_7, struct trapframe *VAR_8, struct i386_frame *VAR_9,
    db_addr_t VAR_10, register_t VAR_11, int VAR_12)
{
 struct i386_frame *VAR_13;

 char *VAR_14[16], **VAR_15 = ((void*)0);
 const char *VAR_16;
 int *VAR_17;
 db_expr_t VAR_18;
 c_db_sym_t VAR_19;
 int VAR_20, VAR_21;
 bool VAR_22;

 if (FUNC_7(VAR_8) == 16) {
  FUNC_5(
"--- 16-bit%s, cs:eip = %#x:%#x, ss:esp = %#x:%#x, ebp = %#x, tf = %p ---\n",
      (VAR_8->tf_eflags & VAR_4) ? " (vm86)" : "",
      VAR_8->tf_cs, VAR_8->tf_eip,
      FUNC_0(VAR_8) ? VAR_8->tf_ss : FUNC_11(),
      FUNC_0(VAR_8) ? VAR_8->tf_esp : (intptr_t)&VAR_8->tf_esp,
      VAR_8->tf_ebp, VAR_8);
  return (0);
 }


 if (VAR_9 == ((void*)0))
  goto out;
 if (VAR_6 && VAR_10 == VAR_6->tf_err) {




  if (FUNC_0(VAR_6))
   VAR_20 = (int)(VAR_6 + 1);
  else
   VAR_20 = (int)&VAR_6->tf_esp;
  VAR_10 = FUNC_1(VAR_20, 4, 0);
 }

 if (VAR_12 == -1)
  VAR_12 = 1024;

 VAR_22 = 1;
 while (VAR_12-- && !VAR_5) {
  VAR_19 = FUNC_6(VAR_10, VAR_1, &VAR_18);
  FUNC_9(VAR_19, &VAR_16, ((void*)0));
  VAR_13 = VAR_9;
  if (VAR_22) {
   VAR_22 = 0;
   if (VAR_19 == VAR_0 && VAR_11 != 0) {





    FUNC_4(VAR_16, 0, 0, 0, VAR_10,
        ((void*)0));
    VAR_10 = FUNC_1(VAR_11, 4, 0);
    if (FUNC_6(VAR_10, VAR_2,
        &VAR_18) == VAR_0)
     break;
    continue;
   } else if (VAR_8 != ((void*)0)) {
    VAR_20 = FUNC_1(VAR_10, 4, 0);
    if ((VAR_20 & 0xffffff) == 0x00e58955) {

     VAR_13 = (void *)(FUNC_10(VAR_8) - 4);
    } else if ((VAR_20 & 0xffff) == 0x0000e589) {

     VAR_13 = (void *)FUNC_10(VAR_8);
     if (VAR_8->tf_ebp == 0) {

      VAR_9 = VAR_13;
     }
    } else if ((VAR_20 & 0xff) == 0x000000c3) {

     VAR_13 = (void *)(FUNC_10(VAR_8) - 4);
    } else if (VAR_18 == 0) {

     VAR_13 = (void *)(FUNC_10(VAR_8) - 4);
    }
   } else if (FUNC_12(VAR_16, "fork_trampoline") == 0) {




    FUNC_4(VAR_16, 0, 0, 0, VAR_10,
        VAR_13);
    break;
   }
  }

  VAR_17 = &VAR_13->f_arg0;
  VAR_21 = 16;
  if (VAR_19 != ((void*)0) && FUNC_8(VAR_19, &VAR_21, VAR_14)) {
   VAR_15 = VAR_14;
  } else {
   VAR_21 = FUNC_3(VAR_9);
  }

  FUNC_4(VAR_16, VAR_21, VAR_15, VAR_17, VAR_10, VAR_13);

  if (VAR_13 != VAR_9) {

   VAR_10 = (db_addr_t)
       FUNC_1((int)&VAR_13->f_retaddr, 4, 0);
   continue;
  }

  FUNC_2(&VAR_9, &VAR_10, VAR_7);

out:







  if (VAR_9 == ((void*)0) || VAR_9 <= VAR_13) {
   if (VAR_10 != 0) {
    VAR_19 = FUNC_6(VAR_10, VAR_1,
        &VAR_18);
    FUNC_9(VAR_19, &VAR_16, ((void*)0));
    FUNC_4(VAR_16, 0, 0, 0, VAR_10, VAR_9);
   }
   break;
  }
 }

 return (0);
}
