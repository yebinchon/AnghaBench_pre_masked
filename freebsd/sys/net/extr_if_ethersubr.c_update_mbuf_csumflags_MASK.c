
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int csum_flags; int csum_data; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_0(struct mbuf *VAR_8, struct mbuf *VAR_9)
{
 int VAR_10 = 0;

 if (VAR_8->m_pkthdr.csum_flags & VAR_2)
  VAR_10 |= (VAR_3|VAR_4);
 if (VAR_8->m_pkthdr.csum_flags & VAR_1)
  VAR_10 |= (VAR_0|VAR_5);
 if (VAR_8->m_pkthdr.csum_flags & VAR_6)
  VAR_10 |= VAR_7;
 VAR_9->m_pkthdr.csum_flags |= VAR_10;
 if (VAR_10 & VAR_0)
  VAR_9->m_pkthdr.csum_data = 0xffff;
}
