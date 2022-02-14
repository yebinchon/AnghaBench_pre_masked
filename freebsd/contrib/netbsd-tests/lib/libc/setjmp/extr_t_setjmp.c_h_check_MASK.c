
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {scalar_t__ sa_flags; int sa_mask; int sa_handler; } ;
typedef int sigset_t ;
typedef int sigjmp_buf ;
typedef int jmp_buf ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int VAR_8 ;
 int FUNC_6 () ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,struct sigaction*,int *) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int ,int *,int *) ;
 int FUNC_15 (int ,int) ;

__attribute__((used)) static void
FUNC_16(int VAR_9)
{
 struct sigaction VAR_10;
 jmp_buf VAR_11;
 sigjmp_buf VAR_12;
 sigset_t VAR_13;
 int VAR_14, VAR_15;

 VAR_14 = FUNC_6();

 if (VAR_9 == VAR_3 || VAR_9 == VAR_5)
  VAR_8 = 0;
 else if (VAR_9 == VAR_6 || VAR_9 == VAR_4)
  VAR_8 = 1;
 else
  FUNC_4("unknown test");

 VAR_10.sa_handler = VAR_7;
 FUNC_12(&VAR_10.sa_mask);
 VAR_10.sa_flags = 0;
 FUNC_1(FUNC_10(VAR_0, &VAR_10, ((void*)0)) != -1);
 FUNC_1(FUNC_12(&VAR_13) != -1);
 FUNC_1(FUNC_11(&VAR_13, VAR_0) != -1);
 FUNC_1(FUNC_14(VAR_1, &VAR_13, ((void*)0)) != -1);

 if (VAR_9 == VAR_3)
  VAR_15 = FUNC_9(VAR_11);
 else if (VAR_9 == VAR_6)
  VAR_15 = FUNC_3(VAR_11);
 else
  VAR_15 = FUNC_15(VAR_12, !VAR_8);

 if (VAR_15 != 0) {
  FUNC_0(VAR_15 == VAR_14, "setjmp returned wrong value");
  FUNC_7(VAR_14, VAR_0);
  FUNC_0(!VAR_8, "kill(SIGABRT) failed");
  FUNC_5();
 }

 FUNC_1(FUNC_14(VAR_2, &VAR_13, ((void*)0)) != -1);

 if (VAR_9 == VAR_3)
  FUNC_8(VAR_11, VAR_14);
 else if (VAR_9 == VAR_6)
  FUNC_2(VAR_11, VAR_14);
 else
  FUNC_13(VAR_12, VAR_14);

 FUNC_4("jmp failed");
}
