
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int double_int ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,...) ;

void
FUNC_5 (FILE *VAR_0, double_int VAR_1, bool VAR_2)
{
  unsigned VAR_3[100], VAR_4;
  int VAR_5;

  if (FUNC_3 (VAR_1))
    {
      FUNC_4 (VAR_0, "0");
      return;
    }

  if (!VAR_2 && FUNC_1 (VAR_1))
    {
      FUNC_4 (VAR_0, "-");
      VAR_1 = FUNC_0 (VAR_1);
    }

  for (VAR_4 = 0; !FUNC_3 (VAR_1); VAR_4++)
    VAR_3[VAR_4] = FUNC_2 (&VAR_1, 10);
  for (VAR_5 = VAR_4 - 1; VAR_5 >= 0; VAR_5--)
    FUNC_4 (VAR_0, "%u", VAR_3[VAR_5]);
}
