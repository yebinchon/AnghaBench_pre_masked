
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fr_fix; int fr_subtype; int * fr_literal; int * fr_opcode; int fr_symbol; } ;
typedef TYPE_1__ fragS ;
typedef int asection ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_5 (fragS * VAR_2, asection *VAR_3)
{
  int VAR_4 = 0;

  if (VAR_1 == VAR_0)
    VAR_4 = FUNC_3 (VAR_2->fr_symbol, 0);
  else
    VAR_4 = FUNC_4 (VAR_2->fr_symbol, VAR_3);

  if (VAR_4 == 1)
    {


      if (VAR_2->fr_opcode == ((void*)0))
 {
   VAR_2->fr_fix = FUNC_0 (VAR_2->fr_subtype);
   VAR_2->fr_opcode = VAR_2->fr_literal + FUNC_2 (VAR_2->fr_subtype);
          return FUNC_0 (VAR_2->fr_subtype) - FUNC_1 (VAR_2->fr_subtype);
 }
    }

  return 0;
}
