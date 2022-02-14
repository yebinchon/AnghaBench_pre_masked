
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int protonum; } ;
struct TYPE_3__ {int l3num; } ;
struct nf_conntrack_tuple {TYPE_2__ dst; TYPE_1__ src; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct nf_conntrack_tuple*,struct nf_conntrack_tuple const*,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

bool FUNC_5(struct nf_conntrack_tuple *VAR_0,
     const struct nf_conntrack_tuple *VAR_1)
{
 bool VAR_2;

 FUNC_3();
 VAR_2 = FUNC_2(VAR_0, VAR_1,
     FUNC_0(VAR_1->src.l3num),
     FUNC_1(VAR_1->src.l3num,
            VAR_1->dst.protonum));
 FUNC_4();
 return VAR_2;
}
