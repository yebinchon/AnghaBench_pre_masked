
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* p_event_wheel; } ;
struct TYPE_10__ {void* is_closing; TYPE_3__ txn_mgr; TYPE_1__* p_vendor; } ;
typedef TYPE_4__ osmv_bind_obj_t ;
typedef int osm_log_t ;
typedef scalar_t__ osm_bind_handle_t ;
struct TYPE_8__ {void* closing; } ;
struct TYPE_7__ {int * p_log; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 void* VAR_1 ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static void FUNC_8(osm_bind_handle_t VAR_2)
{
 osmv_bind_obj_t *VAR_3 = (osmv_bind_obj_t *) VAR_2;
 osm_log_t *VAR_4 = VAR_3->p_vendor->p_log;

 FUNC_0(VAR_4);


 VAR_3->txn_mgr.p_event_wheel->closing = VAR_1;

 FUNC_5(VAR_3);
 VAR_3->is_closing = VAR_1;


 FUNC_4(VAR_2);


 FUNC_2(VAR_4, VAR_0,
  "__osm_vendor_internal_unbind: destroying transport mgr.. \n");
 FUNC_6(VAR_3);

 FUNC_3(VAR_2);
 FUNC_2(VAR_4, VAR_0,
  "__osm_vendor_internal_unbind: destroying txn mgr.. \n");
 FUNC_5(VAR_3);
 FUNC_7(VAR_2);
 FUNC_2(VAR_4, VAR_0,
  "__osm_vendor_internal_unbind: destroying bind lock.. \n");

 FUNC_6(VAR_3);
 FUNC_1(VAR_4);
}
