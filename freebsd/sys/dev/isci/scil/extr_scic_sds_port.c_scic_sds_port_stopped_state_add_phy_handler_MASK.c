
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ high; scalar_t__ low; } ;
typedef int SCI_STATUS ;
typedef TYPE_1__ SCI_SAS_ADDRESS_T ;
typedef int SCI_BASE_PORT_T ;
typedef int SCI_BASE_PHY_T ;
typedef int SCIC_SDS_PORT_T ;
typedef int SCIC_SDS_PHY_T ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_3(
   SCI_BASE_PORT_T *VAR_1,
   SCI_BASE_PHY_T *VAR_2
)
{
   SCIC_SDS_PORT_T * VAR_3 = (SCIC_SDS_PORT_T *)VAR_1;
   SCIC_SDS_PHY_T * VAR_4 = (SCIC_SDS_PHY_T *)VAR_2;
   SCI_SAS_ADDRESS_T VAR_5;


   FUNC_1(VAR_3, &VAR_5);

   if (VAR_5.high != 0 && VAR_5.low != 0)
   {
      SCI_SAS_ADDRESS_T VAR_6;



      FUNC_0(VAR_4, &VAR_6);

      if (
            (VAR_5.high != VAR_6.high)
         || (VAR_5.low != VAR_6.low)
         )
      {
         return VAR_0;
      }
   }

   return FUNC_2(VAR_3, VAR_4);
}
