
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct TYPE_2__ {struct addr_tree_node* key; } ;
struct addr_tree_node {int net; int addrlen; int addr; TYPE_1__ node; } ;
typedef int socklen_t ;
typedef int rbtree_type ;
typedef int rbnode_type ;


 int FUNC_0 (int *,struct sockaddr_storage*,int ) ;
 int * FUNC_1 (int *,struct addr_tree_node*) ;

struct addr_tree_node* FUNC_2(rbtree_type* VAR_0,
        struct sockaddr_storage* VAR_1, socklen_t VAR_2, int VAR_3)
{
        rbnode_type* VAR_4 = ((void*)0);
        struct addr_tree_node VAR_5;
        VAR_5.node.key = &VAR_5;
        FUNC_0(&VAR_5.addr, VAR_1, VAR_2);
        VAR_5.addrlen = VAR_2;
        VAR_5.net = VAR_3;
 VAR_4 = FUNC_1(VAR_0, &VAR_5);
 return (struct addr_tree_node*)VAR_4;
}
