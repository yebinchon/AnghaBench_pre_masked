
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xnb_pkt {int dummy; } ;
struct TYPE_3__ {int csum_flags; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct TYPE_4__ {int ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t const FUNC_0 (struct mbuf*) ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mbuf**) ;
 int FUNC_3 (struct xnb_pkt*,size_t const,int ) ;
 struct mbuf* FUNC_4 (struct xnb_pkt*,int ) ;
 TYPE_2__ VAR_6 ;

__attribute__((used)) static void
FUNC_5(char *VAR_7, size_t VAR_8)
{
 const size_t VAR_9 = VAR_4 - 1;
 struct xnb_pkt VAR_10;
 struct mbuf *VAR_11;

 FUNC_3(&VAR_10, VAR_9, VAR_5);

 VAR_11 = FUNC_4(&VAR_10, VAR_6.ifp);
 FUNC_1(FUNC_0(VAR_11) >= VAR_9);
 FUNC_1(VAR_11->m_pkthdr.csum_flags & VAR_1);
 FUNC_1(VAR_11->m_pkthdr.csum_flags & VAR_2);
 FUNC_1(VAR_11->m_pkthdr.csum_flags & VAR_0);
 FUNC_1(VAR_11->m_pkthdr.csum_flags & VAR_3);
 FUNC_2(&VAR_11);
}
