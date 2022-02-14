
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__* VAR_3 ;

void
FUNC_1 (FILE *VAR_4)
{
  int VAR_5, VAR_6;

  FUNC_0 (VAR_4, ";; Register dispositions:\n");
  for (VAR_5 = VAR_0, VAR_6 = 0; VAR_5 < VAR_1; VAR_5++)
    if (VAR_2[VAR_5] >= 0)
      {
 FUNC_0 (VAR_4, "%d in %d  ", VAR_5, VAR_2[VAR_5]);
 if (++VAR_6 % 6 == 0)
   FUNC_0 (VAR_4, "\n");
      }

  FUNC_0 (VAR_4, "\n\n;; Hard regs used: ");
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
    if (VAR_3[VAR_5])
      FUNC_0 (VAR_4, " %d", VAR_5);
  FUNC_0 (VAR_4, "\n\n");
}
