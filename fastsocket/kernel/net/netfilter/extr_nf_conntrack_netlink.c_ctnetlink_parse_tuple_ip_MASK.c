
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct TYPE_2__ {int l3num; } ;
struct nf_conntrack_tuple {TYPE_1__ src; } ;
struct nf_conntrack_l3proto {int (* nlattr_to_tuple ) (struct nlattr**,struct nf_conntrack_tuple*) ;int nla_policy; } ;


 int VAR_0 ;
 struct nf_conntrack_l3proto* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int (*) (struct nlattr**,struct nf_conntrack_tuple*)) ;
 int FUNC_2 (struct nlattr**,int ,struct nlattr*,int *) ;
 int FUNC_3 (struct nlattr*,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct nlattr**,struct nf_conntrack_tuple*) ;

__attribute__((used)) static inline int
FUNC_7(struct nlattr *VAR_1, struct nf_conntrack_tuple *VAR_2)
{
 struct nlattr *VAR_3[VAR_0+1];
 struct nf_conntrack_l3proto *VAR_4;
 int VAR_5 = 0;

 FUNC_2(VAR_3, VAR_0, VAR_1, ((void*)0));

 FUNC_4();
 VAR_4 = FUNC_0(VAR_2->src.l3num);

 if (FUNC_1(VAR_4->nlattr_to_tuple)) {
  VAR_5 = FUNC_3(VAR_1, VAR_0,
       VAR_4->nla_policy);
  if (VAR_5 == 0)
   VAR_5 = VAR_4->nlattr_to_tuple(VAR_3, VAR_2);
 }

 FUNC_5();

 return VAR_5;
}
