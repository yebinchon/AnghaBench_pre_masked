
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_node {scalar_t__ unloaded_info; } ;
struct gcov_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,struct gcov_info*) ;
 scalar_t__ FUNC_1 (struct gcov_info*) ;
 int FUNC_2 (struct gcov_info*) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_4(struct gcov_node *VAR_1, struct gcov_info *VAR_2)
{
 if (VAR_1->unloaded_info)
  FUNC_0(VAR_1->unloaded_info, VAR_2);
 else {
  VAR_1->unloaded_info = FUNC_1(VAR_2);
  if (!VAR_1->unloaded_info) {
   FUNC_3(VAR_0, "could not save data for '%s' "
    "(out of memory)\n",
    FUNC_2(VAR_2));
  }
 }
}
