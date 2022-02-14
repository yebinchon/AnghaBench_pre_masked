
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ funct_ref; int (* finish ) (TYPE_1__*) ;} ;
typedef TYPE_1__ ENGINE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int,int) ;
 int VAR_2 ;
 int FUNC_6 (TYPE_1__*) ;

int FUNC_7(ENGINE *VAR_3, int VAR_4)
{
    int VAR_5 = 1;
    VAR_3->funct_ref--;
    FUNC_5(VAR_3, 1, -1);
    if ((VAR_3->funct_ref == 0) && VAR_3->finish) {
        if (VAR_4)
            FUNC_0(VAR_2);
        VAR_5 = VAR_3->finish(VAR_3);
        if (VAR_4)
            FUNC_1(VAR_2);
        if (!VAR_5)
            return 0;
    }
    FUNC_3(VAR_3->funct_ref < 0);

    if (!FUNC_4(VAR_3, 0)) {
        FUNC_2(VAR_0, VAR_1);
        return 0;
    }
    return VAR_5;
}
