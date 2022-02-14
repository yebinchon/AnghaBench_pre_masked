
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int key_update; } ;
typedef TYPE_1__ SSL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;

int FUNC_4(SSL *VAR_6, int VAR_7)
{





    if (!FUNC_0(VAR_6)) {
        FUNC_2(VAR_0, VAR_5);
        return 0;
    }

    if (VAR_7 != VAR_1
            && VAR_7 != VAR_2) {
        FUNC_2(VAR_0, VAR_3);
        return 0;
    }

    if (!FUNC_1(VAR_6)) {
        FUNC_2(VAR_0, VAR_4);
        return 0;
    }

    FUNC_3(VAR_6, 1);
    VAR_6->key_update = VAR_7;
    return 1;
}
