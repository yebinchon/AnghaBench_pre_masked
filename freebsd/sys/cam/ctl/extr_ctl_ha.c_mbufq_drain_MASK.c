
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbufq {int * tail; struct mbuf* head; } ;
struct mbuf {struct mbuf* m_nextpkt; } ;


 int FUNC_0 (struct mbuf*) ;

__attribute__((used)) static void
FUNC_1(struct mbufq *VAR_0)
{
 struct mbuf *VAR_1;

 while ((VAR_1 = VAR_0->head) != ((void*)0)) {
  VAR_0->head = VAR_1->m_nextpkt;
  FUNC_0(VAR_1);
 }
 VAR_0->tail = ((void*)0);
}
