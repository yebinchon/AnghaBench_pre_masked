
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char**) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4 (char *VAR_1, int VAR_2)
{
  char *VAR_3 = VAR_1;
  int VAR_4;

  if (VAR_1)
    while ((VAR_4 = *VAR_3++) != '\0')
      {
 if (VAR_4 == '\\')
   {


     if (*VAR_3 == 0)
       return;

     VAR_4 = FUNC_1 (&VAR_3);
     if (VAR_4 >= 0)
       FUNC_2 ("%c", VAR_4);
   }
 else
   FUNC_2 ("%c", VAR_4);
      }


  FUNC_3 ("");
  FUNC_0 (VAR_0);
}
