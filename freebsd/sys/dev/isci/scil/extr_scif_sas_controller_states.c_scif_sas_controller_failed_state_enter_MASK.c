
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ error; } ;
struct TYPE_8__ {TYPE_1__ parent; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_2__ SCIF_SAS_CONTROLLER_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_3 ;

__attribute__((used)) static
void FUNC_5(
   SCI_BASE_OBJECT_T * VAR_4
)
{
   SCIF_SAS_CONTROLLER_T * VAR_5 = (SCIF_SAS_CONTROLLER_T *)VAR_4;

   FUNC_0((
      FUNC_2(VAR_5),
      VAR_0,
      "Controller: entered FAILED state.\n"
   ));

   FUNC_1(
      VAR_5,
      VAR_3,
      VAR_1
   );

   if (VAR_5->parent.error != VAR_2)
   {

       FUNC_4(VAR_5);


       FUNC_3(VAR_5, VAR_5->parent.error);
   }
}
