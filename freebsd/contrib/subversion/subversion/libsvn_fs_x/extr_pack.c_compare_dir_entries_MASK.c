
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ value; } ;
typedef TYPE_1__ svn_sort__item_t ;
struct TYPE_6__ {int name; } ;
typedef TYPE_2__ svn_fs_dirent_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const svn_sort__item_t *VAR_0,
                    const svn_sort__item_t *VAR_1)
{
  const svn_fs_dirent_t *VAR_2 = (const svn_fs_dirent_t *) VAR_0->value;
  const svn_fs_dirent_t *VAR_3 = (const svn_fs_dirent_t *) VAR_1->value;

  return FUNC_0(VAR_2->name, VAR_3->name);
}
