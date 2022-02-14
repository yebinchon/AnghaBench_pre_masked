
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef TYPE_1__* t_Handle ;
struct TYPE_10__ {int activate; scalar_t__ iprcpt; int member_0; } ;
typedef TYPE_2__ t_FmPcdCcReassmTimeoutParams ;
struct TYPE_9__ {int h_Hc; scalar_t__ physicalMuramBase; } ;
typedef TYPE_1__ t_FmPcd ;
typedef int t_Error ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,TYPE_2__*,int*) ;
 int VAR_5 ;
 char* VAR_6 ;
 int FUNC_2 (int ,int ,char*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

t_Error FUNC_4(t_Handle VAR_7, t_Handle VAR_8)
{
    t_FmPcd *VAR_9 = (t_FmPcd*)VAR_7;
    t_FmPcdCcReassmTimeoutParams VAR_10 = {0};
    uint8_t VAR_11;
    t_Error VAR_12 = VAR_3;

    FUNC_0(VAR_9);
    FUNC_0(VAR_8);

    VAR_10.iprcpt = (uint32_t)(FUNC_3(VAR_8) - VAR_9->physicalMuramBase);
    VAR_10.activate = VAR_4;

    if ((VAR_12 = FUNC_1(VAR_9->h_Hc, &VAR_10, &VAR_11)) != VAR_3)
        FUNC_2(VAR_5, VAR_12, VAR_6);

    switch (VAR_11)
    {
        case (0):
            return VAR_3;
        case (1):
            FUNC_2(VAR_5, VAR_1, (""));
        case (2):
            FUNC_2(VAR_5, VAR_1, (""));
        case (3):
            FUNC_2(VAR_5, VAR_0, ("Disable Timeout Task with invalid IPRCPT"));
        default:
            FUNC_2(VAR_5, VAR_2, VAR_6);
    }

    return VAR_3;
}
