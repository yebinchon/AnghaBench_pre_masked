
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ all; } ;
struct TYPE_6__ {TYPE_1__ u; } ;
typedef TYPE_2__ SCI_SAS_IDENTIFY_ADDRESS_FRAME_PROTOCOLS_T ;
typedef int SCIC_SDS_PORT_T ;
typedef int SCIC_SDS_PHY_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int * FUNC_3 (int *) ;

void FUNC_4(
   SCIC_SDS_PORT_T * VAR_1,
   SCI_SAS_IDENTIFY_ADDRESS_FRAME_PROTOCOLS_T * VAR_2
)
{
   SCIC_SDS_PHY_T *VAR_3;

   FUNC_0((
      FUNC_1(VAR_1),
      VAR_0,
      "scic_sds_port_get_attached_protocols(0x%x, 0x%x) enter\n",
      VAR_1, VAR_2
   ));



   VAR_3 = FUNC_3(VAR_1);
   if (VAR_3 != ((void*)0))
      FUNC_2(VAR_3, VAR_2);
   else
      VAR_2->u.all = 0;
}
