
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_sf_list {int sf_oldin; int* sf_count; struct ip6_sf_list* sf_next; } ;
struct ifmcaddr6 {int* mca_sfcount; struct ip6_sf_list* mca_sources; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static void FUNC_0(struct ifmcaddr6 *VAR_2)
{
 struct ip6_sf_list *VAR_3;
 int VAR_4 = VAR_2->mca_sfcount[VAR_0];

 for (VAR_3=VAR_2->mca_sources; VAR_3; VAR_3=VAR_3->sf_next)
  if (VAR_2->mca_sfcount[VAR_0]) {
   VAR_3->sf_oldin = VAR_4 ==
    VAR_3->sf_count[VAR_0] &&
    !VAR_3->sf_count[VAR_1];
  } else
   VAR_3->sf_oldin = VAR_3->sf_count[VAR_1] != 0;
}
