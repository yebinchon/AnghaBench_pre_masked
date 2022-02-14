
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_node {int num_loaded; struct gcov_info** loaded_info; struct gcov_info* unloaded_info; } ;
struct gcov_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gcov_info**,int ) ;
 int FUNC_1 (struct gcov_info*) ;
 int FUNC_2 (struct gcov_info*) ;
 int FUNC_3 (struct gcov_info*,struct gcov_info*) ;
 int FUNC_4 (int ,char*,int ) ;
 struct gcov_info** FUNC_5 (int,int ,int) ;
 int FUNC_6 (struct gcov_info**,struct gcov_info**,int) ;

__attribute__((used)) static void
FUNC_7(struct gcov_node *VAR_4, struct gcov_info *VAR_5)
{
 struct gcov_info **VAR_6;
 int VAR_7 = VAR_4->num_loaded;






 VAR_6 = FUNC_5((VAR_7 + 1)* sizeof(struct gcov_info *), VAR_1, VAR_2|VAR_3);
 if (!VAR_6) {
  FUNC_4(VAR_0, "could not add '%s' (out of memory)\n",
   FUNC_1(VAR_5));
  return;
 }
 FUNC_6(VAR_6, VAR_4->loaded_info,
        VAR_7 * sizeof(struct gcov_info *));
 VAR_6[VAR_7] = VAR_5;

 if (VAR_7 == 0) {




  if (!FUNC_3(VAR_4->unloaded_info, VAR_5)) {
   FUNC_4(VAR_0, "discarding saved data for %s "
    "(incompatible version)\n",
    FUNC_1(VAR_5));
   FUNC_2(VAR_4->unloaded_info);
   VAR_4->unloaded_info = ((void*)0);
  }
 } else {




  if (!FUNC_3(VAR_4->loaded_info[0], VAR_5)) {
   FUNC_4(VAR_0, "could not add '%s' (incompatible "
    "version)\n", FUNC_1(VAR_5));
   FUNC_0(VAR_6, VAR_1);
   return;
  }
 }

 FUNC_0(VAR_4->loaded_info, VAR_1);
 VAR_4->loaded_info = VAR_6;
 VAR_4->num_loaded = VAR_7 + 1;
}
