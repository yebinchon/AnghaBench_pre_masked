
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u_int ;
struct netmap_mem_d {TYPE_1__* ops; } ;
typedef int nm_memid_t ;
struct TYPE_2__ {int (* nmd_get_info ) (struct netmap_mem_d*,int *,int *,int *) ;} ;


 int FUNC_0 (struct netmap_mem_d*) ;
 int FUNC_1 (struct netmap_mem_d*) ;
 int FUNC_2 (struct netmap_mem_d*,int *,int *,int *) ;

int
FUNC_3(struct netmap_mem_d *VAR_0, uint64_t *VAR_1,
  u_int *VAR_2, nm_memid_t *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_0);
 VAR_4 = VAR_0->ops->nmd_get_info(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_1(VAR_0);

 return VAR_4;
}
