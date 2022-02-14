
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ num; int num_alloc; int ** data; } ;
typedef int (* OPENSSL_sk_freefunc ) (void*) ;
typedef int * (* OPENSSL_sk_copyfunc ) (int *) ;
typedef TYPE_1__ OPENSSL_STACK ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int ** FUNC_4 (int) ;
 scalar_t__ VAR_2 ;

OPENSSL_STACK *FUNC_5(const OPENSSL_STACK *VAR_3,
                             OPENSSL_sk_copyfunc VAR_4,
                             OPENSSL_sk_freefunc VAR_5)
{
    OPENSSL_STACK *VAR_6;
    int VAR_7;

    if ((VAR_6 = FUNC_2(sizeof(*VAR_6))) == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return ((void*)0);
    }


    *VAR_6 = *VAR_3;

    if (VAR_3->num == 0) {

        VAR_6->data = ((void*)0);
        VAR_6->num_alloc = 0;
        return VAR_6;
    }

    VAR_6->num_alloc = VAR_3->num > VAR_2 ? VAR_3->num : VAR_2;
    VAR_6->data = FUNC_4(sizeof(*VAR_6->data) * VAR_6->num_alloc);
    if (VAR_6->data == ((void*)0)) {
        FUNC_1(VAR_6);
        return ((void*)0);
    }

    for (VAR_7 = 0; VAR_7 < VAR_6->num; ++VAR_7) {
        if (VAR_3->data[VAR_7] == ((void*)0))
            continue;
        if ((VAR_6->data[VAR_7] = VAR_4(VAR_3->data[VAR_7])) == ((void*)0)) {
            while (--VAR_7 >= 0)
                if (VAR_6->data[VAR_7] != ((void*)0))
                    VAR_5((void *)VAR_6->data[VAR_7]);
            FUNC_3(VAR_6);
            return ((void*)0);
        }
    }
    return VAR_6;
}
