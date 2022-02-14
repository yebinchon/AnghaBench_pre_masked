
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ error; } ;
struct TYPE_4__ {TYPE_1__ parent; } ;
typedef int SCI_STATUS ;
typedef int SCI_BASE_CONTROLLER_T ;
typedef TYPE_2__ SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_3(
   SCI_BASE_CONTROLLER_T *VAR_3
)
{
    SCIC_SDS_CONTROLLER_T *VAR_4;
    VAR_4 = (SCIC_SDS_CONTROLLER_T *)VAR_3;

    if (VAR_4->parent.error == VAR_1) {
        FUNC_0(*(
           FUNC_1(VAR_3),
           VAR_0,
           "scic_sds_controller_resetting_state_enter(0x%x) enter\n not allowed with fatal memory error",
           VAR_3
        ));

        return VAR_2;
    } else {
        return FUNC_2(VAR_3);
    }
}
