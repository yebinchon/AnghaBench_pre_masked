
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conntrack_l3proto {scalar_t__ l3proto; } ;
struct nf_conn {int dummy; } ;


 scalar_t__ FUNC_0 (struct nf_conn*) ;

__attribute__((used)) static int FUNC_1(struct nf_conn *VAR_0, void *VAR_1)
{
 return FUNC_0(VAR_0) == ((struct nf_conntrack_l3proto *)VAR_1)->l3proto;
}
