
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sk_buff {TYPE_4__* sk; int mark; } ;
struct dst_entry {TYPE_6__* dev; scalar_t__ error; } ;
struct TYPE_10__ {struct dst_entry dst; } ;
struct rtable {TYPE_3__ u; } ;
struct net {int dummy; } ;
struct iphdr {int tos; int daddr; scalar_t__ saddr; } ;
struct TYPE_8__ {int tos; scalar_t__ saddr; int daddr; } ;
struct TYPE_9__ {TYPE_1__ ip4_u; } ;
struct flowi {int flags; int mark; int oif; TYPE_2__ nl_u; } ;
typedef int __u8 ;
typedef scalar_t__ __be32 ;
struct TYPE_13__ {int flags; } ;
struct TYPE_12__ {unsigned int hard_header_len; } ;
struct TYPE_11__ {int sk_bound_dev_if; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_7__* FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_1 (int ) ;
 struct net* FUNC_2 (TYPE_6__*) ;
 unsigned int FUNC_3 (struct net*,scalar_t__) ;
 int FUNC_4 (TYPE_4__*) ;
 struct iphdr* FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct net*,struct rtable**,struct flowi*) ;
 scalar_t__ FUNC_7 (struct sk_buff*,unsigned int,int ,int ) ;
 struct dst_entry* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,struct dst_entry*) ;
 unsigned int FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (struct sk_buff*,struct flowi*,int ) ;
 scalar_t__ FUNC_13 (struct net*,struct dst_entry**,struct flowi*,TYPE_4__*,int ) ;

int FUNC_14(struct sk_buff *VAR_7, unsigned VAR_8)
{
 struct net *VAR_9 = FUNC_2(FUNC_8(VAR_7)->dev);
 const struct iphdr *VAR_10 = FUNC_5(VAR_7);
 struct rtable *VAR_11;
 struct flowi VAR_12 = {};
 __be32 VAR_13 = VAR_10->saddr;
 __u8 VAR_14 = VAR_7->sk ? FUNC_4(VAR_7->sk) : 0;
 unsigned int VAR_15;

 if (VAR_8 == VAR_6)
  VAR_8 = FUNC_3(VAR_9, VAR_13);
 if (VAR_8 == VAR_4 || VAR_8 == VAR_5)
  VAR_14 |= VAR_1;
 else
  VAR_13 = 0;




 VAR_12.nl_u.ip4_u.daddr = VAR_10->daddr;
 VAR_12.nl_u.ip4_u.saddr = VAR_13;
 VAR_12.nl_u.ip4_u.tos = FUNC_1(VAR_10->tos);
 VAR_12.oif = VAR_7->sk ? VAR_7->sk->sk_bound_dev_if : 0;
 VAR_12.mark = VAR_7->mark;
 VAR_12.flags = VAR_14;
 if (FUNC_6(VAR_9, &VAR_11, &VAR_12) != 0)
  return -1;


 FUNC_9(VAR_7);
 FUNC_10(VAR_7, &VAR_11->u.dst);

 if (FUNC_8(VAR_7)->error)
  return -1;
 VAR_15 = FUNC_8(VAR_7)->dev->hard_header_len;
 if (FUNC_11(VAR_7) < VAR_15 &&
     FUNC_7(VAR_7, VAR_15 - FUNC_11(VAR_7), 0, VAR_2))
  return -1;

 return 0;
}
