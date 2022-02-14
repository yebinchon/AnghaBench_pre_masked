
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_node {int num_loaded; int unloaded_info; int * loaded_info; } ;
struct gcov_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct gcov_info*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct gcov_node*,struct gcov_info*) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (struct gcov_node*) ;
 int FUNC_5 (struct gcov_node*,struct gcov_info*) ;

__attribute__((used)) static void
FUNC_6(struct gcov_node *VAR_3, struct gcov_info *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_4);
 if (VAR_5 < 0) {
  FUNC_3(VAR_0, "could not remove '%s' (not found)\n",
   FUNC_1(VAR_4));
  return;
 }
 if (VAR_2)
  FUNC_5(VAR_3, VAR_4);

 VAR_3->loaded_info[VAR_5] = VAR_3->loaded_info[VAR_3->num_loaded - 1];
 VAR_3->num_loaded--;
 if (VAR_3->num_loaded > 0)
  return;

 FUNC_0(VAR_3->loaded_info, VAR_1);
 VAR_3->loaded_info = ((void*)0);
 VAR_3->num_loaded = 0;
 if (!VAR_3->unloaded_info)
  FUNC_4(VAR_3);
}
