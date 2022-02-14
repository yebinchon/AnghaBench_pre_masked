
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt6_info {int dummy; } ;
struct net_device {int dummy; } ;
struct inet6_dev {int lock; struct ifacaddr6* ac_list; scalar_t__ dead; } ;
struct in6_addr {int dummy; } ;
struct ifacaddr6 {int aca_users; int aca_addr; struct ifacaddr6* aca_next; int aca_lock; int aca_refcnt; int aca_tstamp; int aca_cstamp; struct rt6_info* aca_rt; struct inet6_dev* aca_idev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct rt6_info*) ;
 int FUNC_1 (struct rt6_info*) ;
 int FUNC_2 (struct ifacaddr6*) ;
 struct rt6_info* FUNC_3 (struct inet6_dev*,struct in6_addr*,int) ;
 int FUNC_4 (struct net_device*,int *) ;
 int FUNC_5 (int *,int) ;
 struct inet6_dev* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct inet6_dev*) ;
 int FUNC_8 (struct rt6_info*) ;
 int FUNC_9 (int *,struct in6_addr*) ;
 scalar_t__ FUNC_10 (int *,struct in6_addr*) ;
 int VAR_4 ;
 int FUNC_11 (struct ifacaddr6*) ;
 struct ifacaddr6* FUNC_12 (int,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

int FUNC_16(struct net_device *VAR_5, struct in6_addr *VAR_6)
{
 struct ifacaddr6 *VAR_7;
 struct inet6_dev *VAR_8;
 struct rt6_info *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_6(VAR_5);

 if (VAR_8 == ((void*)0))
  return -VAR_0;

 FUNC_14(&VAR_8->lock);
 if (VAR_8->dead) {
  VAR_10 = -VAR_1;
  goto out;
 }

 for (VAR_7 = VAR_8->ac_list; VAR_7; VAR_7 = VAR_7->aca_next) {
  if (FUNC_10(&VAR_7->aca_addr, VAR_6)) {
   VAR_7->aca_users++;
   VAR_10 = 0;
   goto out;
  }
 }





 VAR_7 = FUNC_12(sizeof(struct ifacaddr6), VAR_3);

 if (VAR_7 == ((void*)0)) {
  VAR_10 = -VAR_2;
  goto out;
 }

 VAR_9 = FUNC_3(VAR_8, VAR_6, 1);
 if (FUNC_0(VAR_9)) {
  FUNC_11(VAR_7);
  VAR_10 = FUNC_1(VAR_9);
  goto out;
 }

 FUNC_9(&VAR_7->aca_addr, VAR_6);
 VAR_7->aca_idev = VAR_8;
 VAR_7->aca_rt = VAR_9;
 VAR_7->aca_users = 1;

 VAR_7->aca_cstamp = VAR_7->aca_tstamp = VAR_4;
 FUNC_5(&VAR_7->aca_refcnt, 2);
 FUNC_13(&VAR_7->aca_lock);

 VAR_7->aca_next = VAR_8->ac_list;
 VAR_8->ac_list = VAR_7;
 FUNC_15(&VAR_8->lock);

 FUNC_8(VAR_9);

 FUNC_4(VAR_5, &VAR_7->aca_addr);

 FUNC_2(VAR_7);
 return 0;
out:
 FUNC_15(&VAR_8->lock);
 FUNC_7(VAR_8);
 return VAR_10;
}
