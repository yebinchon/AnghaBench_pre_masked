
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {scalar_t__ sa_flags; int sa_mask; int sa_handler; } ;
typedef int sigset_t ;
typedef int sigjmp_buf ;
typedef int jmp_buf ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 int VAR_8 ;
 int FUNC_7 () ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int ,int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,struct sigaction*,int *) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (int ,int *,int *) ;
 int FUNC_17 (int ,int) ;

__attribute__((used)) static void
FUNC_18(int VAR_10)
{
 struct sigaction VAR_11;
 jmp_buf VAR_12;
 sigjmp_buf VAR_13;
 sigset_t VAR_14;
 int VAR_15, VAR_16;

 VAR_9 = FUNC_10();
 VAR_15 = FUNC_7();

 if (VAR_10 == VAR_3 || VAR_10 == VAR_5)
  VAR_8 = 0;
 else if (VAR_10 == VAR_6 || VAR_10 == VAR_4)
  VAR_8 = 1;
 else
  FUNC_5("unknown test");

 VAR_11.sa_handler = VAR_7;
 FUNC_14(&VAR_11.sa_mask);
 VAR_11.sa_flags = 0;
 FUNC_2(FUNC_12(VAR_0, &VAR_11, ((void*)0)) != -1);
 FUNC_2(FUNC_14(&VAR_14) != -1);
 FUNC_2(FUNC_13(&VAR_14, VAR_0) != -1);
 FUNC_2(FUNC_16(VAR_1, &VAR_14, ((void*)0)) != -1);
 FUNC_0(VAR_9 == FUNC_10());

 if (VAR_10 == VAR_3)
  VAR_16 = FUNC_11(VAR_12);
 else if (VAR_10 == VAR_6)
  VAR_16 = FUNC_4(VAR_12);
 else
  VAR_16 = FUNC_17(VAR_13, !VAR_8);

 if (VAR_16 != 0) {
  FUNC_0(VAR_9 == FUNC_10());
  FUNC_1(VAR_16 == VAR_15, "setjmp returned wrong value");
  FUNC_8(VAR_15, VAR_0);
  FUNC_1(!VAR_8, "kill(SIGABRT) failed");
  FUNC_0(VAR_9 == FUNC_10());
  FUNC_6();
 }

 FUNC_0(VAR_9 == FUNC_10());
 FUNC_2(FUNC_16(VAR_2, &VAR_14, ((void*)0)) != -1);

 if (VAR_10 == VAR_3)
  FUNC_9(VAR_12, VAR_15);
 else if (VAR_10 == VAR_6)
  FUNC_3(VAR_12, VAR_15);
 else
  FUNC_15(VAR_13, VAR_15);

 FUNC_5("jmp failed");
}
