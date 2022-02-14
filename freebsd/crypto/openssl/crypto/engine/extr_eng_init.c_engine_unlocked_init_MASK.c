
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ funct_ref; int (* init ) (TYPE_1__*) ;int struct_ref; } ;
typedef TYPE_1__ ENGINE ;


 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(ENGINE *VAR_0)
{
    int VAR_1 = 1;

    if ((VAR_0->funct_ref == 0) && VAR_0->init)




        VAR_1 = VAR_0->init(VAR_0);
    if (VAR_1) {




        VAR_0->struct_ref++;
        VAR_0->funct_ref++;
        FUNC_0(VAR_0, 0, 1);
        FUNC_0(VAR_0, 1, 1);
    }
    return VAR_1;
}
