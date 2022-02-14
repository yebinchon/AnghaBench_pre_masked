
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct TYPE_4__ {int protonum; } ;
struct TYPE_3__ {int l3num; } ;
struct nf_conntrack_tuple {TYPE_2__ dst; TYPE_1__ src; } ;
struct nf_conntrack_l4proto {int (* nlattr_to_tuple ) (struct nlattr**,struct nf_conntrack_tuple*) ;int nla_policy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 struct nf_conntrack_l4proto* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int (*) (struct nlattr**,struct nf_conntrack_tuple*)) ;
 int FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr**,int ,struct nlattr*,int ) ;
 int FUNC_4 (struct nlattr*,int ,int ) ;
 int VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct nlattr**,struct nf_conntrack_tuple*) ;

__attribute__((used)) static inline int
FUNC_8(struct nlattr *VAR_4,
       struct nf_conntrack_tuple *VAR_5)
{
 struct nlattr *VAR_6[VAR_0+1];
 struct nf_conntrack_l4proto *VAR_7;
 int VAR_8 = 0;

 VAR_8 = FUNC_3(VAR_6, VAR_0, VAR_4, VAR_3);
 if (VAR_8 < 0)
  return VAR_8;

 if (!VAR_6[VAR_1])
  return -VAR_2;
 VAR_5->dst.protonum = FUNC_2(VAR_6[VAR_1]);

 FUNC_5();
 VAR_7 = FUNC_0(VAR_5->src.l3num, VAR_5->dst.protonum);

 if (FUNC_1(VAR_7->nlattr_to_tuple)) {
  VAR_8 = FUNC_4(VAR_4, VAR_0,
       VAR_7->nla_policy);
  if (VAR_8 == 0)
   VAR_8 = VAR_7->nlattr_to_tuple(VAR_6, VAR_5);
 }

 FUNC_6();

 return VAR_8;
}
