
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct udphdr {scalar_t__ check; int dest; int source; } ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_14__ {int port; } ;
struct TYPE_15__ {TYPE_6__ udp; } ;
struct TYPE_13__ {int ip; } ;
struct TYPE_16__ {TYPE_7__ u; TYPE_5__ u3; } ;
struct TYPE_10__ {int port; } ;
struct TYPE_11__ {TYPE_2__ udp; } ;
struct TYPE_9__ {int ip; } ;
struct TYPE_12__ {TYPE_3__ u; TYPE_1__ u3; } ;
struct nf_conntrack_tuple {TYPE_8__ dst; TYPE_4__ src; } ;
struct iphdr {int ihl; int daddr; int saddr; } ;
typedef enum nf_nat_manip_type { ____Placeholder_nf_nat_manip_type } nf_nat_manip_type ;
typedef int __be32 ;
typedef int __be16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,struct sk_buff*,int ,int ,int ) ;
 int FUNC_1 (scalar_t__*,struct sk_buff*,int ,int ,int) ;
 int FUNC_2 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static bool
FUNC_3(struct sk_buff *VAR_2,
    unsigned int VAR_3,
    const struct nf_conntrack_tuple *VAR_4,
    enum nf_nat_manip_type VAR_5)
{
 const struct iphdr *VAR_6 = (struct iphdr *)(VAR_2->data + VAR_3);
 struct udphdr *VAR_7;
 unsigned int VAR_8 = VAR_3 + VAR_6->ihl*4;
 __be32 VAR_9, VAR_10;
 __be16 *VAR_11, VAR_12;

 if (!FUNC_2(VAR_2, VAR_8 + sizeof(*VAR_7)))
  return 0;

 VAR_6 = (struct iphdr *)(VAR_2->data + VAR_3);
 VAR_7 = (struct udphdr *)(VAR_2->data + VAR_8);

 if (VAR_5 == VAR_1) {

  VAR_9 = VAR_6->saddr;
  VAR_10 = VAR_4->src.u3.ip;
  VAR_12 = VAR_4->src.u.udp.port;
  VAR_11 = &VAR_7->source;
 } else {

  VAR_9 = VAR_6->daddr;
  VAR_10 = VAR_4->dst.u3.ip;
  VAR_12 = VAR_4->dst.u.udp.port;
  VAR_11 = &VAR_7->dest;
 }

 FUNC_1(&VAR_7->check, VAR_2, VAR_9, VAR_10, 1);
 FUNC_0(&VAR_7->check, VAR_2, *VAR_11, VAR_12, 0);
 if (!VAR_7->check)
  VAR_7->check = VAR_0;

 *VAR_11 = VAR_12;
 return 1;
}
