
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int numa_domain; } ;
struct mbuf {TYPE_1__ m_pkthdr; int m_pktdat; int m_data; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (struct mbuf*,int) ;

int
FUNC_2(struct mbuf *VAR_1, int VAR_2)
{



 VAR_1->m_data = VAR_1->m_pktdat;
 FUNC_0(&VAR_1->m_pkthdr, sizeof(VAR_1->m_pkthdr));
 return (0);
}
