
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct using_direct {int dummy; } ;
struct obstack {int dummy; } ;
struct block {int dummy; } ;
struct TYPE_2__ {struct using_direct* using; } ;


 TYPE_1__* FUNC_0 (struct block*) ;
 int FUNC_1 (struct block*,struct obstack*) ;

void
FUNC_2 (struct block *VAR_0,
   struct using_direct *VAR_1,
   struct obstack *VAR_2)
{
  FUNC_1 (VAR_0, VAR_2);

  FUNC_0 (VAR_0)->using = VAR_1;
}
