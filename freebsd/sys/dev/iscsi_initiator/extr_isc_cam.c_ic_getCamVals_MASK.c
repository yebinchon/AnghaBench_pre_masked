
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int target_nluns; scalar_t__ target_id; int path_id; } ;
typedef TYPE_1__ iscsi_cam_t ;
struct TYPE_6__ {scalar_t__ cam_sim; } ;
typedef TYPE_2__ isc_session_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

int
FUNC_2(isc_session_t *VAR_2, iscsi_cam_t *VAR_3)
{
     FUNC_1(8);

     if(VAR_2 && VAR_2->cam_sim) {
   VAR_3->path_id = FUNC_0(VAR_2->cam_sim);
   VAR_3->target_id = 0;
   VAR_3->target_nluns = VAR_1;
   return 0;
     }
     return VAR_0;
}
