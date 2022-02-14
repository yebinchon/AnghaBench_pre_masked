
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_2__ {struct name_tree_node* key; } ;
struct name_tree_node {size_t len; int labs; scalar_t__ dclass; struct name_tree_node* parent; int * name; TYPE_1__ node; } ;
typedef int rbtree_type ;
typedef int rbnode_type ;


 int FUNC_0 (int *,int,int *,int,int*) ;
 scalar_t__ FUNC_1 (int *,struct name_tree_node*,int **) ;

struct name_tree_node* FUNC_2(rbtree_type* VAR_0, uint8_t* VAR_1,
        size_t VAR_2, int VAR_3, uint16_t VAR_4)
{
        rbnode_type* VAR_5 = ((void*)0);
        struct name_tree_node *VAR_6;
        struct name_tree_node VAR_7;
        VAR_7.node.key = &VAR_7;
        VAR_7.name = VAR_1;
        VAR_7.len = VAR_2;
        VAR_7.labs = VAR_3;
        VAR_7.dclass = VAR_4;
        if(FUNC_1(VAR_0, &VAR_7, &VAR_5)) {

                VAR_6 = (struct name_tree_node*)VAR_5;
        } else {

                int VAR_8;
                VAR_6 = (struct name_tree_node*)VAR_5;
                if(!VAR_6 || VAR_6->dclass != VAR_4)
                        return ((void*)0);

                (void)FUNC_0(VAR_6->name, VAR_6->labs, VAR_7.name,
                        VAR_7.labs, &VAR_8);
                while(VAR_6) {
                        if(VAR_6->labs <= VAR_8)
                                break;
                        VAR_6 = VAR_6->parent;
                }
        }
 return VAR_6;
}
