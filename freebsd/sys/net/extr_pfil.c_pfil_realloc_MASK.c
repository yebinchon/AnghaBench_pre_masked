
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct ifnet {int dummy; } ;
struct TYPE_5__ {struct mbuf** m; int mem; } ;
typedef TYPE_1__ pfil_packet_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 struct mbuf* FUNC_2 (int ,int ,int ,struct ifnet*,int *) ;
 TYPE_1__ FUNC_3 (TYPE_1__) ;

int
FUNC_4(pfil_packet_t *VAR_2, int VAR_3, struct ifnet *VAR_4)
{
 struct mbuf *VAR_5;

 FUNC_0(VAR_3 & VAR_1);

 if ((VAR_5 = FUNC_2(VAR_2->mem, FUNC_1(VAR_3), 0, VAR_4, ((void*)0))) == ((void*)0))
  return (VAR_0);
 *VAR_2 = FUNC_3(*VAR_2);
 *VAR_2->m = VAR_5;

 return (0);
}
