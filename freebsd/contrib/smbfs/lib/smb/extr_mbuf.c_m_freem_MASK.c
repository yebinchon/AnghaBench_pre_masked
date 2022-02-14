
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {struct mbuf* m_next; } ;


 int FUNC_0 (struct mbuf*) ;

__attribute__((used)) static void
FUNC_1(struct mbuf *VAR_0)
{
 struct mbuf *VAR_1;

 while (VAR_0) {
  VAR_1 = VAR_0->m_next;
  FUNC_0(VAR_0);
  VAR_0 = VAR_1;
 }
}
