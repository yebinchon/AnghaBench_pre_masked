
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;

int FUNC_6(int VAR_1, char **VAR_2)
{
 if (VAR_1 != 2)
  FUNC_0(VAR_0, "Usage: %s [bb|bc|cc|cb]\n", VAR_2[0]);
 else if (FUNC_1(VAR_2[1], "bb") == 0)
  FUNC_2();
 else if (FUNC_1(VAR_2[1], "bc") == 0)
  FUNC_3();
 else if (FUNC_1(VAR_2[1], "cc") == 0)
  FUNC_5();
 else if (FUNC_1(VAR_2[1], "cb") == 0)
  FUNC_4();
 else
  FUNC_0(VAR_0, "Usage: %s [bb|bc|cc|cb]\n", VAR_2[0]);

 return 0;
}
