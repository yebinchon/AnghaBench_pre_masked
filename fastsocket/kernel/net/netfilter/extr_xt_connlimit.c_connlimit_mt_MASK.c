
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union nf_inet_addr {int ip; int ip6; } ;
struct xt_match_param {int* hotdrop; int family; struct xt_connlimit_info* matchinfo; } ;
struct xt_connlimit_info {int limit; int inverse; TYPE_2__* data; int mask; } ;
struct sk_buff {int dummy; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct nf_conn {TYPE_1__* tuplehash; } ;
struct ipv6hdr {int saddr; } ;
struct iphdr {int saddr; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {struct nf_conntrack_tuple tuple; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,struct nf_conntrack_tuple const*,union nf_inet_addr*,int *,int ) ;
 struct iphdr* FUNC_1 (struct sk_buff const*) ;
 struct ipv6hdr* FUNC_2 (struct sk_buff const*) ;
 int FUNC_3 (int *,int *,int) ;
 struct nf_conn* FUNC_4 (struct sk_buff const*,int*) ;
 int FUNC_5 (struct sk_buff const*,int ,int ,struct nf_conntrack_tuple*) ;
 int FUNC_6 (struct sk_buff const*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static bool
FUNC_9(const struct sk_buff *VAR_1, const struct xt_match_param *VAR_2)
{
 const struct xt_connlimit_info *VAR_3 = VAR_2->matchinfo;
 union nf_inet_addr VAR_4;
 struct nf_conntrack_tuple VAR_5;
 const struct nf_conntrack_tuple *VAR_6 = &VAR_5;
 enum ip_conntrack_info VAR_7;
 const struct nf_conn *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_4(VAR_1, &VAR_7);
 if (VAR_8 != ((void*)0))
  VAR_6 = &VAR_8->tuplehash[0].tuple;
 else if (!FUNC_5(VAR_1, FUNC_6(VAR_1),
        VAR_2->family, &VAR_5))
  goto hotdrop;

 if (VAR_2->family == VAR_0) {
  const struct ipv6hdr *VAR_10 = FUNC_2(VAR_1);
  FUNC_3(&VAR_4.ip6, &VAR_10->saddr, sizeof(VAR_10->saddr));
 } else {
  const struct iphdr *VAR_11 = FUNC_1(VAR_1);
  VAR_4.ip = VAR_11->saddr;
 }

 FUNC_7(&VAR_3->data->lock);
 VAR_9 = FUNC_0(VAR_3->data, VAR_6, &VAR_4,
                          &VAR_3->mask, VAR_2->family);
 FUNC_8(&VAR_3->data->lock);

 if (VAR_9 < 0) {

  *VAR_2->hotdrop = 1;
  return 0;
 }

 return (VAR_9 > VAR_3->limit) ^ VAR_3->inverse;

 hotdrop:
 *VAR_2->hotdrop = 1;
 return 0;
}
