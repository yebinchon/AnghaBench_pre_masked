
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_sf_list {scalar_t__* sf_count; int sf_addr; struct ip6_sf_list* sf_next; } ;
struct in6_addr {int dummy; } ;
struct ifmcaddr6 {scalar_t__* mca_sfcount; int mca_flags; struct ip6_sf_list* mca_sources; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (struct in6_addr*,int *) ;

__attribute__((used)) static int FUNC_1(struct ifmcaddr6 *VAR_3, int VAR_4,
 struct in6_addr *VAR_5)
{
 struct ip6_sf_list *VAR_6;
 int VAR_7, VAR_8;

 VAR_8 = 0;
 for (VAR_6=VAR_3->mca_sources; VAR_6; VAR_6=VAR_6->sf_next) {
  if (VAR_8 == VAR_4)
   break;
  for (VAR_7=0; VAR_7<VAR_4; VAR_7++) {

   if (VAR_3->mca_sfcount[VAR_2] ||
       VAR_3->mca_sfcount[VAR_1] !=
       VAR_6->sf_count[VAR_1])
    continue;
   if (FUNC_0(&VAR_5[VAR_7], &VAR_6->sf_addr)) {
    VAR_8++;
    break;
   }
  }
 }
 VAR_3->mca_flags &= ~VAR_0;
 if (VAR_8 == VAR_4)
  return 0;
 return 1;
}
