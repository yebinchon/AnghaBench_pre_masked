
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*) ;

__attribute__((used)) static int
FUNC_4 (int VAR_6, char *VAR_7)
{
  if (VAR_6 == VAR_1)
    {
      int VAR_8;

      for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
 {
   int VAR_9 = FUNC_2 (VAR_8);
   if (VAR_9 != -1)
     FUNC_3 (VAR_8, VAR_7 + VAR_9);
 }
    }
  else if (VAR_6 == VAR_0)
    {
      if (VAR_5 && VAR_4 | VAR_3)
 FUNC_1 (VAR_7, -1);
      else
 FUNC_0 (VAR_7, -1);
    }
  else
    return -1;

  return 0;
}
