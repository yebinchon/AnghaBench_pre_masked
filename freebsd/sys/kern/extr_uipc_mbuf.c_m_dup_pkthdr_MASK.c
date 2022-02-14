
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int csum_flags; int tags; int snd_tag; } ;
struct mbuf {int m_flags; TYPE_1__ m_pkthdr; int m_pktdat; int m_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mbuf*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mbuf*,struct mbuf const*,int) ;
 int FUNC_7 (struct mbuf*,int *) ;

int
FUNC_8(struct mbuf *VAR_5, const struct mbuf *VAR_6, int VAR_7)
{
 FUNC_1(VAR_7);




 VAR_5->m_flags = (VAR_6->m_flags & VAR_1) |
     (VAR_5->m_flags & (VAR_2 | VAR_3));
 if ((VAR_5->m_flags & VAR_2) == 0)
  VAR_5->m_data = VAR_5->m_pktdat;
 VAR_5->m_pkthdr = VAR_6->m_pkthdr;
 if (VAR_6->m_pkthdr.csum_flags & VAR_0)
  FUNC_5(VAR_6->m_pkthdr.snd_tag);
 FUNC_4(&VAR_5->m_pkthdr.tags);
 return (FUNC_6(VAR_5, VAR_6, VAR_7));
}
