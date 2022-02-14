
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* func ) (int,char**) ;} ;
typedef TYPE_1__ SL_cmd ;


 TYPE_1__* FUNC_0 (TYPE_1__*,char*,int ) ;
 int FUNC_1 (int,char**) ;

int
FUNC_2(SL_cmd *VAR_0, int VAR_1, char **VAR_2)
{
    SL_cmd *VAR_3;
    VAR_3 = FUNC_0 (VAR_0, VAR_2[0], 0);
    if (VAR_3 == ((void*)0))
 return -1;
    return (*VAR_3->func)(VAR_1, VAR_2);
}
