
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab_and_line {int end; } ;
struct symbol {int dummy; } ;
struct minimal_symbol {int dummy; } ;
struct frame_info {int dummy; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct symbol*) ;
 int FUNC_2 (struct minimal_symbol*) ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 struct symbol* FUNC_5 (int ) ;
 struct symtab_and_line FUNC_6 (int ,int ) ;
 struct frame_info* FUNC_7 () ;
 int FUNC_8 (struct frame_info*) ;
 struct minimal_symbol* FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_13 (int VAR_8)
{
  struct frame_info *VAR_9;
  CORE_ADDR VAR_10;
  struct symbol *VAR_11;
  struct symtab_and_line VAR_12;

  FUNC_3 ();

  VAR_9 = FUNC_7 ();





  VAR_10 = FUNC_11 ();
  VAR_11 = FUNC_5 (VAR_10);

  if (!VAR_11)
    {
      struct minimal_symbol *VAR_13 = FUNC_9 (VAR_10);

      if (VAR_13 == ((void*)0))
 FUNC_4 ("Execution is not within a known function.");

      VAR_6 = FUNC_2 (VAR_13);
      VAR_5 = VAR_10;
    }
  else
    {
      VAR_12 = FUNC_6 (VAR_10, 0);

      VAR_6 = FUNC_0 (FUNC_1 (VAR_11));
      VAR_5 = VAR_12.end;
    }

  VAR_4 = VAR_0;
  VAR_2 = FUNC_8 (VAR_9);
  VAR_7 = FUNC_12 ();

  VAR_3 = 0;

  FUNC_10 ((CORE_ADDR) -1, VAR_1, 1);
}
