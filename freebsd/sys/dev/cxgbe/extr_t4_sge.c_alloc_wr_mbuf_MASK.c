
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; } ;
struct mbuf {int m_len; TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 struct mbuf* FUNC_1 (int,int ,int ) ;
 struct mbuf* FUNC_2 (int,int ) ;
 int FUNC_3 (struct mbuf*,int ) ;
 int FUNC_4 (struct mbuf*,int ) ;

struct mbuf *
FUNC_5(int VAR_5, int VAR_6)
{
 struct mbuf *VAR_7;

 if (VAR_5 <= VAR_2)
  VAR_7 = FUNC_2(VAR_6, VAR_3);
 else if (VAR_5 <= VAR_0)
  VAR_7 = FUNC_1(VAR_6, VAR_3, VAR_4);
 else
  VAR_7 = ((void*)0);
 if (VAR_7 == ((void*)0))
  return (((void*)0));
 VAR_7->m_pkthdr.len = VAR_5;
 VAR_7->m_len = VAR_5;
 FUNC_3(VAR_7, VAR_1);
 FUNC_4(VAR_7, FUNC_0(VAR_5, 16));
 return (VAR_7);
}
