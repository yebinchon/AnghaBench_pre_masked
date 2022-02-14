
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l_sockaddr {int dummy; } ;
struct l_ifreq {int ifr_hwaddr; } ;
struct ifnet {int dummy; } ;
typedef int lsa ;


 int VAR_0 ;
 int FUNC_0 (struct l_sockaddr*,int *,int) ;
 scalar_t__ FUNC_1 (struct ifnet*,struct l_sockaddr*) ;

__attribute__((used)) static int
FUNC_2(struct ifnet *VAR_1, struct l_ifreq *VAR_2)
{
 struct l_sockaddr VAR_3;

 if (FUNC_1(VAR_1, &VAR_3) != 0)
  return (VAR_0);

 return (FUNC_0(&VAR_3, &VAR_2->ifr_hwaddr, sizeof(VAR_3)));
}
