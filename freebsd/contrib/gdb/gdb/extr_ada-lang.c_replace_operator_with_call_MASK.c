
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct symbol {int dummy; } ;
struct expression {int nelts; TYPE_1__* elts; int language_defn; } ;
struct block {int dummy; } ;
struct TYPE_3__ {struct symbol* symbol; struct block* block; int opcode; scalar_t__ longconst; } ;
typedef scalar_t__ LONGEST ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,scalar_t__) ;
 int FUNC_2 (struct expression*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4 (struct expression **VAR_2, int VAR_3, int VAR_4,
       int VAR_5, struct symbol *VAR_6,
       struct block *VAR_7)
{


  struct expression *VAR_8 = (struct expression *)
    FUNC_3 (sizeof (struct expression)
      + FUNC_0 ((*VAR_2)->nelts + 7 - VAR_5));
  struct expression *VAR_9 = *VAR_2;

  VAR_8->nelts = VAR_9->nelts + 7 - VAR_5;
  VAR_8->language_defn = VAR_9->language_defn;
  FUNC_1 (VAR_8->elts, VAR_9->elts, FUNC_0 (VAR_3));
  FUNC_1 (VAR_8->elts + VAR_3 + 7, VAR_9->elts + VAR_3 + VAR_5,
   FUNC_0 (VAR_9->nelts - VAR_3 - VAR_5));

  VAR_8->elts[VAR_3].opcode = VAR_8->elts[VAR_3 + 2].opcode = VAR_0;
  VAR_8->elts[VAR_3 + 1].longconst = (LONGEST) VAR_4;

  VAR_8->elts[VAR_3 + 3].opcode = VAR_8->elts[VAR_3 + 6].opcode = VAR_1;
  VAR_8->elts[VAR_3 + 4].block = VAR_7;
  VAR_8->elts[VAR_3 + 5].symbol = VAR_6;

  *VAR_2 = VAR_8;
  FUNC_2 (VAR_9);
}
