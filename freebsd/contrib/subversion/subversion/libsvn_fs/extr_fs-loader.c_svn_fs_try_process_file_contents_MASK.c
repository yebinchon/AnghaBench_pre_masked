
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_fs_root_t ;
typedef int svn_fs_process_contents_func_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {int (* try_process_file_contents ) (int *,TYPE_2__*,char const*,int ,void*,int *) ;} ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*,char const*,int ,void*,int *) ;
 int * FUNC_1 (int ) ;

svn_error_t *
FUNC_2(svn_boolean_t *VAR_2,
                                 svn_fs_root_t *VAR_3,
                                 const char *VAR_4,
                                 svn_fs_process_contents_func_t VAR_5,
                                 void* VAR_6,
                                 apr_pool_t *VAR_7)
{

  if (VAR_3->vtable->try_process_file_contents == ((void*)0))
    {
      *VAR_2 = VAR_0;
      return VAR_1;
    }

  return FUNC_1(VAR_3->vtable->try_process_file_contents(
                         VAR_2,
                         VAR_3, VAR_4,
                         VAR_5, VAR_6, VAR_7));
}
