
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct insn_pattern {int mask; unsigned int data; scalar_t__ optional; } ;
typedef int CORE_ADDR ;


 unsigned int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1 (CORE_ADDR VAR_0,
                     struct insn_pattern *VAR_1,
                     unsigned int *VAR_2)
{
  int VAR_3;

  for (VAR_3 = 0; VAR_1[VAR_3].mask; VAR_3++)
    {
      VAR_2[VAR_3] = FUNC_0 (VAR_0);
      if ((VAR_2[VAR_3] & VAR_1[VAR_3].mask) == VAR_1[VAR_3].data)
        VAR_0 += 4;
      else if (VAR_1[VAR_3].optional)
        VAR_2[VAR_3] = 0;
      else
        return 0;
    }

  return 1;
}
