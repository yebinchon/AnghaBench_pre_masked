
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockbuf {struct mbuf* sb_lastrecord; struct mbuf* sb_mb; } ;
struct mbuf {int m_flags; struct mbuf* m_next; struct mbuf* m_nextpkt; } ;


 int VAR_0 ;
 int FUNC_0 (struct sockbuf*) ;
 int FUNC_1 (struct sockbuf*) ;
 int FUNC_2 (struct sockbuf*,struct mbuf*) ;
 int FUNC_3 (struct sockbuf*,struct mbuf*,struct mbuf*) ;
 int FUNC_4 (struct mbuf*,int) ;

void
FUNC_5(struct sockbuf *VAR_1, struct mbuf *VAR_2, int VAR_3)
{
 struct mbuf *VAR_4;

 FUNC_1(VAR_1);

 if (VAR_2 == ((void*)0))
  return;
 FUNC_4(VAR_2, VAR_3);
 FUNC_0(VAR_1);
 VAR_4 = VAR_1->sb_mb;
 if (VAR_4) {
  while (VAR_4->m_nextpkt)
   VAR_4 = VAR_4->m_nextpkt;
  do {
   if (VAR_4->m_flags & VAR_0) {
    FUNC_2(VAR_1, VAR_2);
    return;
   }
  } while (VAR_4->m_next && (VAR_4 = VAR_4->m_next));
 } else {





  if ((VAR_4 = VAR_1->sb_lastrecord) != ((void*)0)) {
   do {
    if (VAR_4->m_flags & VAR_0) {
     FUNC_2(VAR_1, VAR_2);
     return;
    }
   } while (VAR_4->m_next && (VAR_4 = VAR_4->m_next));
  } else {




   VAR_1->sb_lastrecord = VAR_2;
  }
 }
 FUNC_3(VAR_1, VAR_2, VAR_4);
 FUNC_0(VAR_1);
}
