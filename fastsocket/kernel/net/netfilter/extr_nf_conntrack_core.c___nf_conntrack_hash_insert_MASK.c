
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nf_conn {TYPE_2__* tuplehash; } ;
struct TYPE_3__ {int * hash; } ;
struct net {TYPE_1__ ct; } ;
struct TYPE_4__ {int hnnode; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,int *) ;
 struct net* FUNC_1 (struct nf_conn*) ;

__attribute__((used)) static void FUNC_2(struct nf_conn *VAR_2,
           unsigned int VAR_3,
           unsigned int VAR_4)
{
 struct net *VAR_5 = FUNC_1(VAR_2);

 FUNC_0(&VAR_2->tuplehash[VAR_0].hnnode,
      &VAR_5->ct.hash[VAR_3]);
 FUNC_0(&VAR_2->tuplehash[VAR_1].hnnode,
      &VAR_5->ct.hash[VAR_4]);
}
