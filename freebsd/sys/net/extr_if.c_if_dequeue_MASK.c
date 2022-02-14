
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct ifnet {int if_snd; } ;
typedef scalar_t__ if_t ;


 int FUNC_0 (int *,struct mbuf*) ;

struct mbuf *
FUNC_1(if_t VAR_0)
{
 struct mbuf *VAR_1;
 FUNC_0(&((struct ifnet *)VAR_0)->if_snd, VAR_1);

 return (VAR_1);
}
