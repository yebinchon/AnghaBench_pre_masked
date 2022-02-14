
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int csum_flags; struct ifnet* rcvif; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ifnet {int dummy; } ;
typedef scalar_t__ if_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;

void
FUNC_1(struct mbuf *VAR_1, if_t VAR_2)
{

 FUNC_0((VAR_1->m_pkthdr.csum_flags & VAR_0) == 0);
 VAR_1->m_pkthdr.rcvif = (struct ifnet *)VAR_2;
}
