
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int insn32 ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 () ;

__attribute__((used)) static insn32
FUNC_2 (insn32 VAR_2, int VAR_3)
{
  unsigned int VAR_4;
  unsigned int VAR_5;

  FUNC_0 ((VAR_3 & 1) != 1);

  VAR_3 >>= 1;
  VAR_4 = VAR_3 & 0x000007FF;
  VAR_5 = (VAR_3 >> 11) & 0x000007FF;

  if ((VAR_2 & VAR_1) == VAR_1)
    VAR_2 = VAR_1 | (VAR_4 << 16) | VAR_5;
  else if ((VAR_2 & VAR_0) == VAR_0)
    VAR_2 = VAR_0 | (VAR_5 << 16) | VAR_4;
  else

    FUNC_1 ();

  return VAR_2;
}
