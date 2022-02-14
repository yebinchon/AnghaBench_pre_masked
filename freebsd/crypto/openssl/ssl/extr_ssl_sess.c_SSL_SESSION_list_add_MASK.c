
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* session_cache_head; TYPE_1__* session_cache_tail; } ;
struct TYPE_7__ {struct TYPE_7__* prev; struct TYPE_7__* next; } ;
typedef TYPE_1__ SSL_SESSION ;
typedef TYPE_2__ SSL_CTX ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(SSL_CTX *VAR_0, SSL_SESSION *VAR_1)
{
    if ((VAR_1->next != ((void*)0)) && (VAR_1->prev != ((void*)0)))
        FUNC_0(VAR_0, VAR_1);

    if (VAR_0->session_cache_head == ((void*)0)) {
        VAR_0->session_cache_head = VAR_1;
        VAR_0->session_cache_tail = VAR_1;
        VAR_1->prev = (SSL_SESSION *)&(VAR_0->session_cache_head);
        VAR_1->next = (SSL_SESSION *)&(VAR_0->session_cache_tail);
    } else {
        VAR_1->next = VAR_0->session_cache_head;
        VAR_1->next->prev = VAR_1;
        VAR_1->prev = (SSL_SESSION *)&(VAR_0->session_cache_head);
        VAR_0->session_cache_head = VAR_1;
    }
}
