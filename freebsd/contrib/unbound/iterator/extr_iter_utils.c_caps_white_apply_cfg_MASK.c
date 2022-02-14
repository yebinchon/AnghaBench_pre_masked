
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct name_tree_node* key; } ;
struct name_tree_node {size_t len; struct name_tree_node* name; int dclass; int labs; TYPE_1__ node; } ;
typedef struct name_tree_node uint8_t ;
struct config_strlist {int str; struct config_strlist* next; } ;
struct config_file {struct config_strlist* caps_whitelist; } ;
typedef int rbtree_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct name_tree_node*) ;
 int FUNC_2 (struct name_tree_node*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct name_tree_node*,struct name_tree_node*,size_t,int ,int ) ;
 struct name_tree_node* FUNC_6 (int ,size_t*) ;

__attribute__((used)) static int
FUNC_7(rbtree_type* VAR_1, struct config_file* VAR_2)
{
 struct config_strlist* VAR_3;
 for(VAR_3=VAR_2->caps_whitelist; VAR_3; VAR_3=VAR_3->next) {
  struct name_tree_node* VAR_4;
  size_t VAR_5;
  uint8_t* VAR_6 = FUNC_6(VAR_3->str, &VAR_5);
  if(!VAR_6) {
   FUNC_3("could not parse %s", VAR_3->str);
   return 0;
  }
  VAR_4 = (struct name_tree_node*)FUNC_0(1, sizeof(*VAR_4));
  if(!VAR_4) {
   FUNC_3("out of memory");
   FUNC_2(VAR_6);
   return 0;
  }
  VAR_4->node.key = VAR_4;
  VAR_4->name = VAR_6;
  VAR_4->len = VAR_5;
  VAR_4->labs = FUNC_1(VAR_6);
  VAR_4->dclass = VAR_0;
  if(!FUNC_5(VAR_1, VAR_4, VAR_6, VAR_5, VAR_4->labs, VAR_4->dclass)) {

   FUNC_2(VAR_4->name);
   FUNC_2(VAR_4);
  }
 }
 FUNC_4(VAR_1);
 return 1;
}
