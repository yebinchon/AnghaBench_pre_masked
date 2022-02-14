
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netmap_mem_d {TYPE_1__* ops; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* nmd_if_offset ) (struct netmap_mem_d*,void const*) ;} ;


 int FUNC_0 (struct netmap_mem_d*) ;
 int FUNC_1 (struct netmap_mem_d*) ;
 int FUNC_2 (struct netmap_mem_d*,void const*) ;

ssize_t
FUNC_3(struct netmap_mem_d *VAR_0, const void *VAR_1)
{
 ssize_t VAR_2;

 FUNC_0(VAR_0);
 VAR_2 = VAR_0->ops->nmd_if_offset(VAR_0, VAR_1);
 FUNC_1(VAR_0);

 return VAR_2;
}
