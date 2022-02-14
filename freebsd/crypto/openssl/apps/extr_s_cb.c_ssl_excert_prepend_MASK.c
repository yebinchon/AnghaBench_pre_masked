
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* keyform; void* certform; struct TYPE_5__* prev; struct TYPE_5__* next; } ;
typedef TYPE_1__ SSL_EXCERT ;


 void* VAR_0 ;
 TYPE_1__* FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_2(SSL_EXCERT **VAR_1)
{
    SSL_EXCERT *VAR_2 = FUNC_0(sizeof(*VAR_2), "prepend cert");

    FUNC_1(VAR_2, 0, sizeof(*VAR_2));

    VAR_2->next = *VAR_1;
    *VAR_1 = VAR_2;

    if (VAR_2->next) {
        VAR_2->certform = VAR_2->next->certform;
        VAR_2->keyform = VAR_2->next->keyform;
        VAR_2->next->prev = VAR_2;
    } else {
        VAR_2->certform = VAR_0;
        VAR_2->keyform = VAR_0;
    }
    return 1;

}
