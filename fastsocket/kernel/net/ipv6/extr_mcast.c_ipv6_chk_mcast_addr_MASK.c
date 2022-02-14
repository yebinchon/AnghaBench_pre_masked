
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ip6_sf_list {scalar_t__* sf_count; int sf_addr; struct ip6_sf_list* sf_next; } ;
struct inet6_dev {int lock; struct ifmcaddr6* mc_list; } ;
struct in6_addr {int dummy; } ;
struct ifmcaddr6 {scalar_t__* mca_sfcount; int mca_lock; struct ip6_sf_list* mca_sources; int mca_addr; struct ifmcaddr6* next; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct inet6_dev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct inet6_dev*) ;
 int FUNC_2 (struct in6_addr const*) ;
 scalar_t__ FUNC_3 (int *,struct in6_addr const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct net_device *VAR_2, const struct in6_addr *VAR_3,
   const struct in6_addr *VAR_4)
{
 struct inet6_dev *VAR_5;
 struct ifmcaddr6 *VAR_6;
 int VAR_7 = 0;

 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5) {
  FUNC_4(&VAR_5->lock);
  for (VAR_6 = VAR_5->mc_list; VAR_6; VAR_6=VAR_6->next) {
   if (FUNC_3(&VAR_6->mca_addr, VAR_3))
    break;
  }
  if (VAR_6) {
   if (VAR_4 && !FUNC_2(VAR_4)) {
    struct ip6_sf_list *VAR_8;

    FUNC_6(&VAR_6->mca_lock);
    for (VAR_8=VAR_6->mca_sources;VAR_8;VAR_8=VAR_8->sf_next) {
     if (FUNC_3(&VAR_8->sf_addr, VAR_4))
      break;
    }
    if (VAR_8)
     VAR_7 = VAR_8->sf_count[VAR_1] ||
      VAR_8->sf_count[VAR_0] !=
      VAR_6->mca_sfcount[VAR_0];
    else
     VAR_7 = VAR_6->mca_sfcount[VAR_0] !=0;
    FUNC_7(&VAR_6->mca_lock);
   } else
    VAR_7 = 1;
  }
  FUNC_5(&VAR_5->lock);
  FUNC_1(VAR_5);
 }
 return VAR_7;
}
