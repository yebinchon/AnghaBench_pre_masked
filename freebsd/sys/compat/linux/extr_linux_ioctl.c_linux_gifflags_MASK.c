
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct l_ifreq {int ifr_flags; } ;
struct ifnet {int dummy; } ;
typedef int l_short ;
typedef int flags ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct ifnet*,int *) ;

__attribute__((used)) static int
FUNC_2(struct thread *VAR_0, struct ifnet *VAR_1, struct l_ifreq *VAR_2)
{
 l_short VAR_3;

 FUNC_1(VAR_1, &VAR_3);

 return (FUNC_0(&VAR_3, &VAR_2->ifr_flags, sizeof(VAR_3)));
}
