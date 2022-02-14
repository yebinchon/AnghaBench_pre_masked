
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* decl_t ;
struct TYPE_7__ {int regexp; } ;
struct TYPE_6__ {int max_insn_reserv_cycles; int decls_num; TYPE_1__** decls; } ;
struct TYPE_5__ {scalar_t__ mode; } ;


 TYPE_3__* FUNC_0 (TYPE_1__*) ;
 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ,int ,int*,int*) ;

__attribute__((used)) static void
FUNC_2 (void)
{
  int VAR_2;
  int VAR_3;
  decl_t VAR_4;
  int VAR_5;

  VAR_0->max_insn_reserv_cycles = 0;
  for (VAR_5 = 0; VAR_5 < VAR_0->decls_num; VAR_5++)
    {
      VAR_4 = VAR_0->decls [VAR_5];
      if (VAR_4->mode == VAR_1)
      {
        FUNC_1 (FUNC_0 (VAR_4)->regexp, 0, 0,
          &VAR_2, &VAR_3);
        if (VAR_0->max_insn_reserv_cycles < VAR_2)
   VAR_0->max_insn_reserv_cycles = VAR_2;
      }
    }
  VAR_0->max_insn_reserv_cycles++;
}
