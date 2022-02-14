
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct sockbuf {struct mbuf* sb_sndptr; int sb_sndptroff; } ;
struct mbuf {scalar_t__ m_len; struct mbuf* m_next; } ;



void
FUNC_0(struct sockbuf *VAR_0, struct mbuf *VAR_1, uint32_t VAR_2)
{




 struct mbuf *VAR_3;

 if (VAR_1 != VAR_0->sb_sndptr) {

  return;
 }
 VAR_3 = VAR_1;
 while (VAR_3 && (VAR_2 > 0)) {
  if (VAR_2 >= VAR_3->m_len) {
   VAR_2 -= VAR_3->m_len;
   if (VAR_3->m_next) {
    VAR_0->sb_sndptroff += VAR_3->m_len;
    VAR_0->sb_sndptr = VAR_3->m_next;
   }
   VAR_3 = VAR_3->m_next;
  } else {
   VAR_2 = 0;
  }
 }
}
