
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
struct sk_buff {scalar_t__ ip_summed; scalar_t__ data; } ;
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
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__*,struct sk_buff*,int ,int ,int ) ;
 int FUNC_1 (scalar_t__*,struct sk_buff*,int ,int ,int) ;
 int FUNC_2 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static bool
FUNC_3(struct sk_buff *VAR_3,
       unsigned int VAR_4,
       const struct nf_conntrack_tuple *VAR_5,
       enum nf_nat_manip_type VAR_6)
{
 const struct iphdr *VAR_7 = (struct iphdr *)(VAR_3->data + VAR_4);
 struct udphdr *VAR_8;
 unsigned int VAR_9 = VAR_4 + VAR_7->ihl*4;
 __be32 VAR_10, VAR_11;
 __be16 *VAR_12, VAR_13;

 if (!FUNC_2(VAR_3, VAR_9 + sizeof(*VAR_8)))
  return 0;

 VAR_7 = (struct iphdr *)(VAR_3->data + VAR_4);
 VAR_8 = (struct udphdr *)(VAR_3->data + VAR_9);

 if (VAR_6 == VAR_2) {

  VAR_10 = VAR_7->saddr;
  VAR_11 = VAR_5->src.u3.ip;
  VAR_13 = VAR_5->src.u.udp.port;
  VAR_12 = &VAR_8->source;
 } else {

  VAR_10 = VAR_7->daddr;
  VAR_11 = VAR_5->dst.u3.ip;
  VAR_13 = VAR_5->dst.u.udp.port;
  VAR_12 = &VAR_8->dest;
 }
 if (VAR_8->check || VAR_3->ip_summed == VAR_0) {
  FUNC_1(&VAR_8->check, VAR_3, VAR_10, VAR_11, 1);
  FUNC_0(&VAR_8->check, VAR_3, *VAR_12, VAR_13,
      0);
  if (!VAR_8->check)
   VAR_8->check = VAR_1;
 }
 *VAR_12 = VAR_13;
 return 1;
}
