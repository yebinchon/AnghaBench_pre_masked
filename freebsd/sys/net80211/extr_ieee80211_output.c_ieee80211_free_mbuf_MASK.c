
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {struct mbuf* m_nextpkt; } ;


 int FUNC_0 (struct mbuf*) ;

void
FUNC_1(struct mbuf *VAR_0)
{
 struct mbuf *VAR_1;

 if (VAR_0 == ((void*)0))
  return;

 do {
  VAR_1 = VAR_0->m_nextpkt;
  VAR_0->m_nextpkt = ((void*)0);
  FUNC_0(VAR_0);
 } while ((VAR_0 = VAR_1) != ((void*)0));
}
