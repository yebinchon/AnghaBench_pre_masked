
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {struct mbuf* m_nextpkt; } ;
struct ifaltq {scalar_t__ ifq_len; scalar_t__ ifq_tail; struct mbuf* ifq_head; } ;
struct ifnet {struct ifaltq if_snd; } ;


 scalar_t__ FUNC_0 (struct ifaltq*) ;
 int FUNC_1 (struct ifaltq*) ;
 int FUNC_2 (struct ifaltq*) ;
 int FUNC_3 (struct ifaltq*) ;
 int FUNC_4 (struct mbuf*) ;

void
FUNC_5(struct ifnet *VAR_0)
{
 struct mbuf *VAR_1, *VAR_2;
 struct ifaltq *VAR_3;

 VAR_3 = &VAR_0->if_snd;
 FUNC_2(VAR_3);




 VAR_2 = VAR_3->ifq_head;
 while ((VAR_1 = VAR_2) != ((void*)0)) {
  VAR_2 = VAR_1->m_nextpkt;
  FUNC_4(VAR_1);
 }
 VAR_3->ifq_head = 0;
 VAR_3->ifq_tail = 0;
 VAR_3->ifq_len = 0;
 FUNC_3(VAR_3);
}
