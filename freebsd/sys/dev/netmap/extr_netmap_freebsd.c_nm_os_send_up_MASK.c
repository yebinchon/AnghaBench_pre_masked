
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct ifnet {int dummy; } ;
struct TYPE_2__ {int (* if_input ) (struct ifnet*,struct mbuf*) ;} ;


 TYPE_1__* FUNC_0 (struct ifnet*) ;
 int FUNC_1 (struct ifnet*,struct mbuf*) ;

void *
FUNC_2(struct ifnet *VAR_0, struct mbuf *VAR_1, struct mbuf *VAR_2)
{
 FUNC_0(VAR_0)->if_input(VAR_0, VAR_1);
 return ((void*)0);
}
