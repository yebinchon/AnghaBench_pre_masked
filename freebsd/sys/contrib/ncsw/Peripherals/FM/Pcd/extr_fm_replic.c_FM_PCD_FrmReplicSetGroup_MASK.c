
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_1__ ;


typedef TYPE_1__* t_Handle ;
typedef int t_FmPcdFrmReplicMember ;
struct TYPE_26__ {int maxNumOfEntries; int numOfEntries; struct TYPE_26__* p_SourceTd; int membersList; int * nextEngineParams; struct TYPE_26__* h_FmPcd; int p_Lock; int availableMembersList; } ;
typedef TYPE_1__ t_FmPcdFrmReplicGroupParams ;
typedef TYPE_1__ t_FmPcdFrmReplicGroup ;
typedef scalar_t__ t_Error ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_1__* FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int ,int ) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (TYPE_1__*,int *,int) ;
 int FUNC_13 (TYPE_1__*,int *,int *) ;
 int FUNC_14 (TYPE_1__*,TYPE_1__*,int *) ;
 int VAR_6 ;
 char* VAR_7 ;
 int FUNC_15 (int ,scalar_t__,char*) ;
 int FUNC_16 (TYPE_1__*,scalar_t__,int *) ;
 int VAR_8 ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (TYPE_1__*,int ,int) ;

t_Handle FUNC_19(t_Handle VAR_9,
                                  t_FmPcdFrmReplicGroupParams *VAR_10)
{
    t_FmPcdFrmReplicGroup *VAR_11;
    t_FmPcdFrmReplicMember *VAR_12, *VAR_13 = ((void*)0);
    int VAR_14;
    t_Error VAR_15;
    bool VAR_16 = VAR_3;
    t_Handle VAR_17;

    FUNC_16(VAR_9, VAR_0, ((void*)0));
    FUNC_16(VAR_10, VAR_0, ((void*)0));

    if (!FUNC_9(VAR_9))
    {
        FUNC_15(VAR_6, VAR_1, ("Advanced-offload must be enabled"));
        return ((void*)0);
    }

    VAR_15 = FUNC_4(VAR_9, VAR_10);
    if (VAR_15)
    {
        FUNC_15(VAR_6, VAR_15, (VAR_7));
        return ((void*)0);
    }

    VAR_11 = (t_FmPcdFrmReplicGroup*)FUNC_17(sizeof(t_FmPcdFrmReplicGroup));
    if (!VAR_11)
    {
        FUNC_15(VAR_6, VAR_2, ("No memory"));
        return ((void*)0);
    }
    FUNC_18(VAR_11, 0, sizeof(t_FmPcdFrmReplicGroup));


    FUNC_11(&VAR_11->availableMembersList);
    FUNC_11(&VAR_11->membersList);

    VAR_11->h_FmPcd = VAR_9;

    VAR_17 = FUNC_8(VAR_11->h_FmPcd);
    FUNC_0(VAR_17);


    VAR_11->p_Lock = FUNC_7(VAR_11->h_FmPcd);
    if (!VAR_11->p_Lock)
    {
        FUNC_15(VAR_6, VAR_2, ("Replic group lock"));
        FUNC_5(VAR_11);
        return ((void*)0);
    }


    VAR_11->p_SourceTd =
        (t_Handle)FUNC_6(VAR_17,
                                    VAR_4,
                                    VAR_5);
    if (!VAR_11->p_SourceTd)
    {
        FUNC_15(VAR_6, VAR_2, ("frame replicator source table descriptor"));
        FUNC_5(VAR_11);
        return ((void*)0);
    }


    VAR_15 = FUNC_10(VAR_11->h_FmPcd,
                              VAR_4,
                              VAR_5);
    if (VAR_15)
    {
        FUNC_15(VAR_6, VAR_15, ("Update CC shadow"));
        FUNC_5(VAR_11);
        return ((void*)0);
    }

    VAR_11->maxNumOfEntries = VAR_10->maxNumOfEntries;



    for (VAR_14=0; VAR_14<VAR_11->maxNumOfEntries; VAR_14++)
    {
        VAR_15 = FUNC_2(VAR_11);
        if (VAR_15)
        {
            FUNC_15(VAR_6, VAR_15, ("allocate a new member"));
            FUNC_5(VAR_11);
            return ((void*)0);
        }
    }




    for (VAR_14=(VAR_10->numOfEntries-1); VAR_14>=0; VAR_14--)
    {

        if (VAR_14 == (VAR_10->numOfEntries-1))
            VAR_16 = VAR_8;
        else
            VAR_16 = VAR_3;


        VAR_12 = FUNC_12(VAR_11,
                                     &(VAR_10->nextEngineParams[VAR_14]),
                                     VAR_16);
        if (!VAR_12)
        {
            FUNC_15(VAR_6, VAR_0, ("No available member"));
            FUNC_5(VAR_11);
            return ((void*)0);
        }


        FUNC_13(VAR_11, VAR_12, VAR_13);


        FUNC_1(VAR_11, VAR_12, &VAR_11->membersList);

        VAR_13 = VAR_12;
    }


    FUNC_3(VAR_11->p_SourceTd);


    FUNC_14(VAR_11, VAR_11->p_SourceTd, VAR_13);

    return VAR_11;
}
