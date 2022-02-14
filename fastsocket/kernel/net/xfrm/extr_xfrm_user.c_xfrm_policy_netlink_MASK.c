
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xfrm_policy {int dummy; } ;
struct xfrm_dump_info {scalar_t__ nlmsg_flags; int nlmsg_seq; struct sk_buff* out_skb; struct sk_buff* in_skb; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct xfrm_policy*,int,int ,struct xfrm_dump_info*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int ,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_4(struct sk_buff *VAR_3,
       struct xfrm_policy *VAR_4,
       int VAR_5, u32 VAR_6)
{
 struct xfrm_dump_info VAR_7;
 struct sk_buff *VAR_8;

 VAR_8 = FUNC_3(VAR_2, VAR_1);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 VAR_7.in_skb = VAR_3;
 VAR_7.out_skb = VAR_8;
 VAR_7.nlmsg_seq = VAR_6;
 VAR_7.nlmsg_flags = 0;

 if (FUNC_1(VAR_4, VAR_5, 0, &VAR_7) < 0) {
  FUNC_2(VAR_8);
  return ((void*)0);
 }

 return VAR_8;
}
