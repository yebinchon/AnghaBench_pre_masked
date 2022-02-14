
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * sata_timeout_timer; } ;
typedef int SCI_STATUS ;
typedef int SCI_BASE_PHY_T ;
typedef TYPE_1__ SCIC_SDS_PHY_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int * FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static
SCI_STATUS FUNC_4(
   SCI_BASE_PHY_T *VAR_3
)
{
   SCIC_SDS_PHY_T *VAR_4;
   VAR_4 = (SCIC_SDS_PHY_T *)VAR_3;




   VAR_4->sata_timeout_timer = FUNC_1(
      FUNC_3(VAR_4),
      VAR_2,
      VAR_4
   );

   if (VAR_4->sata_timeout_timer != ((void*)0))
   {
      FUNC_0(
         FUNC_2(VAR_4),
         VAR_0
      );
   }

   return VAR_1;
}
