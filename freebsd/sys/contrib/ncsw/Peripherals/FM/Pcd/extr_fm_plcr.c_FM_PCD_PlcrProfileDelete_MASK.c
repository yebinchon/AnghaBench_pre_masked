
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_14__ {scalar_t__ p_Lock; TYPE_8__* p_FmPcdPlcr; scalar_t__ h_Hc; int absoluteProfileId; struct TYPE_14__* h_FmPcd; } ;
typedef TYPE_3__ t_FmPcdPlcrProfile ;
typedef TYPE_3__ t_FmPcd ;
typedef int t_Error ;
struct TYPE_15__ {TYPE_2__* p_FmPcdPlcrRegs; } ;
struct TYPE_12__ {int fmpl_pemode; } ;
struct TYPE_13__ {TYPE_1__ profileRegs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,scalar_t__) ;
 int FUNC_4 (TYPE_8__*) ;
 int FUNC_5 (TYPE_8__*,int ) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_3__*,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (TYPE_3__*,int ) ;

t_Error FUNC_10(t_Handle VAR_4)
{
    t_FmPcdPlcrProfile *VAR_5 = (t_FmPcdPlcrProfile*)VAR_4;
    t_FmPcd *VAR_6;
    uint16_t VAR_7;
    uint32_t VAR_8, VAR_9;
    t_Error VAR_10;

    FUNC_6(VAR_5, VAR_0);
    VAR_6 = VAR_5->h_FmPcd;
    FUNC_6(VAR_6, VAR_0);

    VAR_7 = VAR_5->absoluteProfileId;

    FUNC_7(VAR_6, VAR_7, VAR_2);

    FUNC_2(VAR_6,VAR_7);

    if (VAR_6->h_Hc)
    {
        VAR_10 = FUNC_0(VAR_6->h_Hc, VAR_4);
        if (VAR_5->p_Lock)

            FUNC_3(VAR_6, VAR_5->p_Lock);

        return VAR_10;
    }

    VAR_9 = FUNC_4(VAR_6->p_FmPcdPlcr);
    FUNC_8(VAR_6->p_FmPcdPlcr->p_FmPcdPlcrRegs->profileRegs.fmpl_pemode, ~VAR_3);

    VAR_8 = FUNC_1(VAR_7);
    FUNC_9(VAR_6, VAR_8);
    FUNC_5(VAR_6->p_FmPcdPlcr, VAR_9);


    if (VAR_5->p_Lock)

        FUNC_3(VAR_6, VAR_5->p_Lock);



    return VAR_1;
}
