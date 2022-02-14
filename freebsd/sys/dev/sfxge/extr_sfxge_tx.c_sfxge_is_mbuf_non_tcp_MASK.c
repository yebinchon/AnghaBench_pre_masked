
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int csum_flags; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static unsigned int
FUNC_0(struct mbuf *VAR_2)
{



 return (!(VAR_2->m_pkthdr.csum_flags & (VAR_1 | VAR_0)));
}
