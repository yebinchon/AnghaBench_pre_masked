
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static void
FUNC_1 (int VAR_1)
{
  static int VAR_2;
  int VAR_3;

  if (VAR_0)
    {
      if (VAR_1 < 0)
 {
   FUNC_0 (")");
   VAR_2 += VAR_1;

   return;
 }
      else
 {
   FUNC_0 ("\n");
   VAR_0 = 0;
 }
    }

  if (VAR_1 == -1)
    {
      for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
 FUNC_0 ("   ");

      VAR_2 += VAR_1;
      FUNC_0 (")");
      return;
    }

  VAR_2 += VAR_1;

  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
    FUNC_0 ("   ");

  if (VAR_1)
    {
      FUNC_0 ("(");
    }
}
