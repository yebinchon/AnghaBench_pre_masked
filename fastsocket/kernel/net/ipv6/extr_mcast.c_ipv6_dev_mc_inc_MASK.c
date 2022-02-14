
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct inet6_dev {int lock; struct ifmcaddr6* mc_list; scalar_t__ dead; } ;
struct in6_addr {int dummy; } ;
struct ifmcaddr6 {int mca_users; size_t mca_sfmode; int* mca_sfcount; int mca_addr; struct ifmcaddr6* next; int mca_flags; int mca_lock; int mca_refcnt; int mca_tstamp; int mca_cstamp; struct inet6_dev* idev; int mca_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct ifmcaddr6*) ;
 int VAR_7 ;
 struct inet6_dev* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct inet6_dev*) ;
 int FUNC_5 (struct inet6_dev*,int *,size_t,int ,int *,int ) ;
 int FUNC_6 (int *,struct in6_addr const*) ;
 scalar_t__ FUNC_7 (int *,struct in6_addr const*) ;
 scalar_t__ FUNC_8 (int *) ;
 int VAR_8 ;
 struct ifmcaddr6* FUNC_9 (int,int ) ;
 int FUNC_10 (struct ifmcaddr6*) ;
 int FUNC_11 (struct inet6_dev*,int *) ;
 int FUNC_12 (int *,int ,unsigned long) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

int FUNC_16(struct net_device *VAR_9, const struct in6_addr *VAR_10)
{
 struct ifmcaddr6 *VAR_11;
 struct inet6_dev *VAR_12;

 VAR_12 = FUNC_3(VAR_9);

 if (VAR_12 == ((void*)0))
  return -VAR_0;

 FUNC_14(&VAR_12->lock);
 if (VAR_12->dead) {
  FUNC_15(&VAR_12->lock);
  FUNC_4(VAR_12);
  return -VAR_1;
 }

 for (VAR_11 = VAR_12->mc_list; VAR_11; VAR_11 = VAR_11->next) {
  if (FUNC_7(&VAR_11->mca_addr, VAR_10)) {
   VAR_11->mca_users++;
   FUNC_15(&VAR_12->lock);
   FUNC_5(VAR_12, &VAR_11->mca_addr, VAR_6, 0,
    ((void*)0), 0);
   FUNC_4(VAR_12);
   return 0;
  }
 }





 VAR_11 = FUNC_9(sizeof(struct ifmcaddr6), VAR_3);

 if (VAR_11 == ((void*)0)) {
  FUNC_15(&VAR_12->lock);
  FUNC_4(VAR_12);
  return -VAR_2;
 }

 FUNC_12(&VAR_11->mca_timer, VAR_7, (unsigned long)VAR_11);

 FUNC_6(&VAR_11->mca_addr, VAR_10);
 VAR_11->idev = VAR_12;
 VAR_11->mca_users = 1;

 VAR_11->mca_cstamp = VAR_11->mca_tstamp = VAR_8;
 FUNC_1(&VAR_11->mca_refcnt, 2);
 FUNC_13(&VAR_11->mca_lock);


 VAR_11->mca_sfmode = VAR_6;
 VAR_11->mca_sfcount[VAR_6] = 1;

 if (FUNC_8(&VAR_11->mca_addr) ||
     FUNC_0(&VAR_11->mca_addr) < VAR_4)
  VAR_11->mca_flags |= VAR_5;

 VAR_11->next = VAR_12->mc_list;
 VAR_12->mc_list = VAR_11;
 FUNC_15(&VAR_12->lock);

 FUNC_11(VAR_12, &VAR_11->mca_addr);
 FUNC_2(VAR_11);
 FUNC_10(VAR_11);
 return 0;
}
