
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regcache {TYPE_1__* descr; } ;
struct TYPE_2__ {int gdbarch; } ;


 int * VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct regcache*,struct regcache*) ;
 struct regcache* FUNC_2 (int ) ;

struct regcache *
FUNC_3 (struct regcache *VAR_1)
{
  struct regcache *VAR_2;
  FUNC_0 (VAR_0 != ((void*)0));
  VAR_2 = FUNC_2 (VAR_1->descr->gdbarch);
  FUNC_1 (VAR_2, VAR_1);
  return VAR_2;
}
