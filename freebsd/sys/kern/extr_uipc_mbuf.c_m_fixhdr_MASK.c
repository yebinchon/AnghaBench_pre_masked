
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;


 int FUNC_0 (struct mbuf*,int *) ;

u_int
FUNC_1(struct mbuf *VAR_0)
{
 u_int VAR_1;

 VAR_1 = FUNC_0(VAR_0, ((void*)0));
 VAR_0->m_pkthdr.len = VAR_1;
 return (VAR_1);
}
