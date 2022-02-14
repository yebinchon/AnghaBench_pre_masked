
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nf_conn {TYPE_1__* tuplehash; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int tuple; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct nf_conn*,unsigned int,unsigned int) ;
 unsigned int FUNC_1 (struct net*,int *) ;
 struct net* FUNC_2 (struct nf_conn*) ;

void FUNC_3(struct nf_conn *VAR_2)
{
 struct net *VAR_3 = FUNC_2(VAR_2);
 unsigned int VAR_4, VAR_5;

 VAR_4 = FUNC_1(VAR_3, &VAR_2->tuplehash[VAR_0].tuple);
 VAR_5 = FUNC_1(VAR_3, &VAR_2->tuplehash[VAR_1].tuple);

 FUNC_0(VAR_2, VAR_4, VAR_5);
}
