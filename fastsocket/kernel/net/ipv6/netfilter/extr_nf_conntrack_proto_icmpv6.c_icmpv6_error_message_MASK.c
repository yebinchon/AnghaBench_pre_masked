
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int nfctinfo; int * nfct; } ;
struct nf_conntrack_tuple_hash {int dummy; } ;
struct TYPE_3__ {int protonum; } ;
struct nf_conntrack_tuple {TYPE_1__ dst; } ;
struct nf_conntrack_l4proto {int dummy; } ;
struct net {int dummy; } ;
struct ipv6hdr {int dummy; } ;
struct icmp6hdr {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
struct TYPE_4__ {int ct_general; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct nf_conntrack_tuple_hash const*) ;
 int VAR_4 ;
 struct nf_conntrack_l4proto* FUNC_2 (int ,int ) ;
 struct nf_conntrack_tuple_hash* FUNC_3 (struct net*,struct nf_conntrack_tuple*) ;
 int VAR_5 ;
 int FUNC_4 (struct sk_buff*,scalar_t__,int ,struct nf_conntrack_tuple*) ;
 int FUNC_5 (struct nf_conntrack_tuple*,struct nf_conntrack_tuple*,int *,struct nf_conntrack_l4proto const*) ;
 TYPE_2__* FUNC_6 (struct nf_conntrack_tuple_hash const*) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static int
FUNC_9(struct net *VAR_6,
       struct sk_buff *VAR_7,
       unsigned int VAR_8,
       enum ip_conntrack_info *VAR_9,
       unsigned int VAR_10)
{
 struct nf_conntrack_tuple VAR_11, VAR_12;
 const struct nf_conntrack_tuple_hash *VAR_13;
 const struct nf_conntrack_l4proto *VAR_14;

 FUNC_0(VAR_7->nfct == ((void*)0));


 if (!FUNC_4(VAR_7,
          FUNC_8(VAR_7)
    + sizeof(struct ipv6hdr)
    + sizeof(struct icmp6hdr),
          VAR_4, &VAR_12)) {
  FUNC_7("icmpv6_error: Can't get tuple\n");
  return -VAR_3;
 }


 VAR_14 = FUNC_2(VAR_4, VAR_12.dst.protonum);



 if (!FUNC_5(&VAR_11, &VAR_12,
    &VAR_5, VAR_14)) {
  FUNC_7("icmpv6_error: Can't invert tuple\n");
  return -VAR_3;
 }

 *VAR_9 = VAR_2;

 VAR_13 = FUNC_3(VAR_6, &VAR_11);
 if (!VAR_13) {
  FUNC_7("icmpv6_error: no match\n");
  return -VAR_3;
 } else {
  if (FUNC_1(VAR_13) == VAR_0)
   *VAR_9 += VAR_1;
 }


 VAR_7->nfct = &FUNC_6(VAR_13)->ct_general;
 VAR_7->nfctinfo = *VAR_9;
 return VAR_3;
}
