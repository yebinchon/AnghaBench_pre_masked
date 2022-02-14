
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int m_len; struct mbuf* m_next; scalar_t__ m_data; } ;


 int FUNC_0 (scalar_t__,int*,int) ;
 int FUNC_1 () ;

__attribute__((used)) static void
FUNC_2(struct mbuf *VAR_0)
{
 int VAR_1, VAR_2, VAR_3;

 for (VAR_1 = 0; VAR_1 < VAR_0->m_len; VAR_1 += sizeof(int)) {
  VAR_2 = FUNC_1();
  if (VAR_1 + sizeof(int) < (size_t)VAR_0->m_len)
   VAR_3 = sizeof(int);
  else
   VAR_3 = VAR_0->m_len - VAR_1;
  FUNC_0(VAR_0->m_data + VAR_1, &VAR_2, VAR_3);
 }
 if (VAR_0->m_next)
  FUNC_2(VAR_0->m_next);
}
