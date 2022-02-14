
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_1__ ;


typedef int uint16_t ;
typedef TYPE_1__* t_Handle ;
struct TYPE_19__ {int numOfEntries; int maxNumOfEntries; scalar_t__ p_Lock; struct TYPE_19__* h_FmPcd; int * p_MemberAd; int * h_Manip; int * p_SourceTd; } ;
typedef TYPE_1__ t_FmPcdFrmReplicMember ;
typedef TYPE_1__ t_FmPcdFrmReplicGroup ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_1__*,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_10(t_FmPcdFrmReplicGroup *VAR_1)
{
    int VAR_2, VAR_3;
    t_Handle VAR_4;
    t_FmPcdFrmReplicMember *VAR_5, *VAR_6;

    if (VAR_1)
    {
        FUNC_0(VAR_1->h_FmPcd);
        VAR_4 = FUNC_2(VAR_1->h_FmPcd);
        FUNC_0(VAR_4);


        if (VAR_1->p_SourceTd)
        {
            FUNC_1(VAR_4, VAR_1->p_SourceTd);
            VAR_1->p_SourceTd = ((void*)0);
        }



        if (VAR_1->numOfEntries)
        {
            VAR_3 = VAR_1->numOfEntries-1;



            for (VAR_2=VAR_3; VAR_2>=0; VAR_2--)
            {
                VAR_6 = FUNC_7(VAR_1, (uint16_t)VAR_2 );
                FUNC_0(VAR_6);

                if (VAR_6->h_Manip)
                {
                    FUNC_3(VAR_6->h_Manip, VAR_0);
                    VAR_6->h_Manip = ((void*)0);
                }


                FUNC_8(VAR_1, VAR_6);


                FUNC_5(VAR_1, VAR_6);
            }
        }


        for (VAR_2=0; VAR_2<VAR_1->maxNumOfEntries; VAR_2++)
        {
            VAR_5 = FUNC_6(VAR_1);
            FUNC_0(VAR_5);
            if (VAR_5->p_MemberAd)
            {
                FUNC_1(VAR_4, VAR_5->p_MemberAd);
                VAR_5->p_MemberAd = ((void*)0);
            }
            FUNC_9(VAR_5);
        }


        if (VAR_1->p_Lock)
            FUNC_4(VAR_1->h_FmPcd, VAR_1->p_Lock);


        FUNC_9(VAR_1);
    }
}
