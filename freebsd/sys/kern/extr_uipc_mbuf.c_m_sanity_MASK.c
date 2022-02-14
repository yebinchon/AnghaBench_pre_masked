
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; int tags; } ;
struct mbuf {scalar_t__ m_len; int m_flags; TYPE_1__ m_pkthdr; struct mbuf* m_nextpkt; scalar_t__ m_data; struct mbuf* m_next; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct mbuf*) ;
 scalar_t__ FUNC_2 (struct mbuf*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (struct mbuf*) ;
 int FUNC_6 (struct mbuf*,int *) ;

int
FUNC_7(struct mbuf *VAR_1, int VAR_2)
{
 struct mbuf *VAR_3;
 caddr_t VAR_4, VAR_5;
 int VAR_6 = 0;







 for (VAR_3 = VAR_1; VAR_3 != ((void*)0); VAR_3 = VAR_3->m_next) {





  VAR_4 = FUNC_2(VAR_3);
  VAR_5 = VAR_4 + FUNC_1(VAR_3);
  if ((caddr_t)VAR_3->m_data < VAR_4)
   printf("mbuf %p: " "m_data outside mbuf data range left", VAR_3);
  if ((caddr_t)VAR_3->m_data > VAR_5)
   FUNC_0("mbuf %p: " "m_data outside mbuf data range right", VAR_3);
  if ((caddr_t)VAR_3->m_data + VAR_3->m_len > VAR_5)
   FUNC_0("mbuf %p: " "m_data + m_len exeeds mbuf space", VAR_3);


  if (VAR_3 != VAR_1 && VAR_3->m_nextpkt != ((void*)0)) {
   if (VAR_2) {
    FUNC_5(VAR_3->m_nextpkt);
    VAR_3->m_nextpkt = (struct mbuf *)0xDEADC0DE;
   } else
    FUNC_0("mbuf %p: " "m->m_nextpkt on in-chain mbuf", VAR_3);
  }


  if (VAR_1->m_flags & VAR_0)
   VAR_6 += VAR_3->m_len;


  if (VAR_3 != VAR_1 && VAR_3->m_flags & VAR_0 &&
      !FUNC_3(&VAR_3->m_pkthdr.tags)) {
   if (VAR_2) {
    FUNC_6(VAR_3, ((void*)0));

   } else
    FUNC_0("mbuf %p: " "m_tags on in-chain mbuf", VAR_3);
  }


  if (VAR_3 != VAR_1 && VAR_3->m_flags & VAR_0) {
   if (VAR_2) {
    FUNC_4(&VAR_3->m_pkthdr, sizeof(VAR_3->m_pkthdr));
    VAR_3->m_flags &= ~VAR_0;

   } else
    FUNC_0("mbuf %p: " "M_PKTHDR on in-chain mbuf", VAR_3);
  }
 }
 VAR_3 = VAR_1;
 if (VAR_6 && VAR_6 != VAR_3->m_pkthdr.len) {
  if (VAR_2)
   VAR_3->m_pkthdr.len = 0;
  else
   FUNC_0("mbuf %p: " "m_pkthdr.len != mbuf chain length", VAR_3);
 }
 return 1;


}
