
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int port_guid_tbl; } ;
typedef TYPE_1__ osm_subn_t ;
typedef int osm_prtn_t ;
struct TYPE_7__ {int p_node; } ;
typedef TYPE_2__ osm_port_t ;
typedef int osm_log_t ;
typedef scalar_t__ ib_api_status_t ;
typedef int cl_qmap_t ;
typedef int cl_map_item_t ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*,int *,int ,int ,int ) ;

ib_api_status_t FUNC_6(osm_log_t * VAR_1, osm_subn_t * VAR_2,
     osm_prtn_t * VAR_3, unsigned VAR_4,
     boolean_t VAR_5, boolean_t VAR_6)
{
 cl_qmap_t *VAR_7 = &VAR_2->port_guid_tbl;
 cl_map_item_t *VAR_8;
 osm_port_t *VAR_9;
 ib_api_status_t VAR_10 = VAR_0;

 VAR_8 = FUNC_1(VAR_7);
 while (VAR_8 != FUNC_0(VAR_7)) {
  VAR_9 = (osm_port_t *) VAR_8;
  VAR_8 = FUNC_2(VAR_8);
  if (!VAR_4 || FUNC_3(VAR_9->p_node) == VAR_4) {
   VAR_10 = FUNC_5(VAR_1, VAR_2, VAR_3,
         FUNC_4(VAR_9),
         VAR_5, VAR_6);
   if (VAR_10 != VAR_0)
    goto _err;
  }
 }

_err:
 return VAR_10;
}
