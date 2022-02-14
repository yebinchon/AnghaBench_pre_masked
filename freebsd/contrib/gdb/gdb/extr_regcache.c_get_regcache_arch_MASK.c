
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regcache {TYPE_1__* descr; } ;
struct gdbarch {int dummy; } ;
struct TYPE_2__ {struct gdbarch* gdbarch; } ;



struct gdbarch *
FUNC_0 (const struct regcache *VAR_0)
{
  return VAR_0->descr->gdbarch;
}
