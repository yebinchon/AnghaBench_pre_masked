
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * msg_imprint; } ;
typedef TYPE_1__ TS_TST_INFO ;
typedef int TS_MSG_IMPRINT ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(TS_TST_INFO *VAR_2, TS_MSG_IMPRINT *VAR_3)
{
    TS_MSG_IMPRINT *VAR_4;

    if (VAR_2->msg_imprint == VAR_3)
        return 1;
    VAR_4 = FUNC_0(VAR_3);
    if (VAR_4 == ((void*)0)) {
        FUNC_2(VAR_1, VAR_0);
        return 0;
    }
    FUNC_1(VAR_2->msg_imprint);
    VAR_2->msg_imprint = VAR_4;
    return 1;
}
