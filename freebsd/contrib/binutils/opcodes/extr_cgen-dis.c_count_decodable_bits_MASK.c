
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CGEN_INSN ;


 unsigned int FUNC_0 (int const*) ;

__attribute__((used)) static int
FUNC_1 (const CGEN_INSN *VAR_0)
{
  unsigned VAR_1 = FUNC_0 (VAR_0);
  int VAR_2 = 0;
  int VAR_3;
  for (VAR_3 = 1; VAR_3 != 0; VAR_3 <<= 1)
    {
      if (VAR_1 & VAR_3)
 ++VAR_2;
    }
  return VAR_2;
}
