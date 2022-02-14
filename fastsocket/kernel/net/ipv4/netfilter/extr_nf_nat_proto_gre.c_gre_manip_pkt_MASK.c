
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct TYPE_4__ {int key; } ;
struct TYPE_5__ {TYPE_1__ gre; } ;
struct TYPE_6__ {TYPE_2__ u; } ;
struct nf_conntrack_tuple {TYPE_3__ dst; } ;
struct iphdr {int ihl; } ;
struct gre_hdr_pptp {int call_id; } ;
struct gre_hdr {int version; } ;
typedef enum nf_nat_manip_type { ____Placeholder_nf_nat_manip_type } nf_nat_manip_type ;




 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static bool
FUNC_3(struct sk_buff *VAR_1, unsigned int VAR_2,
       const struct nf_conntrack_tuple *VAR_3,
       enum nf_nat_manip_type VAR_4)
{
 const struct gre_hdr *VAR_5;
 struct gre_hdr_pptp *VAR_6;
 const struct iphdr *VAR_7 = (struct iphdr *)(VAR_1->data + VAR_2);
 unsigned int VAR_8 = VAR_2 + VAR_7->ihl * 4;



 if (!FUNC_2(VAR_1, VAR_8 + sizeof(*VAR_6) - 8))
  return 0;

 VAR_5 = (void *)VAR_1->data + VAR_8;
 VAR_6 = (struct gre_hdr_pptp *)VAR_5;



 if (VAR_4 != VAR_0)
  return 1;
 switch (VAR_5->version) {
 case 129:


  break;
 case 128:
  FUNC_1("call_id -> 0x%04x\n", FUNC_0(VAR_3->dst.u.gre.key));
  VAR_6->call_id = VAR_3->dst.u.gre.key;
  break;
 default:
  FUNC_1("can't nat unknown GRE version\n");
  return 0;
 }
 return 1;
}
