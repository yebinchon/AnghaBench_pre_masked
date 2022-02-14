
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coff_line {int nlines; int* lines; int* addresses; } ;


 char* FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4 (struct coff_line *VAR_0)
{
  int VAR_1;
  int VAR_2 = 0;

  FUNC_3 (1);
  FUNC_2 (FUNC_0("#lines %d "),VAR_0->nlines);

  for (VAR_1 = 0; VAR_1 < VAR_0->nlines; VAR_1++)
    {
      FUNC_2 ("(%d 0x%x)", VAR_0->lines[VAR_1], VAR_0->addresses[VAR_1]);

      VAR_2++;

      if (VAR_2 > 6)
 {
   FUNC_1 ();
   FUNC_3 (0);
   VAR_2 = 0;
 }
    }
  FUNC_1 ();
  FUNC_3 (-1);
}
