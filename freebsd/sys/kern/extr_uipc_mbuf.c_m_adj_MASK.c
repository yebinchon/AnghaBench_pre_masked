
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; } ;
struct mbuf {int m_len; int m_data; int m_flags; struct mbuf* m_next; TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int FUNC_0 (struct mbuf*) ;

void
FUNC_1(struct mbuf *VAR_1, int VAR_2)
{
 int VAR_3 = VAR_2;
 struct mbuf *VAR_4;
 int VAR_5;

 if ((VAR_4 = VAR_1) == ((void*)0))
  return;
 if (VAR_3 >= 0) {



  while (VAR_4 != ((void*)0) && VAR_3 > 0) {
   if (VAR_4->m_len <= VAR_3) {
    VAR_3 -= VAR_4->m_len;
    VAR_4->m_len = 0;
    VAR_4 = VAR_4->m_next;
   } else {
    VAR_4->m_len -= VAR_3;
    VAR_4->m_data += VAR_3;
    VAR_3 = 0;
   }
  }
  if (VAR_1->m_flags & VAR_0)
   VAR_1->m_pkthdr.len -= (VAR_2 - VAR_3);
 } else {







  VAR_3 = -VAR_3;
  VAR_5 = 0;
  for (;;) {
   VAR_5 += VAR_4->m_len;
   if (VAR_4->m_next == (struct mbuf *)0)
    break;
   VAR_4 = VAR_4->m_next;
  }
  if (VAR_4->m_len >= VAR_3) {
   VAR_4->m_len -= VAR_3;
   if (VAR_1->m_flags & VAR_0)
    VAR_1->m_pkthdr.len -= VAR_3;
   return;
  }
  VAR_5 -= VAR_3;
  if (VAR_5 < 0)
   VAR_5 = 0;





  VAR_4 = VAR_1;
  if (VAR_4->m_flags & VAR_0)
   VAR_4->m_pkthdr.len = VAR_5;
  for (; VAR_4; VAR_4 = VAR_4->m_next) {
   if (VAR_4->m_len >= VAR_5) {
    VAR_4->m_len = VAR_5;
    if (VAR_4->m_next != ((void*)0)) {
     FUNC_0(VAR_4->m_next);
     VAR_4->m_next = ((void*)0);
    }
    break;
   }
   VAR_5 -= VAR_4->m_len;
  }
 }
}
