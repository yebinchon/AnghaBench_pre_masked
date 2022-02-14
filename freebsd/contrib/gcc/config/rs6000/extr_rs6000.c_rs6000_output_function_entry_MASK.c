
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;





 int FUNC_0 (int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char const*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 () ;
 int FUNC_4 (char,int *) ;

void
FUNC_5 (FILE *VAR_3, const char *VAR_4)
{
  if (VAR_4[0] != '.')
    {
      switch (VAR_0)
 {
 default:
   FUNC_3 ();

 case 130:
   if (VAR_1)
     FUNC_4 ('.', VAR_3);
   else
     FUNC_0 (VAR_3, "L.");
   break;

 case 128:
 case 129:
   break;
 }
    }
  if (VAR_2)
    FUNC_1 (VAR_3, VAR_4);
  else
    FUNC_2 (VAR_3, VAR_4);
}
