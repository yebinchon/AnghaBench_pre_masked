
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_fs_path_change_iterator_t ;
typedef int svn_fs_path_change3_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int * (* get ) (int **,TYPE_2__*) ;} ;


 int * FUNC_0 (int **,TYPE_2__*) ;

svn_error_t *
FUNC_1(svn_fs_path_change3_t **VAR_0,
                       svn_fs_path_change_iterator_t *VAR_1)
{
  return VAR_1->vtable->get(VAR_0, VAR_1);
}
