
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pkthdr {int dummy; } ;
struct mbuf {int m_pkthdr; int m_flags; } ;


 int FUNC_0 (struct mbuf*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct mbuf*,int *) ;

void
FUNC_3(struct mbuf *VAR_1)
{

 FUNC_0(VAR_1);

 FUNC_2(VAR_1, ((void*)0));
 VAR_1->m_flags &= ~VAR_0;
 FUNC_1(&VAR_1->m_pkthdr, sizeof(struct pkthdr));
}
