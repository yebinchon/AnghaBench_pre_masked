
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* U8 ;
typedef int U32 ;
struct TYPE_6__ {void* phy_identifier; void* phy_operation; } ;
struct TYPE_7__ {TYPE_1__ phy_control; } ;
struct TYPE_8__ {TYPE_2__ request; } ;
typedef TYPE_3__ SMP_REQUEST_T ;
typedef int SMP_REQUEST_PHY_CONTROL_T ;
typedef int SCIF_SAS_REMOTE_DEVICE_T ;
typedef int SCIF_SAS_CONTROLLER_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,int ,int) ;
 void* FUNC_1 (int *,int *,TYPE_3__*,void*,void*) ;

void * FUNC_2(
   SCIF_SAS_CONTROLLER_T * VAR_1,
   SCIF_SAS_REMOTE_DEVICE_T * VAR_2,
   U8 VAR_3,
   U8 VAR_4,
   void * VAR_5,
   void * VAR_6
)
{
   SMP_REQUEST_T VAR_7;

   FUNC_0(
      &VAR_7,
      VAR_0,
      0,
      sizeof(SMP_REQUEST_PHY_CONTROL_T) / sizeof(U32)
   );

   VAR_7.request.phy_control.phy_operation = VAR_3;
   VAR_7.request.phy_control.phy_identifier = VAR_4;

   return FUNC_1(
             VAR_1, VAR_2, &VAR_7,
             VAR_5, VAR_6
          );
}
