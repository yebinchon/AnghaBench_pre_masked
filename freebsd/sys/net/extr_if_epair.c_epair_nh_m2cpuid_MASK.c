
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {int rcvif; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static struct mbuf *
FUNC_1(struct mbuf *VAR_0, uintptr_t VAR_1, u_int *VAR_2)
{

 *VAR_2 = FUNC_0(VAR_0->m_pkthdr.rcvif);

 return (VAR_0);
}
