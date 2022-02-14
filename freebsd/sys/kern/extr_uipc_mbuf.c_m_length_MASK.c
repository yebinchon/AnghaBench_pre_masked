
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct mbuf {struct mbuf* m_next; scalar_t__ m_len; } ;



u_int
FUNC_0(struct mbuf *VAR_0, struct mbuf **VAR_1)
{
 struct mbuf *VAR_2;
 u_int VAR_3;

 VAR_3 = 0;
 for (VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = VAR_2->m_next) {
  VAR_3 += VAR_2->m_len;
  if (VAR_2->m_next == ((void*)0))
   break;
 }
 if (VAR_1 != ((void*)0))
  *VAR_1 = VAR_2;
 return (VAR_3);
}
