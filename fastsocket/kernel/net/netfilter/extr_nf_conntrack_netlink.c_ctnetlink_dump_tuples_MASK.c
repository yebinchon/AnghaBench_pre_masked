
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {int protonum; } ;
struct TYPE_3__ {int l3num; } ;
struct nf_conntrack_tuple {TYPE_2__ dst; TYPE_1__ src; } ;
struct nf_conntrack_l4proto {int dummy; } ;
struct nf_conntrack_l3proto {int dummy; } ;


 struct nf_conntrack_l3proto* FUNC_0 (int ) ;
 struct nf_conntrack_l4proto* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sk_buff*,struct nf_conntrack_tuple const*,struct nf_conntrack_l3proto*) ;
 int FUNC_3 (struct sk_buff*,struct nf_conntrack_tuple const*,struct nf_conntrack_l4proto*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct sk_buff *VAR_0,
        const struct nf_conntrack_tuple *VAR_1)
{
 int VAR_2;
 struct nf_conntrack_l3proto *VAR_3;
 struct nf_conntrack_l4proto *VAR_4;

 VAR_3 = FUNC_0(VAR_1->src.l3num);
 VAR_2 = FUNC_2(VAR_0, VAR_1, VAR_3);

 if (FUNC_4(VAR_2 < 0))
  return VAR_2;

 VAR_4 = FUNC_1(VAR_1->src.l3num, VAR_1->dst.protonum);
 VAR_2 = FUNC_3(VAR_0, VAR_1, VAR_4);

 return VAR_2;
}
