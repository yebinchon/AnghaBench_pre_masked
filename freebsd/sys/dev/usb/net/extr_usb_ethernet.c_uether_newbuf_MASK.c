
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; int m_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mbuf*,int ) ;
 struct mbuf* FUNC_1 (int ,int ,int ) ;

struct mbuf *
FUNC_2(void)
{
 struct mbuf *VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_2, VAR_4);
 if (VAR_5 == ((void*)0))
  return (((void*)0));
 VAR_5->m_len = VAR_5->m_pkthdr.len = VAR_1;

 FUNC_0(VAR_5, VAR_0);
 return (VAR_5);
}
