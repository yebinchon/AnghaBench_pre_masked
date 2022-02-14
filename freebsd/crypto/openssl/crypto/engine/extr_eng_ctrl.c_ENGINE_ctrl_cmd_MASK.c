
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * ctrl; } ;
typedef TYPE_1__ ENGINE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int,long,void*,void (*) ()) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int FUNC_2 () ;

int FUNC_3(ENGINE *VAR_4, const char *VAR_5,
                    long VAR_6, void *VAR_7, void (*VAR_8) (void), int VAR_9)
{
    int VAR_10;

    if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0)) {
        FUNC_1(VAR_1, VAR_3);
        return 0;
    }
    if (VAR_4->ctrl == ((void*)0)
        || (VAR_10 = FUNC_0(VAR_4, VAR_0,
                              0, (void *)VAR_5, ((void*)0))) <= 0) {
        if (VAR_9) {
            FUNC_2();
            return 1;
        }
        FUNC_1(VAR_1, VAR_2);
        return 0;
    }




    if (FUNC_0(VAR_4, VAR_10, VAR_6, VAR_7, VAR_8) > 0)
        return 1;
    return 0;
}
