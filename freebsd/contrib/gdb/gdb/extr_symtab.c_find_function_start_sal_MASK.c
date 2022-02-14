
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab_and_line {scalar_t__ pc; scalar_t__ end; } ;
struct symbol {int dummy; } ;
typedef int asection ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int * FUNC_3 (struct symbol*) ;
 int FUNC_4 (struct symbol*) ;
 struct symtab_and_line FUNC_5 (scalar_t__,int *,int ) ;
 int FUNC_6 (struct symbol*,int *) ;
 scalar_t__ FUNC_7 (scalar_t__,int *) ;
 scalar_t__ FUNC_8 (scalar_t__,int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;

struct symtab_and_line
FUNC_11 (struct symbol *VAR_1, int VAR_2)
{
  CORE_ADDR VAR_3;
  struct symtab_and_line VAR_4;

  VAR_3 = FUNC_1 (FUNC_4 (VAR_1));
  FUNC_6 (VAR_1, ((void*)0));
  if (VAR_2)
    {
      asection *VAR_5 = FUNC_3 (VAR_1);


      if (FUNC_10 (VAR_5) &&
   !FUNC_9 (VAR_5))
 VAR_3 = FUNC_8 (VAR_3, VAR_5);

      VAR_3 += VAR_0;
      VAR_3 = FUNC_2 (VAR_3);


      VAR_3 = FUNC_7 (VAR_3, VAR_5);
    }
  VAR_4 = FUNC_5 (VAR_3, FUNC_3 (VAR_1), 0);



  if (VAR_4.pc != VAR_3
      && FUNC_1 (FUNC_4 (VAR_1)) <= VAR_4.end
      && VAR_4.end < FUNC_0 (FUNC_4 (VAR_1)))
    {

      VAR_3 = VAR_4.end;

      VAR_4 = FUNC_5 (VAR_3, FUNC_3 (VAR_1), 0);
    }
  VAR_4.pc = VAR_3;

  return VAR_4;
}
