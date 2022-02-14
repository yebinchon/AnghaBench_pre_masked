
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nf_conn {int dummy; } ;
struct TYPE_2__ {int nf_conntrack_cachep; int count; } ;
struct net {TYPE_1__ ct; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct nf_conn*) ;
 int FUNC_2 (struct nf_conn*) ;
 int FUNC_3 (struct nf_conn*) ;
 struct net* FUNC_4 (struct nf_conn*) ;

void FUNC_5(struct nf_conn *VAR_0)
{
 struct net *VAR_1 = FUNC_4(VAR_0);

 FUNC_2(VAR_0);
 FUNC_0(&VAR_1->ct.count);
 FUNC_3(VAR_0);
 FUNC_1(VAR_1->ct.nf_conntrack_cachep, VAR_0);
}
