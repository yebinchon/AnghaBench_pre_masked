
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {struct mbuf* m_nextpkt; } ;
struct mbq {int count; struct mbuf* tail; struct mbuf* head; } ;



__attribute__((used)) static inline void FUNC_0(struct mbq *VAR_0, struct mbuf *VAR_1)
{
    VAR_1->m_nextpkt = ((void*)0);
    if (VAR_0->tail) {
        VAR_0->tail->m_nextpkt = VAR_1;
        VAR_0->tail = VAR_1;
    } else {
        VAR_0->head = VAR_0->tail = VAR_1;
    }
    VAR_0->count++;
}
