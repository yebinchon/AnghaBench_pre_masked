
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int struct_ref; int ex_data; } ;
typedef TYPE_1__ ENGINE ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,int *) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

ENGINE *FUNC_6(void)
{
    ENGINE *VAR_5;

    if (!FUNC_4(&VAR_4, VAR_3)
        || (VAR_5 = FUNC_3(sizeof(*VAR_5))) == ((void*)0)) {
        FUNC_1(VAR_1, VAR_2);
        return ((void*)0);
    }
    VAR_5->struct_ref = 1;
    FUNC_5(VAR_5, 0, 1);
    if (!FUNC_0(VAR_0, VAR_5, &VAR_5->ex_data)) {
        FUNC_2(VAR_5);
        return ((void*)0);
    }
    return VAR_5;
}
