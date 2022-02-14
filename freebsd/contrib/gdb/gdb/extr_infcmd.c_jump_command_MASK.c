
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtabs_and_lines {int nelts; struct symtab_and_line* sals; } ;
struct symtab_and_line {scalar_t__ symtab; scalar_t__ pc; int line; } ;
struct symbol {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (struct symbol*) ;
 int FUNC_1 (struct symbol*) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct symtabs_and_lines FUNC_4 (char*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_2 ;
 struct symbol* FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct symbol*,int ) ;
 int VAR_3 ;
 int FUNC_9 () ;
 struct symbol* FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__,int,int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (scalar_t__,int ,int ) ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (struct symtab_and_line*) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (char**) ;
 scalar_t__ FUNC_19 () ;
 int FUNC_20 (struct symtab_and_line*) ;

__attribute__((used)) static void
FUNC_21 (char *VAR_4, int VAR_5)
{
  CORE_ADDR VAR_6;
  struct symtabs_and_lines VAR_7;
  struct symtab_and_line VAR_8;
  struct symbol *VAR_9;
  struct symbol *VAR_10;
  int VAR_11 = 0;

  VAR_0;


  if (VAR_4 != ((void*)0))
    VAR_11 = FUNC_18 (&VAR_4);



  if (VAR_2 && VAR_11 && !FUNC_19 ())
    FUNC_5 ("Asynchronous execution not supported on this target.");



  if (VAR_2 && !VAR_11 && FUNC_19 ())
    {

      FUNC_2 ();
    }

  if (!VAR_4)
    FUNC_6 ("starting address");

  VAR_7 = FUNC_4 (VAR_4, 1);
  if (VAR_7.nelts != 1)
    {
      FUNC_5 ("Unreasonable jump request");
    }

  VAR_8 = VAR_7.sals[0];
  FUNC_20 (VAR_7.sals);

  if (VAR_8.symtab == 0 && VAR_8.pc == 0)
    FUNC_5 ("No source file has been specified.");

  FUNC_15 (&VAR_8);


  VAR_9 = FUNC_10 (FUNC_9 ());
  VAR_10 = FUNC_7 (VAR_8.pc);
  if (VAR_9 != ((void*)0) && VAR_10 != VAR_9)
    {
      if (!FUNC_14 ("Line %d is not in `%s'.  Jump anyway? ", VAR_8.line,
    FUNC_1 (VAR_9)))
 {
   FUNC_5 ("Not confirmed.");

 }
    }

  if (VAR_10 != ((void*)0))
    {
      FUNC_8 (VAR_10, 0);
      if (FUNC_17 (FUNC_0 (VAR_10)) &&
   !FUNC_16 (FUNC_0 (VAR_10)))
 {
   if (!FUNC_14 ("WARNING!!!  Destination is in unmapped overlay!  Jump anyway? "))
     {
       FUNC_5 ("Not confirmed.");

     }
 }
    }

  VAR_6 = VAR_8.pc;

  if (VAR_5)
    {
      FUNC_12 ("Continuing at ");
      FUNC_11 (VAR_6, 1, VAR_3);
      FUNC_12 (".\n");
    }

  FUNC_3 ();
  FUNC_13 (VAR_6, VAR_1, 0);
}
