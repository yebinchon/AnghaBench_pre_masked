
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct asm_opcode {int tvalue; int avalue; int (* aencode ) () ;int (* tencode ) () ;int * avariant; int * tvariant; } ;
struct TYPE_2__ {int instruction; int cond; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (int,int ) ;
 int VAR_2 ;
 struct asm_opcode* FUNC_4 (int ,char const*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_7 (const char *VAR_5)
{
  const struct asm_opcode *VAR_6;

  VAR_6 = FUNC_4 (VAR_1, VAR_5);

  if (!VAR_6)
    FUNC_2 ();

  FUNC_3 (!FUNC_0 (VAR_2,
                VAR_4 ? *VAR_6->tvariant : *VAR_6->avariant),
              FUNC_1(VAR_0));

  if (VAR_4)
    {
      VAR_3.instruction = VAR_6->tvalue;
      VAR_6->tencode ();
    }
  else
    {
      VAR_3.instruction = (VAR_3.cond << 28) | VAR_6->avalue;
      VAR_6->aencode ();
    }
}
