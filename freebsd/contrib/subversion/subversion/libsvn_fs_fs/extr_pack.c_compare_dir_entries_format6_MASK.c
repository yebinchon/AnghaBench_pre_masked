
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ value; } ;
typedef TYPE_1__ svn_sort__item_t ;
struct TYPE_8__ {scalar_t__ revision; scalar_t__ number; } ;
typedef TYPE_2__ svn_fs_fs__id_part_t ;
struct TYPE_9__ {int id; } ;
typedef TYPE_3__ svn_fs_dirent_t ;


 TYPE_2__* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(const svn_sort__item_t *VAR_0,
                            const svn_sort__item_t *VAR_1)
{
  const svn_fs_dirent_t *VAR_2 = (const svn_fs_dirent_t *) VAR_0->value;
  const svn_fs_dirent_t *VAR_3 = (const svn_fs_dirent_t *) VAR_1->value;

  const svn_fs_fs__id_part_t *VAR_4
    = FUNC_0(VAR_2->id);
  const svn_fs_fs__id_part_t *VAR_5
    = FUNC_0(VAR_3->id);


  if (VAR_4->revision != VAR_5->revision)
    return VAR_4->revision > VAR_5->revision ? -1 : 1;


  if (VAR_4->number != VAR_5->number)
    return VAR_4->number > VAR_5->number ? 1 : -1;

  return 0;
}
