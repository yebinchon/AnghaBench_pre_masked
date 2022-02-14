
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netmap_mem_d {TYPE_1__* ops; scalar_t__ active; } ;
struct TYPE_2__ {int (* nmd_config ) (struct netmap_mem_d*) ;} ;


 int FUNC_0 (struct netmap_mem_d*) ;

__attribute__((used)) static int
FUNC_1(struct netmap_mem_d *VAR_0)
{
 if (VAR_0->active) {



  return 0;
 }

 return VAR_0->ops->nmd_config(VAR_0);
}
