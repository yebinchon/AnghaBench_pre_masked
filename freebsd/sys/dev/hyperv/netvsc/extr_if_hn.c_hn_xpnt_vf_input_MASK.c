
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rm_priotracker {int dummy; } ;
struct TYPE_2__ {int len; struct ifnet* rcvif; } ;
struct mbuf {struct mbuf* m_nextpkt; TYPE_1__ m_pkthdr; } ;
struct ifnet {size_t if_index; int if_capenable; int (* if_input ) (struct ifnet*,struct mbuf*) ;} ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ifnet** VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (struct ifnet*,int ,int) ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (int *,struct rm_priotracker*) ;
 int FUNC_4 (int *,struct rm_priotracker*) ;
 int FUNC_5 (struct ifnet*,struct mbuf*) ;

__attribute__((used)) static void
FUNC_6(struct ifnet *VAR_6, struct mbuf *VAR_7)
{
 struct rm_priotracker VAR_8;
 struct ifnet *VAR_9 = ((void*)0);
 struct mbuf *VAR_10;




 FUNC_3(&VAR_4, &VAR_8);
 if (VAR_6->if_index < VAR_5)
  VAR_9 = VAR_3[VAR_6->if_index];
 FUNC_4(&VAR_4, &VAR_8);

 if (VAR_9 != ((void*)0)) {
  for (VAR_10 = VAR_7; VAR_10 != ((void*)0); VAR_10 = VAR_10->m_nextpkt) {



   FUNC_0(VAR_6, VAR_10);




   if ((VAR_6->if_capenable & VAR_0) == 0) {
    FUNC_1(VAR_6, VAR_1,
        VAR_10->m_pkthdr.len);
   }
   VAR_10->m_pkthdr.rcvif = VAR_9;
   FUNC_1(VAR_9, VAR_2, 1);
  }



  VAR_9->if_input(VAR_9, VAR_7);
 } else {




  while (VAR_7 != ((void*)0)) {
   VAR_10 = VAR_7->m_nextpkt;
   VAR_7->m_nextpkt = ((void*)0);
   FUNC_2(VAR_7);
   VAR_7 = VAR_10;
  }
 }
}
