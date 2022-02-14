
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_sf_list {int sf_gsresp; int sf_addr; struct ip6_sf_list* sf_next; } ;
struct in6_addr {int dummy; } ;
struct ifmcaddr6 {scalar_t__ mca_sfmode; int mca_flags; struct ip6_sf_list* mca_sources; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct in6_addr*,int *) ;
 int FUNC_1 (struct ifmcaddr6*,int,struct in6_addr*) ;

__attribute__((used)) static int FUNC_2(struct ifmcaddr6 *VAR_2, int VAR_3,
 struct in6_addr *VAR_4)
{
 struct ip6_sf_list *VAR_5;
 int VAR_6, VAR_7;

 if (VAR_2->mca_sfmode == VAR_1)
  return FUNC_1(VAR_2, VAR_3, VAR_4);



 VAR_7 = 0;
 for (VAR_5=VAR_2->mca_sources; VAR_5; VAR_5=VAR_5->sf_next) {
  if (VAR_7 == VAR_3)
   break;
  for (VAR_6=0; VAR_6<VAR_3; VAR_6++) {
   if (FUNC_0(&VAR_4[VAR_6], &VAR_5->sf_addr)) {
    VAR_5->sf_gsresp = 1;
    VAR_7++;
    break;
   }
  }
 }
 if (!VAR_7) {
  VAR_2->mca_flags &= ~VAR_0;
  return 0;
 }
 VAR_2->mca_flags |= VAR_0;
 return 1;
}
