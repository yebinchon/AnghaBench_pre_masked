
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ pkt_type; int dev; } ;
struct mld_msg {int mld_mca; } ;
struct inet6_dev {int lock; struct ifmcaddr6* mc_list; } ;
struct ifmcaddr6 {int mca_flags; int mca_lock; int mca_refcnt; int mca_timer; int mca_addr; struct ifmcaddr6* next; } ;
struct icmp6hdr {int dummy; } ;
struct TYPE_2__ {int saddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 struct inet6_dev* FUNC_3 (int ) ;
 int FUNC_4 (struct inet6_dev*) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

int FUNC_13(struct sk_buff *VAR_9)
{
 struct ifmcaddr6 *VAR_10;
 struct inet6_dev *VAR_11;
 struct mld_msg *VAR_12;
 int VAR_13;


 if (VAR_9->pkt_type == VAR_7)
  return 0;


 if (VAR_9->pkt_type != VAR_8 &&
     VAR_9->pkt_type != VAR_6)
  return 0;

 if (!FUNC_8(VAR_9, sizeof(*VAR_12) - sizeof(struct icmp6hdr)))
  return -VAR_0;

 VAR_12 = (struct mld_msg *)FUNC_2(VAR_9);


 VAR_13 = FUNC_6(&FUNC_7(VAR_9)->saddr);
 if (VAR_13 != VAR_2 &&
     !(VAR_13&VAR_3))
  return -VAR_0;

 VAR_11 = FUNC_3(VAR_9->dev);
 if (VAR_11 == ((void*)0))
  return -VAR_1;





 FUNC_9(&VAR_11->lock);
 for (VAR_10 = VAR_11->mc_list; VAR_10; VAR_10=VAR_10->next) {
  if (FUNC_5(&VAR_10->mca_addr, &VAR_12->mld_mca)) {
   FUNC_11(&VAR_10->mca_lock);
   if (FUNC_1(&VAR_10->mca_timer))
    FUNC_0(&VAR_10->mca_refcnt);
   VAR_10->mca_flags &= ~(VAR_4|VAR_5);
   FUNC_12(&VAR_10->mca_lock);
   break;
  }
 }
 FUNC_10(&VAR_11->lock);
 FUNC_4(VAR_11);
 return 0;
}
