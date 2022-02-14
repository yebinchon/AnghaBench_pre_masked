
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_23__ {int node; int p_MemberAd; } ;
typedef TYPE_1__ t_FmPcdFrmReplicMember ;
struct TYPE_24__ {scalar_t__ numOfEntries; scalar_t__ maxNumOfEntries; int membersList; int p_SourceTd; int h_FmPcd; } ;
typedef TYPE_2__ t_FmPcdFrmReplicGroup ;
typedef TYPE_2__ t_FmPcdCcNextEngineParams ;
typedef scalar_t__ t_Error ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;



 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 TYPE_1__* FUNC_7 (TYPE_2__*,scalar_t__) ;
 int FUNC_8 (TYPE_2__*,scalar_t__,int ) ;
 TYPE_1__* FUNC_9 (TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_2__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_11 (TYPE_2__*,int ,TYPE_1__*) ;
 int VAR_7 ;
 scalar_t__ FUNC_12 (int ,TYPE_2__*) ;
 int FUNC_13 (int ,scalar_t__,char*) ;
 int FUNC_14 (TYPE_2__*,scalar_t__) ;
 int VAR_8 ;

t_Error FUNC_15(t_Handle VAR_9,
                                  uint16_t VAR_10,
                                  t_FmPcdCcNextEngineParams *VAR_11)
{
    t_FmPcdFrmReplicGroup *VAR_12 = (t_FmPcdFrmReplicGroup*) VAR_9;
    t_FmPcdFrmReplicMember *VAR_13, *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
    t_Error VAR_16;
    uint8_t VAR_17;

    FUNC_14(VAR_12, VAR_1);
    FUNC_14(VAR_11, VAR_1);


    VAR_16 = FUNC_4(VAR_12);
    if (FUNC_6(VAR_16) == VAR_0)
        return FUNC_2(VAR_0);

    if (VAR_10 > VAR_12->numOfEntries)
    {

        FUNC_5(VAR_12);
        FUNC_13(VAR_7, VAR_2,
                     ("memberIndex is greater than the members in the list"));
    }

    if (VAR_10 >= VAR_12->maxNumOfEntries)
    {

        FUNC_5(VAR_12);
        FUNC_13(VAR_7, VAR_2, ("memberIndex is greater than the allowed number of members in the group"));
    }

    if ((VAR_12->numOfEntries + 1) > VAR_6)
    {

        FUNC_5(VAR_12);
        FUNC_13(VAR_7, VAR_3,
                     ("numOfEntries with new entry can not be larger than %d\n",
                      VAR_6));
    }

    VAR_16 = FUNC_12(VAR_12->h_FmPcd, VAR_11);
    if (VAR_16)
    {

        FUNC_5(VAR_12);
        FUNC_13(VAR_7, VAR_16, ("member check parameters in add operation"));
    }

    VAR_17 = FUNC_8(VAR_12,
                                       VAR_10,
                                       VAR_8 );


    VAR_13 = FUNC_9(VAR_12,
                             VAR_11,
                             (VAR_17 == 129 ? VAR_8 : VAR_5));
    if (!VAR_13)
    {

        FUNC_5(VAR_12);
        FUNC_13(VAR_7, VAR_1, ("No available member"));
    }

    switch (VAR_17)
    {
        case 130:
            VAR_14 = FUNC_7(VAR_12, VAR_10);
            FUNC_0(VAR_14);

            FUNC_10(VAR_12, VAR_13, VAR_14);


            FUNC_11(VAR_12,
                               VAR_12->p_SourceTd,
                               VAR_13);


            FUNC_1(VAR_12,
                            VAR_13,
                            &VAR_12->membersList);
            break;

        case 128:
            VAR_14 = FUNC_7(VAR_12, VAR_10);
            FUNC_0(VAR_14);

            VAR_15 = FUNC_7(VAR_12, (uint16_t)(VAR_10-1));
            FUNC_0(VAR_15);

            FUNC_10(VAR_12, VAR_13, VAR_14);
            FUNC_10(VAR_12, VAR_15, VAR_13);

            FUNC_1(VAR_12, VAR_13, &VAR_15->node);
            break;

        case 129:
            VAR_15 = FUNC_7(VAR_12, (uint16_t)(VAR_10-1));
            FUNC_0(VAR_15);

            FUNC_10(VAR_12, VAR_15, VAR_13);
            FUNC_3(VAR_15->p_MemberAd, VAR_5 );


            FUNC_1(VAR_12, VAR_13, &VAR_15->node);
           break;

        default:

            FUNC_5(VAR_12);
            FUNC_13(VAR_7, VAR_2, ("member position in add member"));

    }


    FUNC_5(VAR_12);

    return VAR_4;
}
