
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ifnet {int if_snd; } ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,struct mbuf*) ;
 int FUNC_2 (struct ifnet*,int ,int) ;
 int FUNC_3 (struct mbuf*) ;

__attribute__((used)) static void
FUNC_4(struct ifnet *VAR_2)
{
 struct mbuf *VAR_3;
 for (;;) {




  FUNC_1(&VAR_2->if_snd, VAR_3);
  if (VAR_3 == ((void*)0))
   break;




  FUNC_0(VAR_2, VAR_3);




  FUNC_2(VAR_2, VAR_0, VAR_3->m_pkthdr.len);
  FUNC_2(VAR_2, VAR_1, 1);





  FUNC_3(VAR_3);
 }





}
