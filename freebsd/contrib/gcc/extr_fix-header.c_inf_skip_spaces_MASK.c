
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2 (int VAR_3)
{
  for (;;)
    {
      if (VAR_3 == ' ' || VAR_3 == '\t')
 VAR_3 = FUNC_0 ();
      else if (VAR_3 == '/')
 {
   VAR_3 = FUNC_0 ();
   if (VAR_3 != '*')
     {
       (void) FUNC_1 (VAR_3);
       return '/';
     }
   VAR_3 = FUNC_0 ();
   for (;;)
     {
       if (VAR_3 == VAR_0)
  return VAR_0;
       else if (VAR_3 != '*')
  {
    if (VAR_3 == '\n')
      VAR_2++, VAR_1++;
    VAR_3 = FUNC_0 ();
  }
       else if ((VAR_3 = FUNC_0 ()) == '/')
  return FUNC_0 ();
     }
 }
      else
 break;
    }
  return VAR_3;
}
