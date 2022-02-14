
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {struct mbuf* m_nextpkt; } ;
struct ifnet {int dummy; } ;
struct fw_reass {struct mbuf* fr_frags; } ;
struct fw_com {int fc_frags; } ;


 struct fw_com* FUNC_0 (struct ifnet*) ;
 int VAR_0 ;
 struct fw_reass* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct fw_reass*,int ) ;
 int FUNC_4 (struct mbuf*) ;

void
FUNC_5(struct ifnet *VAR_2)
{
 struct fw_com *VAR_3 = FUNC_0(VAR_2);
 struct fw_reass *VAR_4;
 struct mbuf *VAR_5;




 while ((VAR_4 = FUNC_1(&VAR_3->fc_frags))) {
  FUNC_2(&VAR_3->fc_frags, VAR_1);
  while (VAR_4->fr_frags) {
   VAR_5 = VAR_4->fr_frags;
   VAR_4->fr_frags = VAR_5->m_nextpkt;
   FUNC_4(VAR_5);
  }
  FUNC_3(VAR_4, VAR_0);
 }
}
