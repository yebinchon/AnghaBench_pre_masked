
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int abspath; } ;
typedef TYPE_1__ svn_wc__db_revert_list_copied_child_info_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
  const svn_wc__db_revert_list_copied_child_info_t * const *VAR_2 = VAR_0;
  const svn_wc__db_revert_list_copied_child_info_t * const *VAR_3 = VAR_1;
  int VAR_4;

  VAR_4 = FUNC_0(VAR_2[0]->abspath, VAR_3[0]->abspath);



  return -VAR_4;
}
