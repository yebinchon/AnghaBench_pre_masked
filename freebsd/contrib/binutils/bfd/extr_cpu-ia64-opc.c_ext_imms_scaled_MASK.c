
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ia64_operand {TYPE_1__* field; } ;
typedef int ia64_insn ;
struct TYPE_2__ {int bits; int shift; } ;
typedef int BFD_HOST_U_64_BIT ;
typedef int BFD_HOST_64_BIT ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static const char*
FUNC_1 (const struct ia64_operand *VAR_0, ia64_insn VAR_1,
   ia64_insn *VAR_2, int VAR_3)
{
  int VAR_4, VAR_5 = 0, VAR_6 = 0;
  BFD_HOST_64_BIT VAR_7 = 0, VAR_8;

  for (VAR_4 = 0; VAR_4 < FUNC_0 (VAR_0->field) && VAR_0->field[VAR_4].bits; ++VAR_4)
    {
      VAR_5 = VAR_0->field[VAR_4].bits;
      VAR_7 |= ((VAR_1 >> VAR_0->field[VAR_4].shift)
       & ((((BFD_HOST_U_64_BIT) 1) << VAR_5) - 1)) << VAR_6;
      VAR_6 += VAR_5;
    }

  VAR_8 = (BFD_HOST_64_BIT) 1 << (VAR_6 - 1);
  VAR_7 = (VAR_7 ^ VAR_8) - VAR_8;

  *VAR_2 = (VAR_7 << VAR_3);
  return 0;
}
