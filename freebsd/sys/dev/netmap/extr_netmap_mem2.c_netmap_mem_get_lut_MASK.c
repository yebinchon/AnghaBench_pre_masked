
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netmap_mem_d {TYPE_1__* ops; } ;
struct netmap_lut {int dummy; } ;
struct TYPE_2__ {int (* nmd_get_lut ) (struct netmap_mem_d*,struct netmap_lut*) ;} ;


 int FUNC_0 (struct netmap_mem_d*) ;
 int FUNC_1 (struct netmap_mem_d*) ;
 int FUNC_2 (struct netmap_mem_d*,struct netmap_lut*) ;

int
FUNC_3(struct netmap_mem_d *VAR_0, struct netmap_lut *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_0);
 VAR_2 = VAR_0->ops->nmd_get_lut(VAR_0, VAR_1);
 FUNC_1(VAR_0);

 return VAR_2;
}
