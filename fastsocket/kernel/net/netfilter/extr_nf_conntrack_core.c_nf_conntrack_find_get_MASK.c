
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nf_conntrack_tuple_hash {int tuple; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct TYPE_2__ {int use; } ;
struct nf_conn {TYPE_1__ ct_general; } ;
struct net {int dummy; } ;


 struct nf_conntrack_tuple_hash* FUNC_0 (struct net*,struct nf_conntrack_tuple const*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct nf_conn*) ;
 int FUNC_3 (struct nf_conn*) ;
 int FUNC_4 (struct nf_conntrack_tuple const*,int *) ;
 struct nf_conn* FUNC_5 (struct nf_conntrack_tuple_hash*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int) ;

struct nf_conntrack_tuple_hash *
FUNC_9(struct net *VAR_0, const struct nf_conntrack_tuple *VAR_1)
{
 struct nf_conntrack_tuple_hash *VAR_2;
 struct nf_conn *VAR_3;

 FUNC_6();
begin:
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2) {
  VAR_3 = FUNC_5(VAR_2);
  if (FUNC_8(FUNC_2(VAR_3) ||
        !FUNC_1(&VAR_3->ct_general.use)))
   VAR_2 = ((void*)0);
  else {
   if (FUNC_8(!FUNC_4(VAR_1, &VAR_2->tuple))) {
    FUNC_3(VAR_3);
    goto begin;
   }
  }
 }
 FUNC_7();

 return VAR_2;
}
