
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


struct sk_buff {unsigned int len; scalar_t__ data; } ;
struct TYPE_14__ {int port; } ;
struct TYPE_15__ {TYPE_6__ dccp; } ;
struct TYPE_13__ {int ip; } ;
struct TYPE_16__ {TYPE_7__ u; TYPE_5__ u3; } ;
struct TYPE_10__ {int port; } ;
struct TYPE_11__ {TYPE_2__ dccp; } ;
struct TYPE_9__ {int ip; } ;
struct TYPE_12__ {TYPE_3__ u; TYPE_1__ u3; } ;
struct nf_conntrack_tuple {TYPE_8__ dst; TYPE_4__ src; } ;
struct iphdr {int ihl; int daddr; int saddr; } ;
struct dccp_hdr {int dccph_checksum; int dccph_dport; int dccph_sport; } ;
typedef enum nf_nat_manip_type { ____Placeholder_nf_nat_manip_type } nf_nat_manip_type ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int *,struct sk_buff*,int ,int ,int ) ;
 int FUNC_1 (int *,struct sk_buff*,int ,int ,int) ;
 int FUNC_2 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static bool
FUNC_3(struct sk_buff *VAR_1,
        unsigned int VAR_2,
        const struct nf_conntrack_tuple *VAR_3,
        enum nf_nat_manip_type VAR_4)
{
 const struct iphdr *VAR_5 = (const void *)(VAR_1->data + VAR_2);
 struct dccp_hdr *VAR_6;
 unsigned int VAR_7 = VAR_2 + VAR_5->ihl * 4;
 __be32 VAR_8, VAR_9;
 __be16 *VAR_10, VAR_11, VAR_12;
 int VAR_13 = 8;

 if (VAR_1->len >= VAR_7 + sizeof(struct dccp_hdr))
  VAR_13 = sizeof(struct dccp_hdr);

 if (!FUNC_2(VAR_1, VAR_7 + VAR_13))
  return 0;

 VAR_5 = (struct iphdr *)(VAR_1->data + VAR_2);
 VAR_6 = (struct dccp_hdr *)(VAR_1->data + VAR_7);

 if (VAR_4 == VAR_0) {
  VAR_8 = VAR_5->saddr;
  VAR_9 = VAR_3->src.u3.ip;
  VAR_12 = VAR_3->src.u.dccp.port;
  VAR_10 = &VAR_6->dccph_sport;
 } else {
  VAR_8 = VAR_5->daddr;
  VAR_9 = VAR_3->dst.u3.ip;
  VAR_12 = VAR_3->dst.u.dccp.port;
  VAR_10 = &VAR_6->dccph_dport;
 }

 VAR_11 = *VAR_10;
 *VAR_10 = VAR_12;

 if (VAR_13 < sizeof(*VAR_6))
  return 1;

 FUNC_1(&VAR_6->dccph_checksum, VAR_1, VAR_8, VAR_9, 1);
 FUNC_0(&VAR_6->dccph_checksum, VAR_1, VAR_11, VAR_12,
     0);
 return 1;
}
