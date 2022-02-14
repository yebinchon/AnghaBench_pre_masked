
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct using_direct {int dummy; } ;
struct block {int dummy; } ;
struct TYPE_2__ {struct using_direct* using; } ;


 TYPE_1__* FUNC_0 (struct block const*) ;
 struct block* FUNC_1 (struct block const*) ;

struct using_direct *
FUNC_2 (const struct block *VAR_0)
{
  const struct block *VAR_1 = FUNC_1 (VAR_0);

  if (VAR_1 == ((void*)0)
      || FUNC_0 (VAR_1) == ((void*)0))
    return ((void*)0);
  else
    return FUNC_0 (VAR_1)->using;
}
