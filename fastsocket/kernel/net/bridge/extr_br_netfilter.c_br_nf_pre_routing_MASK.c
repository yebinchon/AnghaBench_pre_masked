
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ protocol; int len; int dev; int nf_bridge; } ;
struct net_device {int dummy; } ;
struct iphdr {int ihl; int version; int tot_len; } ;
struct inet_skb_parm {int dummy; } ;
typedef int __u8 ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_5 (int ,int ,struct sk_buff*,int ,int *,int ) ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_6 (unsigned int,struct sk_buff*,struct net_device const*,struct net_device const*,int (*) (struct sk_buff*)) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *,int) ;
 struct iphdr* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct sk_buff*,int) ;
 int FUNC_17 (struct sk_buff*,int) ;
 int FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*) ;
 scalar_t__ FUNC_20 (int) ;

__attribute__((used)) static unsigned int FUNC_21(unsigned int VAR_10, struct sk_buff *VAR_11,
          const struct net_device *VAR_12,
          const struct net_device *VAR_13,
          int (*VAR_14)(struct sk_buff *))
{
 struct iphdr *VAR_15;
 __u32 VAR_16 = FUNC_12(VAR_11);

 if (FUNC_20(!FUNC_16(VAR_11, VAR_16)))
  goto out;

 if (VAR_11->protocol == FUNC_7(VAR_1) || FUNC_4(VAR_11) ||
     FUNC_2(VAR_11)) {




  FUNC_13(VAR_11);
  return FUNC_6(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);
 }





 if (VAR_11->protocol != FUNC_7(VAR_0) && !FUNC_3(VAR_11) &&
     !FUNC_1(VAR_11))
  return VAR_2;

 FUNC_13(VAR_11);

 if (!FUNC_16(VAR_11, sizeof(struct iphdr)))
  goto inhdr_error;

 VAR_15 = FUNC_9(VAR_11);
 if (VAR_15->ihl < 5 || VAR_15->version != 4)
  goto inhdr_error;

 if (!FUNC_16(VAR_11, 4 * VAR_15->ihl))
  goto inhdr_error;

 VAR_15 = FUNC_9(VAR_11);
 if (FUNC_8((__u8 *) VAR_15, VAR_15->ihl) != 0)
  goto inhdr_error;

 VAR_16 = FUNC_15(VAR_15->tot_len);
 if (VAR_11->len < VAR_16 || VAR_16 < 4 * VAR_15->ihl)
  goto inhdr_error;

 FUNC_17(VAR_11, VAR_16);


 FUNC_10(FUNC_0(VAR_11), 0, sizeof(struct inet_skb_parm));

 FUNC_14(VAR_11->nf_bridge);
 if (!FUNC_11(VAR_11))
  return VAR_3;
 if (!FUNC_18(VAR_11))
  return VAR_3;
 FUNC_19(VAR_11);

 FUNC_5(VAR_6, VAR_4, VAR_11, VAR_11->dev, ((void*)0),
  VAR_7);

 return VAR_5;

inhdr_error:

out:
 return VAR_3;
}
