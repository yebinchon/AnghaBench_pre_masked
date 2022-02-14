
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_9__ {int majorRev; } ;
typedef TYPE_2__ t_FmRevisionInfo ;
struct TYPE_10__ {size_t numOfCongestionGrpsToConsider; int* congestionGrpsToConsider; } ;
typedef TYPE_3__ t_FmPortCongestionGrps ;
struct TYPE_8__ {int majorRev; } ;
struct TYPE_11__ {scalar_t__ portType; int port; int h_Fm; TYPE_1__ fmRevInfo; } ;
typedef TYPE_4__ t_FmPort ;
typedef scalar_t__ t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,int,int ) ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (int *,size_t*) ;
 int FUNC_5 (size_t*,int ,int) ;

t_Error FUNC_6(t_Handle VAR_9,
                                     t_FmPortCongestionGrps *VAR_10)
{
    t_FmPort *VAR_11 = (t_FmPort*)VAR_9;
    uint8_t VAR_12, VAR_13;
    uint32_t VAR_14, VAR_15[VAR_4];
    int VAR_16;

    FUNC_3(VAR_11, VAR_0);

    {
        if ((VAR_11->portType != VAR_8)
                && (VAR_11->portType != VAR_7)
                && (VAR_11->portType != VAR_6))
            FUNC_2(VAR_5, VAR_2,
                         ("Available for Rx & OP ports only"));
    }


    FUNC_5(VAR_15, 0, VAR_4 * sizeof(uint32_t));
    for (VAR_14 = 0; VAR_14 < VAR_10->numOfCongestionGrpsToConsider; VAR_14++)
    {
        VAR_13 = (uint8_t)(VAR_10->congestionGrpsToConsider[VAR_14] / 32);
        VAR_12 = (uint8_t)(VAR_10->congestionGrpsToConsider[VAR_14] % 32);
        if (VAR_11->fmRevInfo.majorRev != 4)
            VAR_15[7 - VAR_13] |= (uint32_t)(1 << VAR_12);
        else
            VAR_15[0] |= (uint32_t)(1 << VAR_12);
    }
    VAR_16 = FUNC_4(&VAR_11->port, VAR_15);
    if (VAR_16 != 0)
        FUNC_2(VAR_5, VAR_1,
                     ("fman_port_remove_congestion_grps"));
    return VAR_3;
}
