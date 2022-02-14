
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_opcode {scalar_t__ insn_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 () ;
 struct spu_opcode** VAR_6 ;

__attribute__((used)) static const struct spu_opcode *
FUNC_1 (unsigned int VAR_7)
{
  const struct spu_opcode *VAR_8;
  unsigned int VAR_9 = VAR_7 >> (32-11);



  if (VAR_6[0] == 0)
    FUNC_0 ();

  if ((VAR_8 = VAR_6[VAR_9 & 0x780]) != 0
      && VAR_8->insn_type == VAR_5)
    return VAR_8;

  if ((VAR_8 = VAR_6[VAR_9 & 0x7f0]) != 0
      && (VAR_8->insn_type == VAR_3 || VAR_8->insn_type == VAR_0))
    return VAR_8;

  if ((VAR_8 = VAR_6[VAR_9 & 0x7f8]) != 0
      && VAR_8->insn_type == VAR_1)
    return VAR_8;

  if ((VAR_8 = VAR_6[VAR_9 & 0x7fc]) != 0
      && (VAR_8->insn_type == VAR_2))
    return VAR_8;

  if ((VAR_8 = VAR_6[VAR_9 & 0x7fe]) != 0
      && (VAR_8->insn_type == VAR_4))
    return VAR_8;

  if ((VAR_8 = VAR_6[VAR_9 & 0x7ff]) != 0)
    return VAR_8;

  return 0;
}
