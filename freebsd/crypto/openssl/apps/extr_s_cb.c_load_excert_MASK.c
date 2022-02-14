
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int chain; int * chainfile; int * key; int certform; int * certfile; int keyform; int * keyfile; int * cert; struct TYPE_4__* next; } ;
typedef TYPE_1__ SSL_EXCERT ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,int *,int ,int *,char*) ;
 void* FUNC_3 (int *,int ,int ,int *,int *,char*) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(SSL_EXCERT **VAR_2)
{
    SSL_EXCERT *VAR_3 = *VAR_2;
    if (VAR_3 == ((void*)0))
        return 1;

    if (VAR_3->certfile == ((void*)0) && VAR_3->next == ((void*)0)) {
        FUNC_4(VAR_3);
        *VAR_2 = ((void*)0);
        return 1;
    }
    for (; VAR_3; VAR_3 = VAR_3->next) {
        if (VAR_3->certfile == ((void*)0)) {
            FUNC_0(VAR_1, "Missing filename\n");
            return 0;
        }
        VAR_3->cert = FUNC_1(VAR_3->certfile, VAR_3->certform,
                              "Server Certificate");
        if (VAR_3->cert == ((void*)0))
            return 0;
        if (VAR_3->keyfile != ((void*)0)) {
            VAR_3->key = FUNC_3(VAR_3->keyfile, VAR_3->keyform,
                                0, ((void*)0), ((void*)0), "Server Key");
        } else {
            VAR_3->key = FUNC_3(VAR_3->certfile, VAR_3->certform,
                                0, ((void*)0), ((void*)0), "Server Key");
        }
        if (VAR_3->key == ((void*)0))
            return 0;
        if (VAR_3->chainfile != ((void*)0)) {
            if (!FUNC_2(VAR_3->chainfile, &VAR_3->chain, VAR_0, ((void*)0),
                            "Server Chain"))
                return 0;
        }
    }
    return 1;
}
