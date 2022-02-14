
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ rtx ;
struct TYPE_4__ {TYPE_1__* machine; } ;
struct TYPE_3__ {int has_gp_insn_p; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ,int ) ;

__attribute__((used)) static bool
FUNC_9 (void)
{

  if (!VAR_4->machine->has_gp_insn_p)
    {
      rtx VAR_5;

      FUNC_7 ();
      for (VAR_5 = FUNC_5 (); VAR_5; VAR_5 = FUNC_2 (VAR_5))
 if (FUNC_1 (VAR_5)
     && FUNC_0 (FUNC_3 (VAR_5)) != VAR_2
     && FUNC_0 (FUNC_3 (VAR_5)) != VAR_0
     && (FUNC_4 (VAR_5) != VAR_1
  || FUNC_8 (FUNC_3 (VAR_5), VAR_3)))
   break;
      FUNC_6 ();

      VAR_4->machine->has_gp_insn_p = (VAR_5 != 0);
    }
  return VAR_4->machine->has_gp_insn_p;
}
