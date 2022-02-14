
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int t_List ;
typedef int * t_Handle ;
typedef int t_FmPcdModifyCcKeyAdditionalParams ;
struct TYPE_2__ {int h_Hc; } ;
typedef TYPE_1__ t_FmPcd ;
typedef scalar_t__ t_Error ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,scalar_t__,char*) ;
 int FUNC_7 (int *,int *,int *,int *,int) ;

__attribute__((used)) static t_Error FUNC_8(
        t_Handle VAR_4, t_List *VAR_5, t_List *VAR_6,
        t_FmPcdModifyCcKeyAdditionalParams *VAR_7,
        bool VAR_8)
{
    t_List *VAR_9, *VAR_10;
    uint32_t VAR_11, VAR_12;
    uint16_t VAR_13 = 0;
    t_Error VAR_14 = VAR_1;
    uint8_t VAR_15;

    FUNC_0(VAR_4);
    FUNC_0(VAR_5);
    FUNC_0(VAR_6);

    VAR_15 = (uint8_t)FUNC_5(VAR_5);

    if (VAR_15)
    {
        VAR_10 = FUNC_3(VAR_6);
        VAR_9 = FUNC_3(VAR_5);


        VAR_12 = FUNC_2(VAR_4,
                                                               VAR_10);
        if (VAR_12 == (uint32_t)VAR_2)
        {
            FUNC_7(VAR_4, VAR_5,
                                         VAR_6,
                                         VAR_7, VAR_8);
            FUNC_6(VAR_3, VAR_0, ("New AD address"));
        }

        for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++)
        {

            VAR_11 = FUNC_2(VAR_4,
                                                                   VAR_9);
            if (VAR_11 == (uint32_t)VAR_2)
            {
                FUNC_7(VAR_4, VAR_5,
                                             VAR_6,
                                             VAR_7,
                                             VAR_8);
                FUNC_6(VAR_3, VAR_0, ("Old AD address"));
            }


            VAR_14 = FUNC_1(((t_FmPcd *)VAR_4)->h_Hc,
                                           VAR_11, VAR_12);
            if (VAR_14)
            {
                FUNC_7(VAR_4, VAR_5,
                                             VAR_6,
                                             VAR_7,
                                             VAR_8);
                FUNC_6(
                        VAR_3,
                        VAR_14,
                        ("For part of nodes changes are done - situation is danger"));
            }

            VAR_9 = FUNC_4(VAR_9);
        }
    }
    return VAR_1;
}
