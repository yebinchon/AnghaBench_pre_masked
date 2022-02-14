
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct nf_conntrack_helper {unsigned int (* help ) (struct sk_buff*,int,struct nf_conn*,int) ;int name; } ;
struct nf_conn_help {int helper; } ;
struct nf_conn {int dummy; } ;
struct net_device {int dummy; } ;
struct ipv6hdr {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef int __be16 ;
struct TYPE_2__ {int nexthdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int,int *,int*) ;
 unsigned int FUNC_3 (struct sk_buff*) ;
 struct nf_conn* FUNC_4 (struct sk_buff*,int*) ;
 int FUNC_5 (int ,unsigned int,struct sk_buff*,struct net_device const*,struct net_device const*,int *,char*,int ) ;
 struct nf_conn_help* FUNC_6 (struct nf_conn*) ;
 int FUNC_7 (char*) ;
 struct nf_conntrack_helper* FUNC_8 (int ) ;
 unsigned int FUNC_9 (struct sk_buff*,int,struct nf_conn*,int) ;

__attribute__((used)) static unsigned int FUNC_10(unsigned int VAR_4,
     struct sk_buff *VAR_5,
     const struct net_device *VAR_6,
     const struct net_device *VAR_7,
     int (*VAR_8)(struct sk_buff *))
{
 struct nf_conn *VAR_9;
 const struct nf_conn_help *VAR_10;
 const struct nf_conntrack_helper *VAR_11;
 enum ip_conntrack_info VAR_12;
 unsigned int VAR_13;
 __be16 VAR_14;
 int VAR_15;
 u8 VAR_16;


 VAR_9 = FUNC_4(VAR_5, &VAR_12);
 if (!VAR_9 || VAR_12 == VAR_1 + VAR_0)
  goto out;

 VAR_10 = FUNC_6(VAR_9);
 if (!VAR_10)
  goto out;

 VAR_11 = FUNC_8(VAR_10->helper);
 if (!VAR_11)
  goto out;

 VAR_16 = FUNC_1(VAR_5)->nexthdr;
 VAR_15 = FUNC_2(VAR_5, sizeof(struct ipv6hdr),
        &VAR_16, &VAR_14);
 if (VAR_15 < 0 || (VAR_14 & FUNC_0(~0x7)) != 0) {
  FUNC_7("proto header not found\n");
  return VAR_3;
 }

 VAR_13 = VAR_11->help(VAR_5, VAR_15, VAR_9, VAR_12);
 if (VAR_13 != VAR_3) {
  FUNC_5(VAR_2, VAR_4, VAR_5, VAR_6, VAR_7, ((void*)0),
         "nf_ct_%s: dropping packet", VAR_11->name);
  return VAR_13;
 }
out:

 return FUNC_3(VAR_5);
}
