
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct asm_cond {int value; } ;
struct TYPE_2__ {int error; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 struct asm_cond* FUNC_2 (int ,char*,int) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int
FUNC_3 (char **VAR_3)
{
  char *VAR_4, *VAR_5;
  const struct asm_cond *VAR_6;

  VAR_4 = VAR_5 = *VAR_3;
  while (FUNC_0 (*VAR_5))
    VAR_5++;

  VAR_6 = FUNC_2 (VAR_1, VAR_4, VAR_5 - VAR_4);
  if (!VAR_6)
    {
      VAR_2.error = FUNC_1("condition required");
      return VAR_0;
    }

  *VAR_3 = VAR_5;
  return VAR_6->value;
}
