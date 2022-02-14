
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_node {int num_loaded; struct gcov_info** loaded_info; } ;
struct gcov_info {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct gcov_node *VAR_1, struct gcov_info *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_loaded; VAR_3++) {
  if (VAR_1->loaded_info[VAR_3] == VAR_2)
   return (VAR_3);
 }
 return (VAR_0);
}
