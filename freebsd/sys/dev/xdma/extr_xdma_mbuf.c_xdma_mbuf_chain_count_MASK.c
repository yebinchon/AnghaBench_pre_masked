
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct mbuf {struct mbuf* m_next; } ;



uint32_t
FUNC_0(struct mbuf *VAR_0)
{
 struct mbuf *VAR_1;
 uint32_t VAR_2;

 VAR_2 = 0;

 for (VAR_1 = VAR_0; VAR_1 != ((void*)0); VAR_1 = VAR_1->m_next)
  VAR_2++;

 return (VAR_2);
}
