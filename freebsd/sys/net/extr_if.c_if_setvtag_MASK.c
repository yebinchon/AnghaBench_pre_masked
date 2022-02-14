
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int ether_vtag; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;



void
FUNC_0(struct mbuf *VAR_0, uint16_t VAR_1)
{
 VAR_0->m_pkthdr.ether_vtag = VAR_1;
}
