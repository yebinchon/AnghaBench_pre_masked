
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

int
FUNC_3 (int VAR_0)
{
  int VAR_1;

  while (1)
    {
      VAR_1 = FUNC_2 ();
      if (VAR_1 >= '0' && VAR_1 <= '9')
 return VAR_1 - '0';
      else if (VAR_1 >= 'A' && VAR_1 <= 'F')
 return VAR_1 - 'A' + 10;
      else if (VAR_1 >= 'a' && VAR_1 <= 'f')
 return VAR_1 - 'a' + 10;
      else if (VAR_1 != ' ' || !VAR_0)
 {
   FUNC_1 ();
   FUNC_0 ("Invalid hex digit from remote system.");
 }
    }
}
