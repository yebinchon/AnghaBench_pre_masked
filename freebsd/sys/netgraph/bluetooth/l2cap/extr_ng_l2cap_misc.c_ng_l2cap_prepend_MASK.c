
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int m_len; } ;


 int VAR_0 ;
 int FUNC_0 (struct mbuf*,int,int ) ;
 struct mbuf* FUNC_1 (struct mbuf*,int) ;

struct mbuf *
FUNC_2(struct mbuf *VAR_1, int VAR_2)
{
 FUNC_0(VAR_1, VAR_2, VAR_0);
 if (VAR_1 == ((void*)0) || (VAR_1->m_len < VAR_2 && (VAR_1 = FUNC_1(VAR_1, VAR_2)) == ((void*)0)))
  return (((void*)0));

 return (VAR_1);
}
