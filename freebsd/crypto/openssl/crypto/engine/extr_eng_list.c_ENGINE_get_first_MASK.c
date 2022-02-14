
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int struct_ref; } ;
typedef TYPE_1__ ENGINE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,int ) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int VAR_5 ;

ENGINE *FUNC_5(void)
{
    ENGINE *VAR_6;

    if (!FUNC_3(&VAR_4, VAR_2)) {
        FUNC_2(VAR_0, VAR_1);
        return ((void*)0);
    }

    FUNC_1(VAR_5);
    VAR_6 = VAR_3;
    if (VAR_6) {
        VAR_6->struct_ref++;
        FUNC_4(VAR_6, 0, 1);
    }
    FUNC_0(VAR_5);
    return VAR_6;
}
