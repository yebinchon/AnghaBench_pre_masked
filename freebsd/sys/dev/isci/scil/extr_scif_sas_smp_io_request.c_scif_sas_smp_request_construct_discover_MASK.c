
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int U8 ;
typedef int U32 ;
struct TYPE_6__ {int phy_identifier; } ;
struct TYPE_7__ {TYPE_1__ discover; } ;
struct TYPE_8__ {TYPE_2__ request; } ;
typedef int SMP_RESPONSE_DISCOVER_T ;
typedef TYPE_3__ SMP_REQUEST_T ;
typedef int SMP_REQUEST_PHY_IDENTIFIER_T ;
typedef int SCIF_SAS_REMOTE_DEVICE_T ;
typedef int SCIF_SAS_CONTROLLER_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,int ,int,int) ;
 void* FUNC_3 (int *,int *,TYPE_3__*,void*,void*) ;

void * FUNC_4(
   SCIF_SAS_CONTROLLER_T * VAR_3,
   SCIF_SAS_REMOTE_DEVICE_T * VAR_4,
   U8 VAR_5,
   void * VAR_6,
   void * VAR_7
)
{
   SMP_REQUEST_T VAR_8;

   FUNC_2(
      &VAR_8,
      VAR_2,
      sizeof(SMP_RESPONSE_DISCOVER_T) / sizeof(U32),
      sizeof(SMP_REQUEST_PHY_IDENTIFIER_T) / sizeof(U32)
   );

   VAR_8.request.discover.phy_identifier = VAR_5;

   FUNC_0((
      FUNC_1(VAR_4),
      VAR_1 | VAR_0,
      "SMP DISCOVER - Device:0x%x PhyId:0x%x\n",
      VAR_4, VAR_5
   ));

   return FUNC_3(
             VAR_3, VAR_4, &VAR_8,
             VAR_6, VAR_7
          );
}
