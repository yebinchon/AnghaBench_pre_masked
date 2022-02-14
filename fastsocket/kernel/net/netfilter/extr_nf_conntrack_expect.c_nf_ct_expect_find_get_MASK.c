
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conntrack_tuple {int dummy; } ;
struct nf_conntrack_expect {int use; } ;
struct net {int dummy; } ;


 struct nf_conntrack_expect* FUNC_0 (struct net*,struct nf_conntrack_tuple const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

struct nf_conntrack_expect *
FUNC_4(struct net *VAR_0, const struct nf_conntrack_tuple *VAR_1)
{
 struct nf_conntrack_expect *VAR_2;

 FUNC_2();
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 && !FUNC_1(&VAR_2->use))
  VAR_2 = ((void*)0);
 FUNC_3();

 return VAR_2;
}
