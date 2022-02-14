
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct operand_data {char* predicate; char* constraint; scalar_t__ mode; scalar_t__ strict_low; scalar_t__ eliminable; } ;


 scalar_t__ FUNC_0 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_1 (struct operand_data *VAR_0, struct operand_data *VAR_1)
{
  const char *VAR_2, *VAR_3;

  VAR_2 = VAR_0->predicate;
  if (!VAR_2)
    VAR_2 = "";
  VAR_3 = VAR_1->predicate;
  if (!VAR_3)
    VAR_3 = "";
  if (FUNC_0 (VAR_2, VAR_3) != 0)
    return 0;

  VAR_2 = VAR_0->constraint;
  if (!VAR_2)
    VAR_2 = "";
  VAR_3 = VAR_1->constraint;
  if (!VAR_3)
    VAR_3 = "";
  if (FUNC_0 (VAR_2, VAR_3) != 0)
    return 0;

  if (VAR_0->mode != VAR_1->mode)
    return 0;

  if (VAR_0->strict_low != VAR_1->strict_low)
    return 0;

  if (VAR_0->eliminable != VAR_1->eliminable)
    return 0;

  return 1;
}
