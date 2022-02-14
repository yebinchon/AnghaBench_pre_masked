
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct TYPE_2__ {struct addr_tree_node* key; } ;
struct addr_tree_node {scalar_t__ addrlen; int net; struct addr_tree_node* parent; int addr; TYPE_1__ node; } ;
typedef scalar_t__ socklen_t ;
typedef int rbtree_type ;
typedef int rbnode_type ;


 int FUNC_0 (int *,int,struct sockaddr_storage*,int,scalar_t__) ;
 scalar_t__ FUNC_1 (struct sockaddr_storage*,scalar_t__) ;
 int FUNC_2 (int *,struct sockaddr_storage*,scalar_t__) ;
 scalar_t__ FUNC_3 (int *,struct addr_tree_node*,int **) ;

struct addr_tree_node* FUNC_4(rbtree_type* VAR_0,
        struct sockaddr_storage* VAR_1, socklen_t VAR_2)
{
        rbnode_type* VAR_3 = ((void*)0);
        struct addr_tree_node* VAR_4;
        struct addr_tree_node VAR_5;
        VAR_5.node.key = &VAR_5;
        FUNC_2(&VAR_5.addr, VAR_1, VAR_2);
        VAR_5.addrlen = VAR_2;
        VAR_5.net = (FUNC_1(VAR_1, VAR_2)?128:32);
        if(FUNC_3(VAR_0, &VAR_5, &VAR_3)) {

                return (struct addr_tree_node*)VAR_3;
        } else {

                int VAR_6;
                VAR_4 = (struct addr_tree_node*)VAR_3;
                if(!VAR_4 || VAR_4->addrlen != VAR_2)
                        return 0;

                VAR_6 = FUNC_0(&VAR_4->addr, VAR_4->net, VAR_1,
                        VAR_5.net, VAR_2);
                while(VAR_4) {
                        if(VAR_4->net <= VAR_6)
                                break;
                        VAR_4 = VAR_4->parent;
                }
        }
        return VAR_4;
}
