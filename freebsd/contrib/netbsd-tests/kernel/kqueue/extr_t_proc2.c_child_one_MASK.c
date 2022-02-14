
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int pw_uid; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 () ;
 struct passwd* FUNC_4 (char const*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(void)
{
 pid_t VAR_2;
 struct passwd *VAR_3;
 const char *VAR_4 = "nobody";

 VAR_3 = FUNC_4(VAR_4);
 if (VAR_3 == ((void*)0))
  FUNC_2(VAR_0, "getpwnam(\"%s\")", VAR_4);

 if ((FUNC_5(VAR_3->pw_uid)) == -1)
  FUNC_2(VAR_0, "setuid(%d)", VAR_3->pw_uid);

 VAR_2 = FUNC_3();
 if (VAR_2 == -1)
  FUNC_2(VAR_0, "fork()");

 if (VAR_2 == 0)
  FUNC_1();

 FUNC_0(VAR_1);
}
