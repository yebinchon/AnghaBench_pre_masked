
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct rtmsg {int rtm_dst_len; int rtm_src_len; scalar_t__ rtm_flags; int rtm_protocol; int rtm_scope; int rtm_type; int rtm_table; scalar_t__ rtm_tos; int rtm_family; } ;
struct nlmsghdr {int dummy; } ;
struct mr_table {int id; } ;
struct mfc_cache {int mfc_mcastgrp; int mfc_origin; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (struct mr_table*,struct sk_buff*,struct mfc_cache*,struct rtmsg*) ;
 int FUNC_3 (struct sk_buff*,struct nlmsghdr*) ;
 struct rtmsg* FUNC_4 (struct nlmsghdr*) ;
 int FUNC_5 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_6 (struct sk_buff*,int ,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_7(struct mr_table *VAR_10, struct sk_buff *VAR_11,
       u32 VAR_12, u32 VAR_13, struct mfc_cache *VAR_14)
{
 struct nlmsghdr *VAR_15;
 struct rtmsg *VAR_16;

 VAR_15 = FUNC_6(VAR_11, VAR_12, VAR_13, VAR_5, sizeof(*VAR_16), VAR_1);
 if (VAR_15 == ((void*)0))
  return -VAR_0;

 VAR_16 = FUNC_4(VAR_15);
 VAR_16->rtm_family = VAR_6;
 VAR_16->rtm_dst_len = 32;
 VAR_16->rtm_src_len = 32;
 VAR_16->rtm_tos = 0;
 VAR_16->rtm_table = VAR_10->id;
 FUNC_1(VAR_11, VAR_4, VAR_10->id);
 VAR_16->rtm_type = VAR_7;
 VAR_16->rtm_scope = VAR_9;
 VAR_16->rtm_protocol = VAR_8;
 VAR_16->rtm_flags = 0;

 FUNC_0(VAR_11, VAR_3, VAR_14->mfc_origin);
 FUNC_0(VAR_11, VAR_2, VAR_14->mfc_mcastgrp);

 if (FUNC_2(VAR_10, VAR_11, VAR_14, VAR_16) < 0)
  goto nla_put_failure;

 return FUNC_5(VAR_11, VAR_15);

nla_put_failure:
 FUNC_3(VAR_11, VAR_15);
 return -VAR_0;
}
