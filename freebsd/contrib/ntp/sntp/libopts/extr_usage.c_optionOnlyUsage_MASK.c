
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int pzProgName; } ;
typedef TYPE_1__ tOptions ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (TYPE_1__*,int,char const*) ;
 int FUNC_5 (TYPE_1__*,char const**) ;
 int FUNC_6 (TYPE_1__*,char const**) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void
FUNC_9(tOptions * VAR_6, int VAR_7)
{
    char const * VAR_8 = ((void*)0);

    FUNC_7(VAR_6, ((void*)0));
    if ((VAR_7 != VAR_0) &&
        FUNC_8(VAR_6))
        return;




    if (FUNC_0(VAR_6))
        (void)FUNC_5(VAR_6, &VAR_8);
    else
        (void)FUNC_6(VAR_6, &VAR_8);

    FUNC_4(VAR_6, VAR_7, VAR_8);

    FUNC_2(VAR_1);
    if (FUNC_1(VAR_1) != 0)
        FUNC_3(VAR_6->pzProgName, VAR_5, (VAR_1 == VAR_2)
                   ? VAR_3 : VAR_4);
}
