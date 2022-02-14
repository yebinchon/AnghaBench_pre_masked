
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conntrack_expect {int rcu; int use; struct nf_conn* master; } ;
struct nf_conn {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 struct nf_conntrack_expect* FUNC_2 (int ,int ) ;
 int VAR_1 ;

struct nf_conntrack_expect *FUNC_3(struct nf_conn *VAR_2)
{
 struct nf_conntrack_expect *VAR_3;

 VAR_3 = FUNC_2(VAR_1, VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->master = VAR_2;
 FUNC_1(&VAR_3->use, 1);
 FUNC_0(&VAR_3->rcu);
 return VAR_3;
}
