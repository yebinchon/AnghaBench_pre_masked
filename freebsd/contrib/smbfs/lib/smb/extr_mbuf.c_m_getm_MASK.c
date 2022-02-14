
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {struct mbuf* m_next; } ;


 scalar_t__ FUNC_0 (struct mbuf*) ;
 int FUNC_1 (size_t,struct mbuf**) ;

int
FUNC_2(struct mbuf *VAR_0, size_t VAR_1, struct mbuf **VAR_2)
{
 struct mbuf *VAR_3, *VAR_4;
 int VAR_5;

 for (VAR_4 = VAR_0; ; VAR_4 = VAR_4->m_next) {
  VAR_1 -= FUNC_0(VAR_4);
  if (VAR_4->m_next == ((void*)0))
   break;

 }
 if (VAR_1 > 0) {
  if ((VAR_5 = FUNC_1(VAR_1, &VAR_3)) != 0)
   return VAR_5;
  VAR_4->m_next = VAR_3;
 }
 *VAR_2 = VAR_0;
 return 0;
}
