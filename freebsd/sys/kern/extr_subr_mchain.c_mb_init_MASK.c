
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {scalar_t__ m_len; } ;
struct mbchain {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mbuf* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mbchain*,struct mbuf*) ;

int
FUNC_2(struct mbchain *VAR_2)
{
 struct mbuf *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_0);
 VAR_3->m_len = 0;
 FUNC_1(VAR_2, VAR_3);
 return (0);
}
