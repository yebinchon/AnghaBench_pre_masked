
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int m_len; struct mbuf* m_next; } ;


 int VAR_0 ;
 struct mbuf* FUNC_0 (struct mbuf*,int ) ;
 int FUNC_1 (struct mbuf*) ;

__attribute__((used)) static struct mbuf *
FUNC_2(struct mbuf *VAR_1)
{
 struct mbuf *VAR_2;
 int VAR_3;
 for (VAR_2 = VAR_1, VAR_3 = 0; VAR_2 != ((void*)0); VAR_2 = VAR_2->m_next) {
  if (VAR_2->m_len < 8) {
   VAR_3++;
   if (VAR_3 > 1)
    break;
   continue;
  }
  VAR_3 = 0;
 }

 if (VAR_3 > 1) {
  VAR_2 = FUNC_0(VAR_1, VAR_0);
  if (VAR_2 == ((void*)0))
   FUNC_1(VAR_1);
 } else
  VAR_2 = VAR_1;
 return (VAR_2);
}
