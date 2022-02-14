
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct TYPE_2__ {struct addr_tree_node* key; } ;
struct addr_tree_node {int net; TYPE_1__ node; int * parent; int addrlen; int addr; } ;
typedef int socklen_t ;
typedef int rbtree_type ;


 int FUNC_0 (int *,struct sockaddr_storage*,int ) ;
 int * FUNC_1 (int *,TYPE_1__*) ;

int FUNC_2(rbtree_type* VAR_0, struct addr_tree_node* VAR_1,
        struct sockaddr_storage* VAR_2, socklen_t VAR_3, int VAR_4)
{
 VAR_1->node.key = VAR_1;
 FUNC_0(&VAR_1->addr, VAR_2, VAR_3);
 VAR_1->addrlen = VAR_3;
 VAR_1->net = VAR_4;
 VAR_1->parent = ((void*)0);
 return FUNC_1(VAR_0, &VAR_1->node) != ((void*)0);
}
