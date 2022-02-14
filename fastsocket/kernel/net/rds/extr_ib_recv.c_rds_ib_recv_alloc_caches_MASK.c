
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int percpu; } ;
struct rds_ib_connection {TYPE_1__ i_cache_incs; TYPE_1__ i_cache_frags; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(struct rds_ib_connection *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(&VAR_0->i_cache_incs);
 if (!VAR_1) {
  VAR_1 = FUNC_1(&VAR_0->i_cache_frags);
  if (VAR_1)
   FUNC_0(VAR_0->i_cache_incs.percpu);
 }

 return VAR_1;
}
