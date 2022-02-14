
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sata_timeout_timer; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_1__ SCIC_SDS_PHY_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static
void FUNC_3(
   SCI_BASE_OBJECT_T *VAR_2
)
{
   SCIC_SDS_PHY_T *VAR_3;
   VAR_3 = (SCIC_SDS_PHY_T *)VAR_2;

   FUNC_2(
      VAR_3, VAR_0
      );

   FUNC_0(
      FUNC_1(VAR_3),
      VAR_3->sata_timeout_timer,
      VAR_1
   );
}
