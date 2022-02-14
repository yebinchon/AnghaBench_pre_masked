
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {int flowid; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;


 int FUNC_0 (struct mbuf*) ;
 int FUNC_1 (struct mbuf*) ;
 int FUNC_2 (int ,int ) ;

struct mbuf *
FUNC_3(struct mbuf *VAR_0, uintptr_t VAR_1, u_int *VAR_2)
{

 FUNC_0(VAR_0);
 *VAR_2 = FUNC_2(VAR_0->m_pkthdr.flowid, FUNC_1(VAR_0));
 return (VAR_0);
}
