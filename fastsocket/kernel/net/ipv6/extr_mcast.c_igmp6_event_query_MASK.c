
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dev; } ;
struct in6_addr {int dummy; } ;
struct mld_msg {scalar_t__ mld_maxdelay; struct in6_addr mld_mca; } ;
struct mld2_query {scalar_t__ mld2q_mrc; int mld2q_qrv; scalar_t__ mld2q_nsrcs; int mld2q_srcs; } ;
struct ipv6hdr {int dummy; } ;
struct inet6_dev {int mc_qrv; unsigned long mc_maxdelay; int lock; struct ifmcaddr6* mc_list; int mc_ifc_timer; scalar_t__ mc_ifc_count; scalar_t__ mc_v1_seen; } ;
struct ifmcaddr6 {int mca_flags; int mca_lock; int mca_addr; struct ifmcaddr6* next; } ;
struct icmp6hdr {int dummy; } ;
struct TYPE_2__ {scalar_t__ payload_len; struct in6_addr saddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct inet6_dev*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct ifmcaddr6*,unsigned long) ;
 struct inet6_dev* FUNC_5 (int ) ;
 int FUNC_6 (struct inet6_dev*) ;
 int FUNC_7 (struct in6_addr*,int *) ;
 int FUNC_8 (struct in6_addr*) ;
 TYPE_1__* FUNC_9 (struct sk_buff*) ;
 scalar_t__ VAR_7 ;
 int FUNC_10 (struct inet6_dev*) ;
 int FUNC_11 (struct inet6_dev*) ;
 scalar_t__ FUNC_12 (struct ifmcaddr6*,int,int ) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (struct sk_buff*,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (struct sk_buff*) ;
 scalar_t__ FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;

int FUNC_21(struct sk_buff *VAR_8)
{
 struct mld2_query *VAR_9 = ((void*)0);
 struct ifmcaddr6 *VAR_10;
 struct in6_addr *VAR_11;
 unsigned long VAR_12;
 struct inet6_dev *VAR_13;
 struct mld_msg *VAR_14;
 int VAR_15;
 int VAR_16 = 0;
 int VAR_17;

 if (!FUNC_14(VAR_8, sizeof(struct in6_addr)))
  return -VAR_0;


 VAR_17 = FUNC_13(FUNC_9(VAR_8)->payload_len) + sizeof(struct ipv6hdr);
 VAR_17 -= FUNC_17(VAR_8);


 if (!(FUNC_8(&FUNC_9(VAR_8)->saddr) & VAR_3))
  return -VAR_0;

 VAR_13 = FUNC_5(VAR_8->dev);

 if (VAR_13 == ((void*)0))
  return 0;

 VAR_14 = (struct mld_msg *)FUNC_3(VAR_8);
 VAR_11 = &VAR_14->mld_mca;
 VAR_15 = FUNC_8(VAR_11);

 if (VAR_15 != VAR_2 &&
     !(VAR_15&VAR_4)) {
  FUNC_6(VAR_13);
  return -VAR_0;
 }

 if (VAR_17 == 24) {
  int VAR_18;



  VAR_12 = (FUNC_13(VAR_14->mld_maxdelay)*VAR_1)/1000;

  VAR_18 = (VAR_13->mc_qrv + 1) * VAR_12;
  VAR_13->mc_v1_seen = VAR_7 + VAR_18;


  VAR_13->mc_ifc_count = 0;
  if (FUNC_2(&VAR_13->mc_ifc_timer))
   FUNC_1(VAR_13);

  FUNC_10(VAR_13);
 } else if (VAR_17 >= 28) {
  int VAR_19 = sizeof(struct mld2_query) -
      sizeof(struct icmp6hdr);
  if (!FUNC_14(VAR_8, VAR_19)) {
   FUNC_6(VAR_13);
   return -VAR_0;
  }
  VAR_9 = (struct mld2_query *)FUNC_18(VAR_8);
  VAR_12 = (FUNC_0(FUNC_13(VAR_9->mld2q_mrc))*VAR_1)/1000;
  if (!VAR_12)
   VAR_12 = 1;
  VAR_13->mc_maxdelay = VAR_12;
  if (VAR_9->mld2q_qrv)
   VAR_13->mc_qrv = VAR_9->mld2q_qrv;
  if (VAR_15 == VAR_2) {
   if (VAR_9->mld2q_nsrcs) {
    FUNC_6(VAR_13);
    return -VAR_0;
   }
   FUNC_11(VAR_13);
   FUNC_6(VAR_13);
   return 0;
  }

  if (VAR_9->mld2q_nsrcs != 0) {
   if (!FUNC_14(VAR_8, VAR_19 +
       FUNC_13(VAR_9->mld2q_nsrcs) * sizeof(struct in6_addr))) {
    FUNC_6(VAR_13);
    return -VAR_0;
   }
   VAR_9 = (struct mld2_query *)FUNC_18(VAR_8);
   VAR_16 = 1;
  }
 } else {
  FUNC_6(VAR_13);
  return -VAR_0;
 }

 FUNC_15(&VAR_13->lock);
 if (VAR_15 == VAR_2) {
  for (VAR_10 = VAR_13->mc_list; VAR_10; VAR_10=VAR_10->next) {
   FUNC_19(&VAR_10->mca_lock);
   FUNC_4(VAR_10, VAR_12);
   FUNC_20(&VAR_10->mca_lock);
  }
 } else {
  for (VAR_10 = VAR_13->mc_list; VAR_10; VAR_10=VAR_10->next) {
   if (!FUNC_7(VAR_11, &VAR_10->mca_addr))
    continue;
   FUNC_19(&VAR_10->mca_lock);
   if (VAR_10->mca_flags & VAR_6) {

    if (!VAR_16)
     VAR_10->mca_flags &= ~VAR_5;
   } else {

    if (VAR_16)
     VAR_10->mca_flags |= VAR_5;
    else
     VAR_10->mca_flags &= ~VAR_5;
   }
   if (!(VAR_10->mca_flags & VAR_5) ||
       FUNC_12(VAR_10, FUNC_13(VAR_9->mld2q_nsrcs), VAR_9->mld2q_srcs))
    FUNC_4(VAR_10, VAR_12);
   FUNC_20(&VAR_10->mca_lock);
   break;
  }
 }
 FUNC_16(&VAR_13->lock);
 FUNC_6(VAR_13);

 return 0;
}
