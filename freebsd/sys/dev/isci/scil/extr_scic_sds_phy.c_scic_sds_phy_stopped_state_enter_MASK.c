
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * sata_timeout_timer; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_1__ SCIC_SDS_PHY_T ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static
void FUNC_4(
   SCI_BASE_OBJECT_T *VAR_1
)
{
   SCIC_SDS_PHY_T *VAR_2;
   VAR_2 = (SCIC_SDS_PHY_T *)VAR_1;


   FUNC_2(VAR_2, VAR_0);

   if (VAR_2->sata_timeout_timer != ((void*)0))
   {
      FUNC_0(
         FUNC_1(VAR_2),
         VAR_2->sata_timeout_timer
      );

      VAR_2->sata_timeout_timer = ((void*)0);
   }

   FUNC_3(VAR_2);
}
