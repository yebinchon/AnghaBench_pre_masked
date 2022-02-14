
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int16_t ;
struct sk_buff {scalar_t__ data; } ;
struct nf_nat_protocol {int (* manip_pkt ) (struct sk_buff*,unsigned int,struct nf_conntrack_tuple const*,int) ;} ;
struct TYPE_7__ {int ip; } ;
struct TYPE_8__ {TYPE_3__ u3; } ;
struct TYPE_5__ {int ip; } ;
struct TYPE_6__ {TYPE_1__ u3; } ;
struct nf_conntrack_tuple {TYPE_4__ dst; TYPE_2__ src; } ;
struct iphdr {int daddr; int check; int saddr; } ;
typedef enum nf_nat_manip_type { ____Placeholder_nf_nat_manip_type } nf_nat_manip_type ;


 int VAR_0 ;
 struct nf_nat_protocol* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct sk_buff*,unsigned int) ;
 int FUNC_3 (struct sk_buff*,unsigned int,struct nf_conntrack_tuple const*,int) ;

__attribute__((used)) static bool
FUNC_4(u_int16_t VAR_1,
   struct sk_buff *VAR_2,
   unsigned int VAR_3,
   const struct nf_conntrack_tuple *VAR_4,
   enum nf_nat_manip_type VAR_5)
{
 struct iphdr *VAR_6;
 const struct nf_nat_protocol *VAR_7;

 if (!FUNC_2(VAR_2, VAR_3 + sizeof(*VAR_6)))
  return 0;

 VAR_6 = (void *)VAR_2->data + VAR_3;




 VAR_7 = FUNC_0(VAR_1);
 if (!VAR_7->manip_pkt(VAR_2, VAR_3, VAR_4, VAR_5))
  return 0;

 VAR_6 = (void *)VAR_2->data + VAR_3;

 if (VAR_5 == VAR_0) {
  FUNC_1(&VAR_6->check, VAR_6->saddr, VAR_4->src.u3.ip);
  VAR_6->saddr = VAR_4->src.u3.ip;
 } else {
  FUNC_1(&VAR_6->check, VAR_6->daddr, VAR_4->dst.u3.ip);
  VAR_6->daddr = VAR_4->dst.u3.ip;
 }
 return 1;
}
