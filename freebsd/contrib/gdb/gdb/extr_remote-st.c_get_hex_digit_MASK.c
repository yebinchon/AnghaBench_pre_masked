
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_3 (int VAR_1)
{
  int VAR_2;
  while (1)
    {
      VAR_2 = FUNC_2 (VAR_0);
      if (VAR_2 >= '0' && VAR_2 <= '9')
 return VAR_2 - '0';
      else if (VAR_2 >= 'A' && VAR_2 <= 'F')
 return VAR_2 - 'A' + 10;
      else if (VAR_2 >= 'a' && VAR_2 <= 'f')
 return VAR_2 - 'a' + 10;
      else if (VAR_2 == ' ' && VAR_1)
 ;
      else
 {
   FUNC_1 (1);
   FUNC_0 ("Invalid hex digit from remote system.");
 }
    }
}
