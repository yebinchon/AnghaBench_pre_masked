
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockbuf {struct mbuf* sb_mbtail; } ;
struct mbuf {int m_flags; struct mbuf* m_next; } ;


 int VAR_0 ;
 int FUNC_0 (struct sockbuf*) ;
 int FUNC_1 (struct sockbuf*,struct mbuf*) ;
 int FUNC_2 (struct sockbuf*) ;
 int FUNC_3 (struct mbuf*) ;
 int FUNC_4 (struct sockbuf*,struct mbuf*) ;
 int FUNC_5 (struct sockbuf*,struct mbuf*,struct mbuf*) ;

void
FUNC_6(struct sockbuf *VAR_1, struct mbuf *VAR_2)
{
 struct mbuf *VAR_3;

 FUNC_2(VAR_1);

 if (VAR_2 == ((void*)0))
  return;
 FUNC_3(VAR_2);




 FUNC_4(VAR_1, VAR_2);
 FUNC_0(VAR_1);
 FUNC_1(VAR_1, VAR_2);
 VAR_1->sb_mbtail = VAR_2;
 VAR_3 = VAR_2->m_next;
 VAR_2->m_next = 0;
 if (VAR_3 && (VAR_2->m_flags & VAR_0)) {
  VAR_2->m_flags &= ~VAR_0;
  VAR_3->m_flags |= VAR_0;
 }

 FUNC_5(VAR_1, VAR_3, VAR_2);
}
