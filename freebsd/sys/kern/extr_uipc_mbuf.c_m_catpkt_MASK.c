
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;


 int FUNC_0 (struct mbuf*) ;
 int FUNC_1 (struct mbuf*,struct mbuf*) ;
 int FUNC_2 (struct mbuf*,int,int ) ;

void
FUNC_3(struct mbuf *VAR_0, struct mbuf *VAR_1)
{

 FUNC_0(VAR_0);
 FUNC_0(VAR_1);

 VAR_0->m_pkthdr.len += VAR_1->m_pkthdr.len;
 FUNC_2(VAR_1, 1, 0);

 FUNC_1(VAR_0, VAR_1);
}
