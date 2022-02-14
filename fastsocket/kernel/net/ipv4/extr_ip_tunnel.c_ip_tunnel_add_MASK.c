
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_tunnel_net {int dummy; } ;
struct ip_tunnel {int hash_node; int parms; } ;
struct hlist_head {int dummy; } ;


 int FUNC_0 (int *,struct hlist_head*) ;
 struct hlist_head* FUNC_1 (struct ip_tunnel_net*,int *) ;

__attribute__((used)) static void FUNC_2(struct ip_tunnel_net *VAR_0, struct ip_tunnel *VAR_1)
{
 struct hlist_head *VAR_2 = FUNC_1(VAR_0, &VAR_1->parms);

 FUNC_0(&VAR_1->hash_node, VAR_2);
}
