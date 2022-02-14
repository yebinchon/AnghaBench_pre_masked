
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int struct_ref; struct TYPE_6__* prev; } ;
typedef TYPE_1__ ENGINE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int VAR_2 ;

ENGINE *FUNC_5(ENGINE *VAR_3)
{
    ENGINE *VAR_4 = ((void*)0);
    if (VAR_3 == ((void*)0)) {
        FUNC_3(VAR_0, VAR_1);
        return 0;
    }
    FUNC_1(VAR_2);
    VAR_4 = VAR_3->prev;
    if (VAR_4) {

        VAR_4->struct_ref++;
        FUNC_4(VAR_4, 0, 1);
    }
    FUNC_0(VAR_2);

    FUNC_2(VAR_3);
    return VAR_4;
}
