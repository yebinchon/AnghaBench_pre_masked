
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {int smp_device; } ;
struct TYPE_26__ {struct TYPE_26__* containing_device; int domain; TYPE_1__ protocol_device; } ;
struct TYPE_23__ {int attached_phy; } ;
struct TYPE_25__ {TYPE_5__ u; } ;
struct TYPE_20__ {scalar_t__ attached_smp_target; } ;
struct TYPE_21__ {TYPE_2__ bits; } ;
struct TYPE_22__ {TYPE_3__ u; } ;
struct TYPE_24__ {int attached_phy_identifier; TYPE_4__ protocols; int attached_sas_address; int phy_identifier; } ;
typedef TYPE_6__ SMP_RESPONSE_DISCOVER_T ;
typedef scalar_t__ SCI_STATUS ;
typedef TYPE_7__ SCIF_SAS_SMP_PHY_T ;
typedef TYPE_8__ SCIF_SAS_REMOTE_DEVICE_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_8__*) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_7__*,TYPE_8__*,TYPE_6__*) ;
 scalar_t__ FUNC_5 (TYPE_7__*,int ,TYPE_8__*) ;
 scalar_t__ FUNC_6 (TYPE_7__*,int ) ;
 TYPE_7__* FUNC_7 (int ,int *) ;

SCI_STATUS FUNC_8(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_4,
   SMP_RESPONSE_DISCOVER_T * VAR_5
)
{
   SCI_STATUS VAR_6 = VAR_3;
   SCIF_SAS_SMP_PHY_T * VAR_7 = ((void*)0);
   SCIF_SAS_REMOTE_DEVICE_T * VAR_8 = ((void*)0);

    FUNC_1((
      FUNC_2(VAR_4),
      VAR_1 | VAR_0,
      "scif_sas_smp_remote_device_save_smp_phy_info(0x%x, 0x%x) enter\n",
      VAR_4, VAR_5
   ));

   VAR_7 = FUNC_7(
                VAR_5->phy_identifier,
                &VAR_4->protocol_device.smp_device
             );

   FUNC_0( VAR_7 != ((void*)0) );


   VAR_8 = (SCIF_SAS_REMOTE_DEVICE_T *)
      FUNC_3(
         VAR_4->domain, &VAR_5->attached_sas_address);

   FUNC_4(
      VAR_7, VAR_8, VAR_5);


   if ( VAR_5->protocols.u.bits.attached_smp_target )
   {


       if ( VAR_8 != ((void*)0)
           && VAR_8 == VAR_4->containing_device )
       {


          VAR_6 = FUNC_5(
                      VAR_7,
                      VAR_5->attached_phy_identifier,
                      VAR_8
                   );

          if (VAR_6 == VAR_3)
          {


             if ( FUNC_6(
                     VAR_7, VAR_7->u.attached_phy) != VAR_3 )
                return VAR_2;
          }
       }
    }

    return VAR_6;
}
