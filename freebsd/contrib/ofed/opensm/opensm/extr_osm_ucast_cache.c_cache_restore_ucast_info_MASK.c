
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int cache_valid; } ;
typedef TYPE_1__ osm_ucast_mgr_t ;
struct TYPE_8__ {int need_update; int * hops; scalar_t__ num_hops; int * new_lft; scalar_t__ max_lid_ho; } ;
typedef TYPE_2__ osm_switch_t ;
struct TYPE_9__ {int * hops; scalar_t__ num_hops; int * lft; scalar_t__ max_lid_ho; } ;
typedef TYPE_3__ cache_switch_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(osm_ucast_mgr_t * VAR_0,
    cache_switch_t * VAR_1, osm_switch_t * VAR_2)
{
 if (!VAR_0->cache_valid)
  return;



 FUNC_0(VAR_1->max_lid_ho && VAR_1->lft &&
    VAR_1->num_hops && VAR_1->hops);

 VAR_2->max_lid_ho = VAR_1->max_lid_ho;

 if (VAR_2->new_lft)
  FUNC_1(VAR_2->new_lft);
 VAR_2->new_lft = VAR_1->lft;
 VAR_1->lft = ((void*)0);

 VAR_2->num_hops = VAR_1->num_hops;
 VAR_1->num_hops = 0;
 if (VAR_2->hops)
  FUNC_1(VAR_2->hops);
 VAR_2->hops = VAR_1->hops;
 VAR_1->hops = ((void*)0);

 VAR_2->need_update = 2;
}
