
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* value; } ;
typedef TYPE_2__ svn_sort__item_t ;
struct TYPE_8__ {TYPE_1__* dirent; } ;
typedef TYPE_3__ svn_client_shelved_patch_info_t ;
struct TYPE_6__ {scalar_t__ mtime; } ;



__attribute__((used)) static int
FUNC_0(const svn_sort__item_t *VAR_0,
                                     const svn_sort__item_t *VAR_1)
{
  svn_client_shelved_patch_info_t *VAR_2 = VAR_0->value;
  svn_client_shelved_patch_info_t *VAR_3 = VAR_1->value;

  return (VAR_2->dirent->mtime < VAR_3->dirent->mtime)
           ? -1 : (VAR_2->dirent->mtime > VAR_3->dirent->mtime) ? 1 : 0;
}
