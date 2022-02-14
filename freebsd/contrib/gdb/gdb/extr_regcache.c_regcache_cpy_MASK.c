
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regcache {scalar_t__ readonly_p; TYPE_1__* descr; } ;
struct TYPE_2__ {scalar_t__ gdbarch; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct regcache*,struct regcache*) ;
 int FUNC_2 (struct regcache*,int ,struct regcache*) ;
 int FUNC_3 (struct regcache*,int ,struct regcache*) ;

void
FUNC_4 (struct regcache *VAR_1, struct regcache *VAR_2)
{
  int VAR_3;
  char *VAR_4;
  FUNC_0 (VAR_2 != ((void*)0) && VAR_1 != ((void*)0));
  FUNC_0 (VAR_2->descr->gdbarch == VAR_1->descr->gdbarch);
  FUNC_0 (VAR_2 != VAR_1);
  FUNC_0 (VAR_2->readonly_p || VAR_1->readonly_p);
  if (!VAR_2->readonly_p)
    FUNC_3 (VAR_1, VAR_0, VAR_2);
  else if (!VAR_1->readonly_p)
    FUNC_2 (VAR_1, VAR_0, VAR_2);
  else
    FUNC_1 (VAR_1, VAR_2);
}
