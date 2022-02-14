
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct SCIF_SAS_REMOTE_DEVICE {int dummy; } ;
struct SCIF_SAS_CONTROLLER {int dummy; } ;
typedef int U8 ;
typedef int U32 ;
typedef int U16 ;
struct TYPE_11__ {int low; int high; } ;
struct TYPE_8__ {int expander_route_index_high; int expander_route_index; int disable_route_entry; int * routed_sas_address; int phy_identifier; } ;
struct TYPE_9__ {TYPE_1__ configure_route_information; } ;
struct TYPE_10__ {TYPE_2__ request; } ;
typedef TYPE_3__ SMP_REQUEST_T ;
typedef int SMP_REQUEST_CONFIGURE_ROUTE_INFORMATION_T ;
typedef TYPE_4__ SCI_SAS_ADDRESS_T ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,int ,int) ;
 void* FUNC_1 (struct SCIF_SAS_CONTROLLER*,struct SCIF_SAS_REMOTE_DEVICE*,TYPE_3__*,int *,int *) ;

void * FUNC_2(
   struct SCIF_SAS_CONTROLLER * VAR_2,
   struct SCIF_SAS_REMOTE_DEVICE * VAR_3,
   U8 VAR_4,
   U16 VAR_5,
   SCI_SAS_ADDRESS_T VAR_6,
   BOOL VAR_7
)
{
   SMP_REQUEST_T VAR_8;

   FUNC_0(
      &VAR_8,
      VAR_0,
      0,
      sizeof(SMP_REQUEST_CONFIGURE_ROUTE_INFORMATION_T) / sizeof(U32)
   );

   VAR_8.request.configure_route_information.phy_identifier = VAR_4;
   VAR_8.request.configure_route_information.expander_route_index_high =
      ((VAR_5 & 0xff00) >> 8);
   VAR_8.request.configure_route_information.expander_route_index =
      VAR_5 & 0xff;
   VAR_8.request.configure_route_information.routed_sas_address[0] =
      VAR_6.high;
   VAR_8.request.configure_route_information.routed_sas_address[1] =
      VAR_6.low;

   if (VAR_7 == VAR_1)
      VAR_8.request.configure_route_information.disable_route_entry = 1;

   return FUNC_1(
             VAR_2, VAR_3, &VAR_8,
             ((void*)0), ((void*)0)
          );
}
