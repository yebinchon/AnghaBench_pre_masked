
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* p_subn; scalar_t__ max_lid; } ;
typedef TYPE_2__ osm_ucast_mgr_t ;
struct TYPE_6__ {int sw_guid_tbl; } ;


 int FUNC_0 (int *,int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;

void FUNC_2(osm_ucast_mgr_t * VAR_1)
{
 VAR_1->max_lid = 0;

 FUNC_0(&VAR_1->p_subn->sw_guid_tbl, VAR_0,
      VAR_1);

 FUNC_1(VAR_1);
}
