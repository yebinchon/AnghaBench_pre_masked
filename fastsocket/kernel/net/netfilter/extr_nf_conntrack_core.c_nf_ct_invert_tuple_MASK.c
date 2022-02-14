
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dir; int protonum; } ;
struct TYPE_4__ {int l3num; } ;
struct nf_conntrack_tuple {TYPE_1__ dst; TYPE_2__ src; } ;
struct nf_conntrack_l4proto {int (* invert_tuple ) (struct nf_conntrack_tuple*,struct nf_conntrack_tuple const*) ;} ;
struct nf_conntrack_l3proto {scalar_t__ (* invert_tuple ) (struct nf_conntrack_tuple*,struct nf_conntrack_tuple const*) ;} ;


 int FUNC_0 (struct nf_conntrack_tuple*,int ,int) ;
 scalar_t__ FUNC_1 (struct nf_conntrack_tuple*,struct nf_conntrack_tuple const*) ;
 int FUNC_2 (struct nf_conntrack_tuple*,struct nf_conntrack_tuple const*) ;

bool
FUNC_3(struct nf_conntrack_tuple *VAR_0,
     const struct nf_conntrack_tuple *VAR_1,
     const struct nf_conntrack_l3proto *VAR_2,
     const struct nf_conntrack_l4proto *VAR_3)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));

 VAR_0->src.l3num = VAR_1->src.l3num;
 if (VAR_2->invert_tuple(VAR_0, VAR_1) == 0)
  return 0;

 VAR_0->dst.dir = !VAR_1->dst.dir;

 VAR_0->dst.protonum = VAR_1->dst.protonum;
 return VAR_3->invert_tuple(VAR_0, VAR_1);
}
