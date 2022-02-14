
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int m_flags; struct mbuf* m_next; } ;


 int VAR_0 ;
 struct mbuf* FUNC_0 (struct mbuf*) ;
 int FUNC_1 (struct mbuf*) ;
 struct mbuf* FUNC_2 (struct mbuf*) ;

struct mbuf *
FUNC_3(struct mbuf *VAR_1)
{
 struct mbuf *VAR_2, *VAR_3, *VAR_4 = ((void*)0);

 VAR_4 = ((void*)0);
 for (VAR_2 = VAR_1; VAR_2 != ((void*)0); VAR_2 = VAR_3) {

  VAR_3 = VAR_2->m_next;
  if (VAR_2->m_flags & VAR_0) {
   if (VAR_4 != ((void*)0)) {






    VAR_4->m_next = ((void*)0);
   }
   VAR_2 = FUNC_0(VAR_2);
   if (VAR_2 == ((void*)0)) {
    FUNC_1(VAR_1);
    FUNC_1(VAR_3);
    return (((void*)0));
   }
   if (VAR_4 == ((void*)0)) {
    VAR_1 = VAR_2;
   } else {
    VAR_4->m_next = VAR_2;
   }





   VAR_4 = FUNC_2(VAR_2);
  } else {
   if (VAR_4 != ((void*)0)) {
    VAR_4->m_next = VAR_2;
   }
   VAR_4 = VAR_2;
  }
 }
 return (VAR_1);
}
