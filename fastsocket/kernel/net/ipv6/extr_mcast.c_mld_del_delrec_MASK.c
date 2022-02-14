
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_sf_list {int idev; struct ip6_sf_list* sf_next; struct ip6_sf_list* mca_tomb; struct ip6_sf_list* next; int mca_addr; } ;
struct inet6_dev {int mc_lock; struct ip6_sf_list* mc_tomb; } ;
struct in6_addr {int dummy; } ;
struct ifmcaddr6 {int idev; struct ifmcaddr6* sf_next; struct ifmcaddr6* mca_tomb; struct ifmcaddr6* next; int mca_addr; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,struct in6_addr*) ;
 int FUNC_2 (struct ip6_sf_list*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct inet6_dev *VAR_0, struct in6_addr *VAR_1)
{
 struct ifmcaddr6 *VAR_2, *VAR_3;
 struct ip6_sf_list *VAR_4, *VAR_5;

 FUNC_3(&VAR_0->mc_lock);
 VAR_3 = ((void*)0);
 for (VAR_2=VAR_0->mc_tomb; VAR_2; VAR_2=VAR_2->next) {
  if (FUNC_1(&VAR_2->mca_addr, VAR_1))
   break;
  VAR_3 = VAR_2;
 }
 if (VAR_2) {
  if (VAR_3)
   VAR_3->next = VAR_2->next;
  else
   VAR_0->mc_tomb = VAR_2->next;
 }
 FUNC_4(&VAR_0->mc_lock);
 if (VAR_2) {
  for (VAR_4=VAR_2->mca_tomb; VAR_4; VAR_4=VAR_5) {
   VAR_5 = VAR_4->sf_next;
   FUNC_2(VAR_4);
  }
  FUNC_0(VAR_2->idev);
  FUNC_2(VAR_2);
 }
}
