
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_2__ {struct name_tree_node* key; } ;
struct name_tree_node {size_t len; int labs; int dclass; int * name; TYPE_1__ node; } ;
typedef int rbtree_type ;


 scalar_t__ FUNC_0 (int *,struct name_tree_node*) ;

struct name_tree_node* FUNC_1(rbtree_type* VAR_0, uint8_t* VAR_1,
        size_t VAR_2, int VAR_3, uint16_t VAR_4)
{
 struct name_tree_node VAR_5;
 VAR_5.node.key = &VAR_5;
 VAR_5.name = VAR_1;
 VAR_5.len = VAR_2;
 VAR_5.labs = VAR_3;
 VAR_5.dclass = VAR_4;
 return (struct name_tree_node*)FUNC_0(VAR_0, &VAR_5);
}
