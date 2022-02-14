
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char const*) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,...) ;

void
FUNC_2 (FILE *VAR_1, int VAR_2,
          const char *VAR_3, const char *VAR_4)
{
  int VAR_5 = (VAR_3[0] == '*' && VAR_3[1] == 'L'
       && VAR_4[0] == '*' && VAR_4[1] == 'L');
  const char *VAR_6 = (VAR_2 == 8 ? ".quad" : ".long");

  if (VAR_5)
    FUNC_1 (VAR_1, "\t.set L$set$%d,", VAR_0);
  else
    FUNC_1 (VAR_1, "\t%s\t", VAR_6);
  FUNC_0 (VAR_1, VAR_3);
  FUNC_1 (VAR_1, "-");
  FUNC_0 (VAR_1, VAR_4);
  if (VAR_5)
    FUNC_1 (VAR_1, "\n\t%s L$set$%d", VAR_6, VAR_0++);
}
