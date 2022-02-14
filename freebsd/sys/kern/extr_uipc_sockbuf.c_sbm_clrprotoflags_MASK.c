
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int m_flags; struct mbuf* m_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_0(struct mbuf *VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = ~VAR_1;
 if (VAR_4 & VAR_2)
  VAR_5 |= VAR_0;
 while (VAR_3) {
  VAR_3->m_flags &= VAR_5;
  VAR_3 = VAR_3->m_next;
 }
}
