
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int tf_rsp; scalar_t__ tf_rbp; } ;
struct thread {int dummy; } ;
struct amd64_frame {int f_retaddr; } ;
typedef scalar_t__ register_t ;
typedef scalar_t__ db_expr_t ;
typedef long db_addr_t ;
typedef scalar_t__ c_db_sym_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (long) ;
 scalar_t__ VAR_4 ;
 void* FUNC_1 (long,int,scalar_t__) ;
 int FUNC_2 (struct amd64_frame**,long*,struct thread*) ;
 int VAR_5 ;
 int FUNC_3 (char const*,long,struct amd64_frame*) ;
 scalar_t__ FUNC_4 (long,int ,scalar_t__*) ;
 int FUNC_5 (scalar_t__,char const**,int *) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

__attribute__((used)) static int
FUNC_7(struct thread *VAR_6, struct trapframe *VAR_7, struct amd64_frame *VAR_8,
    db_addr_t VAR_9, register_t VAR_10, int VAR_11)
{
 struct amd64_frame *VAR_12;
 const char *VAR_13;
 db_expr_t VAR_14;
 c_db_sym_t VAR_15;
 boolean_t VAR_16;

 if (VAR_11 == -1)
  VAR_11 = 1024;

 VAR_16 = VAR_4;
 while (VAR_11-- && !VAR_5) {
  VAR_15 = FUNC_4(VAR_9, VAR_1, &VAR_14);
  FUNC_5(VAR_15, &VAR_13, ((void*)0));
  VAR_12 = VAR_8;
  if (VAR_16) {
   VAR_16 = VAR_3;
   if (VAR_15 == VAR_0 && VAR_10 != 0) {





    FUNC_3(VAR_13, VAR_9, ((void*)0));
    VAR_9 = FUNC_1(VAR_10, 8, VAR_3);
    if (FUNC_4(VAR_9, VAR_2,
        &VAR_14) == VAR_0)
     break;
    continue;
   } else if (VAR_7 != ((void*)0)) {
    int VAR_17;

    VAR_17 = FUNC_1(VAR_9, 4, VAR_3);
    if ((VAR_17 & 0xffffffff) == 0xe5894855) {

     VAR_12 = (void *)(VAR_7->tf_rsp - 8);
    } else if ((VAR_17 & 0xffffff) == 0xe58948) {

     VAR_12 = (void *)VAR_7->tf_rsp;
     if (VAR_7->tf_rbp == 0) {

      VAR_8 = VAR_12;
     }
    } else if ((VAR_17 & 0xff) == 0xc3) {

     VAR_12 = (void *)(VAR_7->tf_rsp - 8);
    } else if (VAR_14 == 0) {

     VAR_12 = (void *)(VAR_7->tf_rsp - 8);
    }
   } else if (VAR_13 != ((void*)0) &&
       FUNC_6(VAR_13, "fork_trampoline") == 0) {




    FUNC_3(VAR_13, VAR_9, VAR_12);
    break;
   }
  }

  FUNC_3(VAR_13, VAR_9, VAR_12);

  if (VAR_12 != VAR_8) {

   VAR_9 = (db_addr_t)
       FUNC_1((long)&VAR_12->f_retaddr, 8, VAR_3);
   continue;
  }

  FUNC_2(&VAR_8, &VAR_9, VAR_6);

  if (FUNC_0((long)VAR_9) && !FUNC_0((long)VAR_8)) {
   VAR_15 = FUNC_4(VAR_9, VAR_1, &VAR_14);
   FUNC_5(VAR_15, &VAR_13, ((void*)0));
   FUNC_3(VAR_13, VAR_9, VAR_8);
   break;
  }
  if (!FUNC_0((long) VAR_8)) {
   break;
  }
 }

 return (0);
}
