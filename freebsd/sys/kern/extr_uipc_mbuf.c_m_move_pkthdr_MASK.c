
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int csum_flags; int * snd_tag; int tags; } ;
struct mbuf {int m_flags; TYPE_1__ m_pkthdr; int m_pktdat; int m_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mbuf*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mbuf*,int *) ;

void
FUNC_5(struct mbuf *VAR_5, struct mbuf *VAR_6)
{
 VAR_5->m_flags = (VAR_6->m_flags & VAR_1) |
     (VAR_5->m_flags & (VAR_2 | VAR_3));
 if ((VAR_5->m_flags & VAR_2) == 0)
  VAR_5->m_data = VAR_5->m_pktdat;
 VAR_5->m_pkthdr = VAR_6->m_pkthdr;
 FUNC_3(&VAR_6->m_pkthdr.tags);
 VAR_6->m_flags &= ~VAR_4;
 if (VAR_6->m_pkthdr.csum_flags & VAR_0) {
  VAR_6->m_pkthdr.csum_flags &= ~VAR_0;
  VAR_6->m_pkthdr.snd_tag = ((void*)0);
 }
}
