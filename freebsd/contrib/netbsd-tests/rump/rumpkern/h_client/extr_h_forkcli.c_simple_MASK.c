
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rumpclient_fork {int dummy; } ;
typedef int pid_t ;
typedef int fd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int,int*,int) ;
 int FUNC_9 (struct rumpclient_fork*) ;
 struct rumpclient_fork* FUNC_10 () ;
 int FUNC_11 (int*) ;

__attribute__((used)) static void
FUNC_12(void)
{
 struct rumpclient_fork *VAR_2;
 pid_t VAR_3, VAR_4;
 int VAR_5, VAR_6;

 if ((VAR_3 = FUNC_6()) < 2)
  FUNC_3(1, "unexpected pid %d", VAR_3);

 VAR_5 = FUNC_7("/dev/null", VAR_0 | VAR_1);
 if (FUNC_8(VAR_5, &VAR_5, sizeof(VAR_5)) != sizeof(VAR_5))
  FUNC_3(1, "write newlyopened /dev/null");

 if ((VAR_2 = FUNC_10()) == ((void*)0))
  FUNC_2(1, "prefork");

 switch (FUNC_4()) {
 case -1:
  FUNC_2(1, "fork");
  break;
 case 0:
  if (FUNC_9(VAR_2) == -1)
   FUNC_2(1, "postfork init failed");

  if ((VAR_4 = FUNC_6()) < 2)
   FUNC_3(1, "unexpected pid %d", VAR_4);
  if (VAR_3 == VAR_4)
   FUNC_3(1, "child and parent pids are equal");


  if (FUNC_8(VAR_5, &VAR_5, sizeof(VAR_5)) != sizeof(VAR_5))
   FUNC_3(1, "write child /dev/null");
  FUNC_5(VAR_5);
  break;
 default:




  if (FUNC_8(VAR_5, &VAR_5, sizeof(VAR_5)) != sizeof(VAR_5))
   FUNC_3(1, "write parent /dev/null");
  if (FUNC_11(&VAR_6) == -1)
   FUNC_2(1, "wait failed");
  if (!FUNC_1(VAR_6) || FUNC_0(VAR_6) != 0)
   FUNC_3(1, "child exited with status %d", VAR_6);
  if (FUNC_8(VAR_5, &VAR_5, sizeof(VAR_5)) != sizeof(VAR_5))
   FUNC_3(1, "write parent /dev/null");
  break;
 }
}
