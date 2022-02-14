
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_2__ {struct name_tree_node* key; } ;
struct name_tree_node {size_t len; int labs; TYPE_1__ node; int * parent; int dclass; int * name; } ;
typedef int rbtree_type ;


 int * FUNC_0 (int *,TYPE_1__*) ;

int FUNC_1(rbtree_type* VAR_0, struct name_tree_node* VAR_1,
        uint8_t* VAR_2, size_t VAR_3, int VAR_4, uint16_t VAR_5)
{
 VAR_1->node.key = VAR_1;
 VAR_1->name = VAR_2;
 VAR_1->len = VAR_3;
 VAR_1->labs = VAR_4;
 VAR_1->dclass = VAR_5;
 VAR_1->parent = ((void*)0);
 return FUNC_0(VAR_0, &VAR_1->node) != ((void*)0);
}
