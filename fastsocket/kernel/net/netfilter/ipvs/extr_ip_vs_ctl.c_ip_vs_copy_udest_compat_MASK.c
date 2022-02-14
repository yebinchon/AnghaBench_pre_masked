
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ip; } ;
struct ip_vs_dest_user_kern {int l_threshold; int u_threshold; int weight; int conn_flags; int port; TYPE_1__ addr; } ;
struct ip_vs_dest_user {int l_threshold; int u_threshold; int weight; int conn_flags; int port; int addr; } ;


 int FUNC_0 (struct ip_vs_dest_user_kern*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct ip_vs_dest_user_kern *VAR_0,
       struct ip_vs_dest_user *VAR_1)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));

 VAR_0->addr.ip = VAR_1->addr;
 VAR_0->port = VAR_1->port;
 VAR_0->conn_flags = VAR_1->conn_flags;
 VAR_0->weight = VAR_1->weight;
 VAR_0->u_threshold = VAR_1->u_threshold;
 VAR_0->l_threshold = VAR_1->l_threshold;
}
