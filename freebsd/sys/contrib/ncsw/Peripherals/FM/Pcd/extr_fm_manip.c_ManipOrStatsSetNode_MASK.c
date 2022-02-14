
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint8_t ;
typedef TYPE_1__* t_Handle ;
typedef int t_FmPcdStatsParams ;
struct TYPE_18__ {int type; } ;
typedef TYPE_2__ t_FmPcdManipParams ;
struct TYPE_17__ {scalar_t__ opcode; struct TYPE_17__* h_FmPcd; struct TYPE_17__* h_Ad; scalar_t__ muramAllocate; int manipParams; int type; } ;
typedef TYPE_1__ t_FmPcdManip ;
struct TYPE_19__ {int h_FmMuram; } ;
typedef TYPE_4__ t_FmPcd ;
typedef scalar_t__ t_Error ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (TYPE_1__*,TYPE_4__*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *,TYPE_1__**,int) ;
 int FUNC_9 (TYPE_1__*,int ,int) ;

__attribute__((used)) static t_Handle FUNC_10(t_Handle VAR_8, t_Handle *VAR_9,
                                    bool VAR_10)
{
    t_FmPcdManip *VAR_11;
    t_Error VAR_12;
    t_FmPcd *VAR_13 = (t_FmPcd *)VAR_8;

    VAR_11 = (t_FmPcdManip*)FUNC_7(sizeof(t_FmPcdManip));
    if (!VAR_11)
    {
        FUNC_4(VAR_7, VAR_2, ("No memory"));
        return ((void*)0);
    }
    FUNC_9(VAR_11, 0, sizeof(t_FmPcdManip));

    VAR_11->type = ((t_FmPcdManipParams *)VAR_9)->type;
    FUNC_8((uint8_t*)&VAR_11->manipParams, VAR_9,
           sizeof(VAR_11->manipParams));

    if (!VAR_10)
        VAR_12 = FUNC_0(VAR_11,
                                         (t_FmPcdManipParams *)VAR_9);




    else
    {
        FUNC_4(VAR_7, VAR_1, ("Statistics node!"));
        FUNC_6(VAR_11);
        return ((void*)0);
    }

    if (VAR_12)
    {
        FUNC_4(VAR_7, VAR_0, ("Invalid header manipulation type"));
        FUNC_6(VAR_11);
        return ((void*)0);
    }

    if ((VAR_11->opcode != VAR_6) && (VAR_11->opcode != VAR_5))
    {


        if (VAR_11->muramAllocate)
        {
            VAR_11->h_Ad = (t_Handle)FUNC_2(
                    VAR_13->h_FmMuram, VAR_3,
                    VAR_4);
            if (!VAR_11->h_Ad)
            {
                FUNC_4(VAR_7, VAR_2, ("MURAM alloc for Manipulation action descriptor"));
                FUNC_5(VAR_11, VAR_13);
                FUNC_6(VAR_11);
                return ((void*)0);
            }

            FUNC_3(VAR_11->h_Ad, 0, VAR_3);
        }
        else
        {
            VAR_11->h_Ad = (t_Handle)FUNC_7(
                    VAR_3 * sizeof(uint8_t));
            if (!VAR_11->h_Ad)
            {
                FUNC_4(VAR_7, VAR_2, ("Allocation of Manipulation action descriptor"));
                FUNC_5(VAR_11, VAR_13);
                FUNC_6(VAR_11);
                return ((void*)0);
            }

            FUNC_9(VAR_11->h_Ad, 0, VAR_3 * sizeof(uint8_t));
        }
    }

    VAR_11->h_FmPcd = VAR_8;

    return VAR_11;
}
