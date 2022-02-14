
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_17__ {int * h_Manip; } ;
typedef TYPE_1__ t_FmPcdFrmReplicMember ;
struct TYPE_18__ {TYPE_1__* h_FmPcd; } ;
typedef TYPE_2__ t_FmPcdFrmReplicGroup ;
typedef TYPE_1__ t_FmPcd ;
typedef scalar_t__ t_Error ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_1__*,TYPE_1__*,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;



 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_6 (int ,scalar_t__,char*) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static t_Error FUNC_9(t_FmPcdFrmReplicGroup *VAR_6,
                            uint16_t VAR_7)
{
    t_FmPcd *VAR_8 = ((void*)0);
    t_FmPcdFrmReplicMember *VAR_9 = ((void*)0), *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
    t_Error VAR_12;
    uint8_t VAR_13;

    VAR_8 = VAR_6->h_FmPcd;
    FUNC_0(VAR_8);
    FUNC_8(VAR_8);

    VAR_9 = FUNC_4(VAR_6, VAR_7);
    FUNC_0(VAR_9);


    VAR_13 = FUNC_5(VAR_6,
                                       VAR_7,
                                       VAR_2 );

    switch (VAR_13)
    {
        case 130:
            VAR_11 = FUNC_4(VAR_6, (uint16_t)(VAR_7+1));
            FUNC_0(VAR_11);


            VAR_12 = FUNC_1(VAR_6,
                                                 VAR_11,
                                                 ((void*)0),
                                                 VAR_5 ,
                                                 VAR_2 );
            break;

        case 128:
            VAR_10 = FUNC_4(VAR_6, (uint16_t)(VAR_7-1));
            FUNC_0(VAR_10);

            VAR_11 = FUNC_4(VAR_6, (uint16_t)(VAR_7+1));
            FUNC_0(VAR_11);

            VAR_12 = FUNC_1(VAR_6,
                                                 VAR_11,
                                                 VAR_10,
                                                 VAR_2 ,
                                                 VAR_2 );

            break;

        case 129:
            VAR_10 = FUNC_4(VAR_6, (uint16_t)(VAR_7-1));
            FUNC_0(VAR_10);

            VAR_12 = FUNC_1(VAR_6,
                                                 ((void*)0),
                                                 VAR_10,
                                                 VAR_2 ,
                                                 VAR_5 );
            break;

        default:
            FUNC_6(VAR_3, VAR_0, ("member position in remove member"));
    }

    if (VAR_12)
        FUNC_6(VAR_3, VAR_12, VAR_4);

    if (VAR_9->h_Manip)
    {
        FUNC_2(VAR_9->h_Manip, VAR_2);
        VAR_9->h_Manip = ((void*)0);
    }


    FUNC_7(VAR_6, VAR_9);


    FUNC_3(VAR_6, VAR_9);

    return VAR_1;
}
