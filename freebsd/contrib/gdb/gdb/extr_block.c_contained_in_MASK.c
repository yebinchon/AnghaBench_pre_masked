
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block {int dummy; } ;


 scalar_t__ FUNC_0 (struct block const*) ;
 scalar_t__ FUNC_1 (struct block const*) ;

int
FUNC_2 (const struct block *VAR_0, const struct block *VAR_1)
{
  if (!VAR_0 || !VAR_1)
    return 0;
  return FUNC_1 (VAR_0) >= FUNC_1 (VAR_1)
    && FUNC_0 (VAR_0) <= FUNC_0 (VAR_1);
}
