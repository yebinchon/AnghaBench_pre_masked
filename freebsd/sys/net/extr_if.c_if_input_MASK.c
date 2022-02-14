
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct ifnet {int (* if_input ) (struct ifnet*,struct mbuf*) ;} ;
typedef scalar_t__ if_t ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;

int
FUNC_1(if_t VAR_0, struct mbuf* VAR_1)
{
 (*((struct ifnet *)VAR_0)->if_input)((struct ifnet *)VAR_0, VAR_1);
 return (0);

}
