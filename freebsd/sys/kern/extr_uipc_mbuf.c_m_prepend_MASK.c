
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int m_flags; int m_len; struct mbuf* m_next; int m_type; } ;


 int FUNC_0 (struct mbuf*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct mbuf*) ;
 int FUNC_2 (struct mbuf*) ;
 struct mbuf* FUNC_3 (int,int ) ;
 struct mbuf* FUNC_4 (int,int ) ;
 int FUNC_5 (struct mbuf*,struct mbuf*) ;

struct mbuf *
FUNC_6(struct mbuf *VAR_1, int VAR_2, int VAR_3)
{
 struct mbuf *VAR_4;

 if (VAR_1->m_flags & VAR_0)
  VAR_4 = FUNC_4(VAR_3, VAR_1->m_type);
 else
  VAR_4 = FUNC_3(VAR_3, VAR_1->m_type);
 if (VAR_4 == ((void*)0)) {
  FUNC_2(VAR_1);
  return (((void*)0));
 }
 if (VAR_1->m_flags & VAR_0)
  FUNC_5(VAR_4, VAR_1);
 VAR_4->m_next = VAR_1;
 VAR_1 = VAR_4;
 if (VAR_2 < FUNC_1(VAR_1))
  FUNC_0(VAR_1, VAR_2);
 VAR_1->m_len = VAR_2;
 return (VAR_1);
}
