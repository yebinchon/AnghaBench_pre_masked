
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_7__ {int all; } ;
struct TYPE_8__ {int u3; TYPE_2__ u; } ;
struct nf_conntrack_tuple_mask {TYPE_3__ src; } ;
struct TYPE_10__ {int protonum; } ;
struct TYPE_6__ {int all; } ;
struct TYPE_9__ {int l3num; int u3; TYPE_1__ u; } ;
struct nf_conntrack_tuple {TYPE_5__ dst; TYPE_4__ src; } ;
struct nf_conntrack_l4proto {int dummy; } ;
struct nf_conntrack_l3proto {int dummy; } ;
typedef int m ;


 int VAR_0 ;
 int VAR_1 ;
 struct nf_conntrack_l3proto* FUNC_0 (int ) ;
 struct nf_conntrack_l4proto* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sk_buff*,struct nf_conntrack_tuple*,struct nf_conntrack_l3proto*) ;
 int FUNC_3 (struct sk_buff*,struct nf_conntrack_tuple*,struct nf_conntrack_l4proto*) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (struct nf_conntrack_tuple*,int,int) ;
 int FUNC_6 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_7 (struct sk_buff*,int) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static inline int
FUNC_9(struct sk_buff *VAR_2,
   const struct nf_conntrack_tuple *VAR_3,
   const struct nf_conntrack_tuple_mask *VAR_4)
{
 int VAR_5;
 struct nf_conntrack_l3proto *VAR_6;
 struct nf_conntrack_l4proto *VAR_7;
 struct nf_conntrack_tuple VAR_8;
 struct nlattr *VAR_9;

 FUNC_5(&VAR_8, 0xFF, sizeof(VAR_8));
 VAR_8.src.u.all = VAR_4->src.u.all;
 FUNC_4(&VAR_8.src.u3, &VAR_4->src.u3, sizeof(VAR_8.src.u3));

 VAR_9 = FUNC_7(VAR_2, VAR_0 | VAR_1);
 if (!VAR_9)
  goto nla_put_failure;

 VAR_6 = FUNC_0(VAR_3->src.l3num);
 VAR_5 = FUNC_2(VAR_2, &VAR_8, VAR_6);

 if (FUNC_8(VAR_5 < 0))
  goto nla_put_failure;

 VAR_7 = FUNC_1(VAR_3->src.l3num, VAR_3->dst.protonum);
 VAR_5 = FUNC_3(VAR_2, &VAR_8, VAR_7);
 if (FUNC_8(VAR_5 < 0))
  goto nla_put_failure;

 FUNC_6(VAR_2, VAR_9);

 return 0;

nla_put_failure:
 return -1;
}
