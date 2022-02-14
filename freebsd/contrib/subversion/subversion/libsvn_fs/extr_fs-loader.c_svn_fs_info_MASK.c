
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int path; TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_fs_t ;
struct TYPE_10__ {int fs_type; } ;
typedef TYPE_3__ svn_fs_info_placeholder_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_8__ {int (* info_fsap ) (void const**,TYPE_2__*,int *,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 TYPE_3__* FUNC_1 (int *,int) ;
 int FUNC_2 (void const**,TYPE_2__*,int *,int *) ;
 int FUNC_3 (int *,int ,int *) ;

svn_error_t *
FUNC_4(const svn_fs_info_placeholder_t **VAR_1,
            svn_fs_t *VAR_2,
            apr_pool_t *VAR_3,
            apr_pool_t *VAR_4)
{
  if (VAR_2->vtable->info_fsap)
    {
      FUNC_0(VAR_2->vtable->info_fsap((const void **)VAR_1, VAR_2,
                                    VAR_3, VAR_4));
    }
  else
    {
      svn_fs_info_placeholder_t *VAR_5 = FUNC_1(VAR_3, sizeof(*VAR_5));

      FUNC_0(FUNC_3(&VAR_5->fs_type, VAR_2->path, VAR_3));
      *VAR_1 = VAR_5;
    }
  return VAR_0;
}
