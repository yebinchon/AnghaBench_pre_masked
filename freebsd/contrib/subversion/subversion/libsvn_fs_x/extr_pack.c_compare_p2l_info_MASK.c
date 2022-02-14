
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ item_count; TYPE_1__* items; } ;
typedef TYPE_2__ svn_fs_x__p2l_entry_t ;
struct TYPE_5__ {scalar_t__ change_set; scalar_t__ number; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(const svn_fs_x__p2l_entry_t * const * VAR_0,
                 const svn_fs_x__p2l_entry_t * const * VAR_1)
{
  FUNC_0(*VAR_0 != *VAR_1);
  if ((*VAR_0)->item_count == 0)
    return (*VAR_0)->item_count == 0 ? 0 : -1;
  if ((*VAR_0)->item_count == 0)
    return 1;

  if ((*VAR_0)->items[0].change_set == (*VAR_1)->items[0].change_set)
    return (*VAR_0)->items[0].number > (*VAR_1)->items[0].number ? -1 : 1;

  return (*VAR_0)->items[0].change_set > (*VAR_1)->items[0].change_set ? -1 : 1;
}
