
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct symtabs_and_lines {int nelts; struct symtab_and_line* sals; } ;
struct symtab_and_line {scalar_t__ line; scalar_t__ pc; TYPE_1__* symtab; } ;
struct TYPE_3__ {int filename; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 struct symtabs_and_lines FUNC_0 (char*,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct symtab_and_line,scalar_t__*,scalar_t__*) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*,scalar_t__,int ,scalar_t__) ;
 int FUNC_4 (struct symtab_and_line*) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct symtab_and_line*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void
FUNC_11 (char *VAR_4, int VAR_5)
{
  struct symtabs_and_lines VAR_6;
  struct symtab_and_line VAR_7;
  CORE_ADDR VAR_8, VAR_9;
  int VAR_10;

  FUNC_4 (&VAR_7);

  if (VAR_4 == 0)
    {
      VAR_7.symtab = VAR_1;
      VAR_7.line = VAR_3;
      VAR_6.nelts = 1;
      VAR_6.sals = (struct symtab_and_line *)
 FUNC_10 (sizeof (struct symtab_and_line));
      VAR_6.sals[0] = VAR_7;
    }
  else
    {
      VAR_6 = FUNC_0 (VAR_4, 0);

      FUNC_1 ();
    }



  for (VAR_10 = 0; VAR_10 < VAR_6.nelts; VAR_10++)
    {
      VAR_7 = VAR_6.sals[VAR_10];

      if (VAR_7.symtab == 0)
 {
   FUNC_6 ("No line number information available");
   if (VAR_7.pc != 0)
     {



       FUNC_6 (" for address ");
       FUNC_8 ("  ");
       FUNC_5 (VAR_7.pc, VAR_2);
     }
   else
     FUNC_6 (".");
   FUNC_6 ("\n");
 }
      else if (VAR_7.line > 0
        && FUNC_2 (VAR_7, &VAR_8, &VAR_9))
 {
   if (VAR_8 == VAR_9)
     {
       FUNC_6 ("Line %d of \"%s\"",
          VAR_7.line, VAR_7.symtab->filename);
       FUNC_8 ("  ");
       FUNC_6 (" is at address ");
       FUNC_5 (VAR_8, VAR_2);
       FUNC_8 ("  ");
       FUNC_6 (" but contains no code.\n");
     }
   else
     {
       FUNC_6 ("Line %d of \"%s\"",
          VAR_7.line, VAR_7.symtab->filename);
       FUNC_8 ("  ");
       FUNC_6 (" starts at address ");
       FUNC_5 (VAR_8, VAR_2);
       FUNC_8 ("  ");
       FUNC_6 (" and ends at ");
       FUNC_5 (VAR_9, VAR_2);
       FUNC_6 (".\n");
     }


   FUNC_7 (VAR_8);


   VAR_3 = VAR_7.line + 1;



   if (VAR_0 && VAR_6.nelts == 1)
     FUNC_3 (VAR_7.symtab, VAR_7.line, 0, VAR_8);
 }
      else



 FUNC_6 ("Line number %d is out of range for \"%s\".\n",
    VAR_7.line, VAR_7.symtab->filename);
    }
  FUNC_9 (VAR_6.sals);
}
