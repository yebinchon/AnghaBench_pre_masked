
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; struct TYPE_5__* prev; } ;
typedef TYPE_1__ CIPHER_ORDER ;



__attribute__((used)) static void FUNC_0(CIPHER_ORDER **VAR_0, CIPHER_ORDER *VAR_1,
                           CIPHER_ORDER **VAR_2)
{
    if (VAR_1 == *VAR_2)
        return;
    if (VAR_1 == *VAR_0)
        *VAR_0 = VAR_1->next;
    if (VAR_1->prev != ((void*)0))
        VAR_1->prev->next = VAR_1->next;
    if (VAR_1->next != ((void*)0))
        VAR_1->next->prev = VAR_1->prev;
    (*VAR_2)->next = VAR_1;
    VAR_1->prev = *VAR_2;
    VAR_1->next = ((void*)0);
    *VAR_2 = VAR_1;
}
