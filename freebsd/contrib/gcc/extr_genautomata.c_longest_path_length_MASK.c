
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_2__* state_t ;
typedef TYPE_3__* arc_t ;
struct TYPE_11__ {TYPE_2__* to_state; TYPE_1__* insn; } ;
struct TYPE_10__ {int longest_path_length; } ;
struct TYPE_9__ {scalar_t__ insn_reserv_decl; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int) ;
 TYPE_3__* FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_4 (state_t VAR_3)
{
  arc_t VAR_4;
  int VAR_5, VAR_6;

  if (VAR_3->longest_path_length != VAR_1)
    {



      FUNC_2 (VAR_3->longest_path_length != VAR_0);


      return VAR_3->longest_path_length;
    }

  VAR_6 = 0;
  for (VAR_4 = FUNC_1 (VAR_3); VAR_4 != ((void*)0); VAR_4 = FUNC_3 (VAR_4))

    if (VAR_4->to_state != VAR_3
 && (VAR_4->insn->insn_reserv_decl
     != FUNC_0 (VAR_2)))
    {
      VAR_5 = FUNC_4 (VAR_4->to_state);
      if (VAR_5 > VAR_6)
 VAR_6 = VAR_5;
    }
  VAR_3->longest_path_length = VAR_6 + 1;
  return VAR_6;
}
