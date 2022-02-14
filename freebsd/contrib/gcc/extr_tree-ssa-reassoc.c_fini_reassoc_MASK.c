
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int linearized; int constants_eliminated; int ops_eliminated; int rewritten; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int FUNC_5 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__ VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_6 (void)
{

  if (VAR_4 && (VAR_5 & VAR_1))
    {
      FUNC_1 (VAR_4, "Reassociation stats:\n");
      FUNC_1 (VAR_4, "Linearized: %d\n",
        VAR_9.linearized);
      FUNC_1 (VAR_4, "Constants eliminated: %d\n",
        VAR_9.constants_eliminated);
      FUNC_1 (VAR_4, "Ops eliminated: %d\n",
        VAR_9.ops_eliminated);
      FUNC_1 (VAR_4, "Statements rewritten: %d\n",
        VAR_9.rewritten);
    }
  FUNC_5 (VAR_8);

  FUNC_3 (VAR_7);
  FUNC_2 (VAR_2);
  FUNC_0 (VAR_10, VAR_6, VAR_3);
  FUNC_4 (VAR_0);
}
