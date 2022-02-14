
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct mbuf {int m_flags; scalar_t__ m_len; struct mbuf* m_next; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mbuf*) ;
 int FUNC_1 (struct mbuf*) ;
 int FUNC_2 (scalar_t__,scalar_t__,int ) ;
 int VAR_1 ;
 struct mbuf* FUNC_3 (struct mbuf*) ;
 scalar_t__ FUNC_4 (struct mbuf*,int ) ;

void
FUNC_5(struct mbuf *VAR_2, struct mbuf *VAR_3)
{
 while (VAR_2->m_next)
  VAR_2 = VAR_2->m_next;
 while (VAR_3) {
  if (!FUNC_1(VAR_2) ||
      (VAR_3->m_flags & VAR_0) != 0 ||
      FUNC_0(VAR_2) < VAR_3->m_len) {

   VAR_2->m_next = VAR_3;
   return;
  }

  FUNC_2(FUNC_4(VAR_3, VAR_1), FUNC_4(VAR_2, VAR_1) + VAR_2->m_len,
      (u_int)VAR_3->m_len);
  VAR_2->m_len += VAR_3->m_len;
  VAR_3 = FUNC_3(VAR_3);
 }
}
