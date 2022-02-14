
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int t_FmPcdManipParams ;
struct TYPE_7__ {struct TYPE_7__* h_PrevManip; int manipParams; int * p_Data; int * p_Hmct; struct TYPE_7__* h_NextManip; } ;
typedef TYPE_1__ t_FmPcdManip ;
typedef int t_Error ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int *,int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static t_Error FUNC_5(
        t_FmPcdManip *VAR_3, t_FmPcdManipParams *VAR_4)
{
    uint8_t *VAR_5 = ((void*)0), *VAR_6, *VAR_7;
    t_FmPcdManip *VAR_8 = VAR_3;


    if (!FUNC_3(VAR_3))
        FUNC_1(VAR_3, VAR_4, VAR_3->p_Hmct, VAR_3->p_Data,
                  VAR_1);
    else
    {
        VAR_5 = (uint8_t *)FUNC_2(VAR_3, VAR_2);
        FUNC_0(VAR_5);


        while (FUNC_4(VAR_8))
            VAR_8 = VAR_8->h_NextManip;

        while (VAR_8)
        {



            VAR_6 = VAR_8->p_Hmct;
            VAR_7 = VAR_8->p_Data;

            FUNC_1(VAR_8, &VAR_8->manipParams, VAR_6,
                      VAR_7, VAR_1);

            VAR_8 = VAR_8->h_PrevManip;
        }
    }

    return VAR_0;
}
