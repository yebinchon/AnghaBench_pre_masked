
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {struct mbuf* m_next; scalar_t__ m_len; } ;
struct mbchain {struct mbuf* mb_cur; int mb_mleft; int mb_count; } ;


 int FUNC_0 (struct mbuf*) ;

int
FUNC_1(struct mbchain *VAR_0, struct mbuf *VAR_1)
{
 VAR_0->mb_cur->m_next = VAR_1;
 while (VAR_1) {
  VAR_0->mb_count += VAR_1->m_len;
  if (VAR_1->m_next == ((void*)0))
   break;
  VAR_1 = VAR_1->m_next;
 }
 VAR_0->mb_mleft = FUNC_0(VAR_1);
 VAR_0->mb_cur = VAR_1;
 return (0);
}
