
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int t_Error ;
struct TYPE_5__ {scalar_t__ guestId; int f_Exception; TYPE_1__* p_BmDriverParams; } ;
typedef TYPE_2__ t_Bm ;
struct TYPE_4__ {scalar_t__ partBpidBase; scalar_t__ partNumOfPools; int totalNumOfBuffers; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int ,char*) ;

__attribute__((used)) static t_Error FUNC_1(t_Bm *VAR_6)
{
    if ((VAR_6->p_BmDriverParams->partBpidBase + VAR_6->p_BmDriverParams->partNumOfPools) > VAR_0)
            FUNC_0(VAR_3, VAR_1, ("partBpidBase+partNumOfPools out of range!!!"));

    if (VAR_6->guestId == VAR_5)
    {
        if (!VAR_6->p_BmDriverParams->totalNumOfBuffers)
            FUNC_0(VAR_3, VAR_1, ("totalNumOfBuffers must be larger than '0'!!!"));
        if (VAR_6->p_BmDriverParams->totalNumOfBuffers > (128*VAR_4))
            FUNC_0(VAR_3, VAR_1, ("totalNumOfBuffers must be equal or smaller than 128M!!!"));
        if(!VAR_6->f_Exception)
            FUNC_0(VAR_3, VAR_1, ("Exceptions callback not provided"));
    }

    return VAR_2;
}
