
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ip6_sf_list {int* sf_count; int sf_crcount; struct ip6_sf_list* sf_next; int sf_addr; scalar_t__ sf_oldin; } ;
struct ifmcaddr6 {int* mca_sfcount; struct ip6_sf_list* mca_tomb; struct ip6_sf_list* mca_sources; TYPE_1__* idev; } ;
struct TYPE_2__ {int mc_qrv; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (struct ip6_sf_list*) ;
 scalar_t__ FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct ifmcaddr6 *VAR_3)
{
 struct ip6_sf_list *VAR_4, *VAR_5;
 int VAR_6 = VAR_3->mca_sfcount[VAR_1];
 int VAR_7 = VAR_3->idev->mc_qrv;
 int VAR_8, VAR_9;

 VAR_9 = 0;
 for (VAR_4=VAR_3->mca_sources; VAR_4; VAR_4=VAR_4->sf_next) {
  if (VAR_3->mca_sfcount[VAR_1]) {
   VAR_8 = VAR_6 == VAR_4->sf_count[VAR_1] &&
    !VAR_4->sf_count[VAR_2];
  } else
   VAR_8 = VAR_4->sf_count[VAR_2] != 0;
  if (VAR_8) {
   if (!VAR_4->sf_oldin) {
    struct ip6_sf_list *VAR_10 = ((void*)0);

    for (VAR_5=VAR_3->mca_tomb; VAR_5;
         VAR_5=VAR_5->sf_next) {
     if (FUNC_0(&VAR_5->sf_addr,
         &VAR_4->sf_addr))
      break;
     VAR_10 = VAR_5;
    }
    if (VAR_5) {
     if (VAR_10)
      VAR_10->sf_next = VAR_5->sf_next;
     else
      VAR_3->mca_tomb = VAR_5->sf_next;
     FUNC_1(VAR_5);
    }
    VAR_4->sf_crcount = VAR_7;
    VAR_9++;
   }
  } else if (VAR_4->sf_oldin) {
   VAR_4->sf_crcount = 0;




   for (VAR_5=VAR_3->mca_tomb; VAR_5; VAR_5=VAR_5->sf_next)
    if (FUNC_0(&VAR_5->sf_addr,
        &VAR_4->sf_addr))
     break;
   if (!VAR_5) {
    VAR_5 = (struct ip6_sf_list *)
     FUNC_2(sizeof(*VAR_5), VAR_0);
    if (!VAR_5)
     continue;
    *VAR_5 = *VAR_4;

    VAR_5->sf_next = VAR_3->mca_tomb;
    VAR_3->mca_tomb = VAR_5;
   }
   VAR_5->sf_crcount = VAR_7;
   VAR_9++;
  }
 }
 return VAR_9;
}
