
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_txdelta_stream_t ;
struct TYPE_8__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_fs_root_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_7__ {int (* get_file_delta_stream ) (int **,TYPE_2__*,char const*,TYPE_2__*,char const*,int *) ;} ;


 int FUNC_0 (int **,TYPE_2__*,char const*,TYPE_2__*,char const*,int *) ;
 int * FUNC_1 (int ) ;

svn_error_t *
FUNC_2(svn_txdelta_stream_t **VAR_0,
                             svn_fs_root_t *VAR_1,
                             const char *VAR_2,
                             svn_fs_root_t *VAR_3,
                             const char *VAR_4, apr_pool_t *VAR_5)
{
  return FUNC_1(VAR_3->vtable->get_file_delta_stream(
                           VAR_0,
                           VAR_1, VAR_2,
                           VAR_3, VAR_4, VAR_5));
}
