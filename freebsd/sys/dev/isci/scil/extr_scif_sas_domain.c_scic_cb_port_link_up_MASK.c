
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SCI_PORT_HANDLE_T ;
typedef int SCI_PHY_HANDLE_T ;
typedef int SCI_CONTROLLER_HANDLE_T ;
typedef int SCIF_SAS_DOMAIN_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;

void FUNC_4(
   SCI_CONTROLLER_HANDLE_T VAR_1,
   SCI_PORT_HANDLE_T VAR_2,
   SCI_PHY_HANDLE_T VAR_3
)
{
   SCIF_SAS_DOMAIN_T * VAR_4 = (SCIF_SAS_DOMAIN_T*)
                                 FUNC_2(VAR_2);

   FUNC_0((
      FUNC_1(FUNC_2(VAR_2)),
      VAR_0,
      "scic_cb_port_link_up(0x%x, 0x%x, 0x%x) enter\n",
      VAR_1, VAR_2, VAR_3
   ));

   FUNC_3(VAR_4, VAR_2);
}
