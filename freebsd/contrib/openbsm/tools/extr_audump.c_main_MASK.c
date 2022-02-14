
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 () ;

int
FUNC_9(int VAR_0, char *VAR_1[])
{

 if (VAR_0 != 2)
  FUNC_8();

 if (FUNC_7(VAR_1[1], "class") == 0)
  FUNC_0();
 else if (FUNC_7(VAR_1[1], "class_r") == 0)
  FUNC_1();
 else if (FUNC_7(VAR_1[1], "control") == 0)
  FUNC_2();
 else if (FUNC_7(VAR_1[1], "event") == 0)
  FUNC_3();
 else if (FUNC_7(VAR_1[1], "event_r") == 0)
  FUNC_4();
 else if (FUNC_7(VAR_1[1], "user") == 0)
  FUNC_5();
 else if (FUNC_7(VAR_1[1], "user_r") == 0)
  FUNC_6();
 else
  FUNC_8();

 return (0);
}
