
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbufq {struct mbuf* head; struct mbuf* tail; } ;
struct mbuf {struct mbuf* m_nextpkt; } ;



__attribute__((used)) static struct mbuf *
FUNC_0(struct mbufq *VAR_0)
{
 struct mbuf *VAR_1;

 VAR_1 = VAR_0->head;
 if (VAR_1) {
  if (VAR_0->tail == VAR_1)
   VAR_0->tail = ((void*)0);
  VAR_0->head = VAR_1->m_nextpkt;
  VAR_1->m_nextpkt = ((void*)0);
 }
 return (VAR_1);
}
