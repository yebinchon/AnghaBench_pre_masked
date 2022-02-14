
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conntrack_l4proto {scalar_t__ l3proto; int l4proto; } ;
struct nf_conn {int dummy; } ;


 scalar_t__ FUNC_0 (struct nf_conn*) ;
 int FUNC_1 (struct nf_conn*) ;

__attribute__((used)) static int FUNC_2(struct nf_conn *VAR_0, void *VAR_1)
{
 struct nf_conntrack_l4proto *VAR_2;
 VAR_2 = (struct nf_conntrack_l4proto *)VAR_1;
 return FUNC_1(VAR_0) == VAR_2->l4proto &&
        FUNC_0(VAR_0) == VAR_2->l3proto;
}
