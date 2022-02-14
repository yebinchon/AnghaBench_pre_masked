
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int is_in_link_training; int sata_timeout_timer; int owning_port; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_1__ SCIC_SDS_PHY_T ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*) ;

__attribute__((used)) static
void FUNC_5(
   SCI_BASE_OBJECT_T *VAR_3
)
{
   BOOL VAR_4;
   SCIC_SDS_PHY_T * VAR_5;

   VAR_5 = (SCIC_SDS_PHY_T *)VAR_3;

   FUNC_3(
      VAR_5, VAR_1
   );

   VAR_4 = FUNC_4(
                                 VAR_5->owning_port,
                                 VAR_5
                             );

   if (VAR_4)
   {



      FUNC_2(VAR_5);

      FUNC_0(
         FUNC_1(VAR_5),
         VAR_5->sata_timeout_timer,
         VAR_2
      );
   }
   else
   {
      VAR_5->is_in_link_training = VAR_0;
   }
}
