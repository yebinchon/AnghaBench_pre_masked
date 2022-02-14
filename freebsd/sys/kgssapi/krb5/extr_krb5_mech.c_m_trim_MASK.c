
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int m_len; int * m_next; } ;


 int FUNC_0 (int *) ;
 struct mbuf* FUNC_1 (struct mbuf*,int,int*) ;

__attribute__((used)) static void
FUNC_2(struct mbuf *VAR_0, int VAR_1)
{
 struct mbuf *VAR_2;
 int VAR_3;

 if (VAR_0 == ((void*)0))
  return;
 VAR_2 = FUNC_1(VAR_0, VAR_1, &VAR_3);
 if (VAR_2) {
  VAR_2->m_len = VAR_3;
  if (VAR_2->m_next) {
   FUNC_0(VAR_2->m_next);
   VAR_2->m_next = ((void*)0);
  }
 }
}
