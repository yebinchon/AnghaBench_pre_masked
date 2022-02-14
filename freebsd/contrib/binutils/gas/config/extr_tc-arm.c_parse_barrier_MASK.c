
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asm_barrier_opt {int value; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 int VAR_1 ;
 struct asm_barrier_opt* FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_2 (char **VAR_2)
{
  char *VAR_3, *VAR_4;
  const struct asm_barrier_opt *VAR_5;

  VAR_3 = VAR_4 = *VAR_2;
  while (FUNC_0 (*VAR_4))
    VAR_4++;

  VAR_5 = FUNC_1 (VAR_1, VAR_3, VAR_4 - VAR_3);
  if (!VAR_5)
    return VAR_0;

  *VAR_2 = VAR_4;
  return VAR_5->value;
}
