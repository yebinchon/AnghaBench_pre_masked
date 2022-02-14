
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ error; } ;
struct TYPE_6__ {TYPE_1__ parent; } ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCIC_SDS_REMOTE_DEVICE_T ;
typedef int SCIC_SDS_PORT_T ;
typedef TYPE_2__ SCIC_SDS_CONTROLLER_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int *,int *) ;

SCI_STATUS FUNC_1(
        SCIC_SDS_CONTROLLER_T *VAR_2,
        SCIC_SDS_REMOTE_DEVICE_T *VAR_3,
        SCIC_SDS_PORT_T *VAR_4
)
{
    SCI_STATUS VAR_5 = VAR_1;
    SCI_STATUS VAR_6 = VAR_1;


    VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4);

    if (VAR_6 != VAR_1)
        VAR_5 = VAR_6;


    if (VAR_2->parent.error == VAR_0)
        VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4);

    if (VAR_6 != VAR_1)
        VAR_5 = VAR_6;

    return VAR_5;
}
