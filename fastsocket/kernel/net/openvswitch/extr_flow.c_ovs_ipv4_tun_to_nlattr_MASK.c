
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ovs_key_ipv4_tunnel {int tun_flags; scalar_t__ ipv4_ttl; scalar_t__ ipv4_tos; scalar_t__ ipv4_dst; scalar_t__ ipv4_src; int tun_id; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_1 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,scalar_t__) ;

int FUNC_6(struct sk_buff *VAR_12,
      const struct ovs_key_ipv4_tunnel *VAR_13)
{
 struct nlattr *VAR_14;

 VAR_14 = FUNC_1(VAR_12, VAR_1);
 if (!VAR_14)
  return -VAR_0;

 if (VAR_13->tun_flags & VAR_11 &&
     FUNC_3(VAR_12, VAR_4, VAR_13->tun_id))
  return -VAR_0;
 if (VAR_13->ipv4_src &&
     FUNC_2(VAR_12, VAR_6, VAR_13->ipv4_src))
  return -VAR_0;
 if (FUNC_2(VAR_12, VAR_5, VAR_13->ipv4_dst))
  return -VAR_0;
 if (VAR_13->ipv4_tos &&
     FUNC_5(VAR_12, VAR_7, VAR_13->ipv4_tos))
  return -VAR_0;
 if (FUNC_5(VAR_12, VAR_8, VAR_13->ipv4_ttl))
  return -VAR_0;
 if ((VAR_13->tun_flags & VAR_10) &&
  FUNC_4(VAR_12, VAR_3))
  return -VAR_0;
 if ((VAR_13->tun_flags & VAR_9) &&
  FUNC_4(VAR_12, VAR_2))
  return -VAR_0;

 FUNC_0(VAR_12, VAR_14);
 return 0;
}
