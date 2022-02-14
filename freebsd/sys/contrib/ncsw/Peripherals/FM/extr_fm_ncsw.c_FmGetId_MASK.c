
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_5__ {TYPE_1__* p_FmStateStruct; } ;
typedef TYPE_2__ t_Fm ;
struct TYPE_4__ {int fmId; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;

uint8_t FUNC_1(t_Handle VAR_1)
{
    t_Fm *VAR_2 = (t_Fm*)VAR_1;

    FUNC_0(VAR_2, VAR_0, 0xff);

    return VAR_2->p_FmStateStruct->fmId;
}
