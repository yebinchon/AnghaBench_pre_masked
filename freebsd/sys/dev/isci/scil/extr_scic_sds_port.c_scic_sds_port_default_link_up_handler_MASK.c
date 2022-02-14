
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SCIC_SDS_PORT_T ;
typedef int SCIC_SDS_PHY_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(
   SCIC_SDS_PORT_T *VAR_1,
   SCIC_SDS_PHY_T *VAR_2
)
{
   FUNC_0((
      FUNC_1(VAR_1),
      VAR_0,
      "SCIC Port 0x%08x received link_up notification from phy 0x%08x while in invalid state %d\n",
      VAR_1, VAR_2,
      FUNC_2(
         FUNC_3(VAR_1))
   ));
}
