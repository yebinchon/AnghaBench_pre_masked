
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cleanup {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 char** FUNC_0 (char*) ;
 int FUNC_1 (struct cleanup*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,...) ;
 struct cleanup* FUNC_4 (char**) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,int,int) ;
 int FUNC_8 (int) ;

void
FUNC_9 (char *VAR_2, int VAR_3)
{
  char **VAR_4;
  char *VAR_5 = ((void*)0);
  struct cleanup *VAR_6;
  int VAR_7 = VAR_1;

  FUNC_2 ();

  if (VAR_2 == ((void*)0))
    {
      FUNC_8 (VAR_3);
    }
  else
    {
      if ((VAR_4 = FUNC_0 (VAR_2)) == ((void*)0))
 {
   FUNC_5 (0);
 }
      VAR_6 = FUNC_4 (VAR_4);
      while (*VAR_4 != ((void*)0))
 {
   if (FUNC_6 (*VAR_4, "-readnow") == 0)
     VAR_7 |= VAR_0;
   else if (**VAR_4 == '-')
     FUNC_3 ("unknown option `%s'", *VAR_4);
   else
     {
       VAR_5 = *VAR_4;

       FUNC_7 (VAR_5, VAR_3, VAR_7);
     }
   VAR_4++;
 }

      if (VAR_5 == ((void*)0))
 {
   FUNC_3 ("no symbol file name was specified");
 }
      FUNC_1 (VAR_6);
    }
}
