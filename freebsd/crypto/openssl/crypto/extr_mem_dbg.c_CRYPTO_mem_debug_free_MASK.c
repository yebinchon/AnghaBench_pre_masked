
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int app_info; void* addr; } ;
typedef TYPE_1__ MEM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 () ;
 int * VAR_2 ;

void FUNC_5(void *VAR_3, int VAR_4,
        const char *VAR_5, int VAR_6)
{
    MEM VAR_7, *VAR_8;

    switch (VAR_4) {
    case 0:
        if (VAR_3 == ((void*)0))
            break;

        if (FUNC_4() && (VAR_2 != ((void*)0))) {
            FUNC_0(VAR_0);

            VAR_7.addr = VAR_3;
            VAR_8 = FUNC_3(VAR_2, &VAR_7);
            if (VAR_8 != ((void*)0)) {
                FUNC_2(VAR_8->app_info);
                FUNC_1(VAR_8);
            }

            FUNC_0(VAR_1);
        }
        break;
    case 1:
        break;
    }
}
