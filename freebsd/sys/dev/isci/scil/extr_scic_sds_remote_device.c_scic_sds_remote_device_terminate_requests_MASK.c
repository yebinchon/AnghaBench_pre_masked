
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* owning_port; } ;
struct TYPE_5__ {int owning_controller; } ;
typedef int SCI_STATUS ;
typedef TYPE_2__ SCIC_SDS_REMOTE_DEVICE_T ;


 int FUNC_0 (int ,TYPE_2__*,int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_1(
   SCIC_SDS_REMOTE_DEVICE_T *VAR_0
)
{
    return FUNC_0(
            VAR_0->owning_port->owning_controller,
            VAR_0,
            ((void*)0));
}
