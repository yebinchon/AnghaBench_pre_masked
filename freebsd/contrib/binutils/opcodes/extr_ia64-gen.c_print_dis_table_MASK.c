
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disent {int completer_index; int insn; int priority; struct disent* next_ent; struct disent* nexte; } ;


 struct disent* VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1 (void)
{
  int VAR_3;
  struct disent *VAR_4 = VAR_0;

  FUNC_0 ("static const char dis_table[] = {\n");
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
    {
      if ((VAR_3 > 0) && ((VAR_3 % 12) == 0))
 FUNC_0 ("\n");

      FUNC_0 ("0x%02x, ", VAR_1[VAR_3]);
    }
  FUNC_0 ("\n};\n\n");

  FUNC_0 ("static const struct ia64_dis_names ia64_dis_names[] = {\n");
  while (VAR_4 != ((void*)0))
    {
      struct disent *VAR_5 = VAR_4;

      while (VAR_5 != ((void*)0))
 {
   FUNC_0 ("{ 0x%x, %d, %d, %d },\n", VAR_5->completer_index,
    VAR_5->insn, (VAR_5->nexte != ((void*)0) ? 1 : 0),
                  VAR_5->priority);
   VAR_5 = VAR_5->nexte;
 }
      VAR_4 = VAR_4->next_ent;
    }
  FUNC_0 ("};\n\n");
}
