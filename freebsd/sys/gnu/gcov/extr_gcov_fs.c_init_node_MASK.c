
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_node {int num_loaded; int name; struct gcov_node* parent; struct gcov_info** loaded_info; int children; } ;
struct gcov_info {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char const*) ;

__attribute__((used)) static void
FUNC_2(struct gcov_node *VAR_0, struct gcov_info *VAR_1,
   const char *VAR_2, struct gcov_node *VAR_3)
{
 FUNC_0(&VAR_0->children);
 if (VAR_0->loaded_info) {
  VAR_0->loaded_info[0] = VAR_1;
  VAR_0->num_loaded = 1;
 }
 VAR_0->parent = VAR_3;
 if (VAR_2)
  FUNC_1(VAR_0->name, VAR_2);
}
