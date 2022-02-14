
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {struct mbuf* m_nextpkt; } ;
struct ifqueue {scalar_t__ ifq_len; scalar_t__ ifq_tail; struct mbuf* ifq_head; } ;


 int FUNC_0 (struct mbuf*) ;

__attribute__((used)) static void
FUNC_1(struct ifqueue *VAR_0)
{
 struct mbuf *VAR_1, *VAR_2;

 VAR_2 = VAR_0->ifq_head;
 while ((VAR_1 = VAR_2)) {
  VAR_2 = VAR_1->m_nextpkt;
  FUNC_0 (VAR_1);
 }
 VAR_0->ifq_head = 0;
 VAR_0->ifq_tail = 0;
 VAR_0->ifq_len = 0;
}
