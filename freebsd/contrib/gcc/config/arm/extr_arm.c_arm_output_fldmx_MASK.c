
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char,int *) ;
 int FUNC_2 (char*,int *) ;

__attribute__((used)) static void
FUNC_3 (FILE * VAR_1, unsigned int VAR_2, int VAR_3, int VAR_4)
{
  int VAR_5;


  if (VAR_4 == 2 && !VAR_0)
    {
      if (VAR_3 == 15)
 VAR_3--;
      VAR_4++;
    }

  FUNC_1 ('\t', VAR_1);
  FUNC_0 (VAR_1, "fldmfdx\t%r!, {", VAR_2);

  for (VAR_5 = VAR_3; VAR_5 < VAR_3 + VAR_4; VAR_5++)
    {
      if (VAR_5 > VAR_3)
 FUNC_2 (", ", VAR_1);
      FUNC_0 (VAR_1, "d%d", VAR_5);
    }
  FUNC_2 ("}\n", VAR_1);

}
