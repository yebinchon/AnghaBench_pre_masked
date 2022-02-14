
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char const*) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (char,int *) ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (char const*) ;

void
FUNC_6 (FILE *VAR_0, const char *VAR_1)
{
  int VAR_2;
  const char *VAR_3;

  if (VAR_1 == ((void*)0))
    VAR_1 = "<stdin>";

  VAR_2 = FUNC_5 (VAR_1);
  VAR_3 = VAR_1 + VAR_2;


  while (VAR_3 > VAR_1)
    {
      if (FUNC_1 (VAR_3[-1]))
 break;
      VAR_3--;
    }




  FUNC_2 (VAR_0, "\t.file\t");
  FUNC_4 (VAR_0, VAR_3);
  FUNC_3 ('\n', VAR_0);

}
