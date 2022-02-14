
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdchain {struct mbuf* md_top; } ;
struct mbuf {struct mbuf* m_nextpkt; } ;


 int FUNC_0 (struct mdchain*,struct mbuf*) ;

void
FUNC_1(struct mdchain *VAR_0, struct mbuf *VAR_1)
{
 struct mbuf *VAR_2;

 if (VAR_0->md_top == ((void*)0)) {
  FUNC_0(VAR_0, VAR_1);
  return;
 }
 VAR_2 = VAR_0->md_top;
 while (VAR_2->m_nextpkt)
  VAR_2 = VAR_2->m_nextpkt;
 VAR_2->m_nextpkt = VAR_1;
 VAR_1->m_nextpkt = ((void*)0);
 return;
}
