
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct name_tree_node {struct name_tree_node* name; int dclass; int labs; int len; } ;
struct dns64_env {int ignore_aaaa; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct name_tree_node*) ;
 int FUNC_2 (struct name_tree_node*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int *,struct name_tree_node*,struct name_tree_node*,int ,int ,int ) ;
 struct name_tree_node* FUNC_5 (char*,int *) ;

__attribute__((used)) static int
FUNC_6(struct dns64_env* VAR_1, char* VAR_2)
{

 struct name_tree_node* VAR_3;
 VAR_3 = (struct name_tree_node*)FUNC_0(1, sizeof(*VAR_3));
 if(!VAR_3) {
  FUNC_3("out of memory");
  return 0;
 }
 VAR_3->name = FUNC_5(VAR_2, &VAR_3->len);
 if(!VAR_3->name) {
  FUNC_2(VAR_3);
  FUNC_3("cannot parse dns64-ignore-aaaa: %s", VAR_2);
  return 0;
 }
 VAR_3->labs = FUNC_1(VAR_3->name);
 VAR_3->dclass = VAR_0;
 if(!FUNC_4(&VAR_1->ignore_aaaa, VAR_3,
  VAR_3->name, VAR_3->len, VAR_3->labs, VAR_3->dclass)) {

  FUNC_2(VAR_3->name);
  FUNC_2(VAR_3);
  return 1;
 }
 return 1;
}
