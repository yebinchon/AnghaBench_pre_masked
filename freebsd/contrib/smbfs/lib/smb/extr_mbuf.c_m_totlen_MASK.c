
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {struct mbuf* m_next; scalar_t__ m_len; } ;



__attribute__((used)) static size_t
FUNC_0(struct mbuf *VAR_0)
{
 struct mbuf *VAR_1 = VAR_0;
 int VAR_2 = 0;

 while (VAR_1) {
  VAR_2 += VAR_1->m_len;
  VAR_1 = VAR_1->m_next;
 }
 return VAR_2;
}
