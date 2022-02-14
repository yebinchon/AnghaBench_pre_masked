
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; int chain; int key; int cert; } ;
typedef TYPE_1__ SSL_EXCERT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int (*) (int )) ;

void FUNC_4(SSL_EXCERT *VAR_0)
{
    SSL_EXCERT *VAR_1;

    if (VAR_0 == ((void*)0))
        return;
    while (VAR_0) {
        FUNC_2(VAR_0->cert);
        FUNC_0(VAR_0->key);
        FUNC_3(VAR_0->chain, FUNC_2);
        VAR_1 = VAR_0;
        VAR_0 = VAR_0->next;
        FUNC_1(VAR_1);
    }
}
