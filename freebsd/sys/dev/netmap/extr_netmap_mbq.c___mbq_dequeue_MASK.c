
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {struct mbuf* m_nextpkt; } ;
struct mbq {int count; int * tail; struct mbuf* head; } ;



__attribute__((used)) static inline struct mbuf *FUNC_0(struct mbq *VAR_0)
{
    struct mbuf *VAR_1 = ((void*)0);

    if (VAR_0->head) {
        VAR_1 = VAR_0->head;
        VAR_0->head = VAR_1->m_nextpkt;
        if (VAR_0->head == ((void*)0)) {
            VAR_0->tail = ((void*)0);
        }
        VAR_0->count--;
        VAR_1->m_nextpkt = ((void*)0);
    }

    return VAR_1;
}
