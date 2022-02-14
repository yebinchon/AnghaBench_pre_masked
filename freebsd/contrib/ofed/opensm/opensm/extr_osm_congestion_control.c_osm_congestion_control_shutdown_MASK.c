
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bind_handle; int log; int cc_disp_h; } ;
typedef TYPE_1__ osm_congestion_control_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(osm_congestion_control_t * VAR_2)
{
 FUNC_1(VAR_2->log);
 if (VAR_2->bind_handle == VAR_0) {
  FUNC_0(VAR_2->log, VAR_1,
   "ERR C108: No previous bind\n");
  goto Exit;
 }
 FUNC_3(VAR_2->cc_disp_h);
Exit:
 FUNC_2(VAR_2->log);
}
