
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ error; } ;
typedef TYPE_1__ ERR_STRING_DATA ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,TYPE_1__*) ;

int FUNC_4(int VAR_4, ERR_STRING_DATA *VAR_5)
{
    if (!FUNC_2(&VAR_1, VAR_0))
        return 0;

    FUNC_1(VAR_2);




    for (; VAR_5->error; VAR_5++)
        (void)FUNC_3(VAR_3, VAR_5);
    FUNC_0(VAR_2);

    return 1;
}
