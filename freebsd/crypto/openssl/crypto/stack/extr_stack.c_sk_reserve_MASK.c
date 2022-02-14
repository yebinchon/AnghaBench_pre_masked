
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num; void const** data; int num_alloc; } ;
typedef TYPE_1__ OPENSSL_STACK ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 void** FUNC_1 (void*,int) ;
 void const** FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(OPENSSL_STACK *VAR_4, int VAR_5, int VAR_6)
{
    const void **VAR_7;
    int VAR_8;


    if (VAR_5 > VAR_2 - VAR_4->num)
        return 0;


    VAR_8 = VAR_4->num + VAR_5;
    if (VAR_8 < VAR_3)
        VAR_8 = VAR_3;


    if (VAR_4->data == ((void*)0)) {




        if ((VAR_4->data = FUNC_2(sizeof(void *) * VAR_8)) == ((void*)0)) {
            FUNC_0(VAR_0, VAR_1);
            return 0;
        }
        VAR_4->num_alloc = VAR_8;
        return 1;
    }

    if (!VAR_6) {
        if (VAR_8 <= VAR_4->num_alloc)
            return 1;
        VAR_8 = FUNC_3(VAR_8, VAR_4->num_alloc);
        if (VAR_8 == 0)
            return 0;
    } else if (VAR_8 == VAR_4->num_alloc) {
        return 1;
    }

    VAR_7 = FUNC_1((void *)VAR_4->data, sizeof(void *) * VAR_8);
    if (VAR_7 == ((void*)0))
        return 0;

    VAR_4->data = VAR_7;
    VAR_4->num_alloc = VAR_8;
    return 1;
}
