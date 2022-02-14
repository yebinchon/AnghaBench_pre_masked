
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t num; int array; int array_siz; void* addr; } ;
typedef TYPE_1__ MEM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*,size_t,int,char const*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 TYPE_1__* FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 () ;
 int VAR_2 ;

void FUNC_7(void *VAR_3, void *VAR_4, size_t VAR_5,
                              int VAR_6, const char *VAR_7, int VAR_8)
{
    MEM VAR_9, *VAR_10;

    switch (VAR_6) {
    case 0:
        break;
    case 1:
        if (VAR_4 == ((void*)0))
            break;

        if (VAR_3 == ((void*)0)) {
            FUNC_1(VAR_4, VAR_5, 128 | VAR_6, VAR_7, VAR_8);
            break;
        }

        if (FUNC_6()) {
            FUNC_0(VAR_0);

            VAR_9.addr = VAR_3;
            VAR_10 = FUNC_4(VAR_2, &VAR_9);
            if (VAR_10 != ((void*)0)) {
                VAR_10->addr = VAR_4;
                VAR_10->num = VAR_5;

                VAR_10->array_siz = FUNC_3(VAR_10->array, FUNC_2(VAR_10->array));

                (void)FUNC_5(VAR_2, VAR_10);
            }

            FUNC_0(VAR_1);
        }
        break;
    }
    return;
}
