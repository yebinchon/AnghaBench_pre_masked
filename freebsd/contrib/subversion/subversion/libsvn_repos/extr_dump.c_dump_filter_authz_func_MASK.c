
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_2__ {int filter_baton; int (* filter_func ) (int *,int *,char const*,int ,int *) ;} ;
typedef TYPE_1__ dump_filter_baton_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int *,int *,char const*,int ,int *) ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_boolean_t *VAR_0,
                       svn_fs_root_t *VAR_1,
                       const char *VAR_2,
                       void *VAR_3,
                       apr_pool_t *VAR_4)
{
  dump_filter_baton_t *VAR_5 = VAR_3;

  return FUNC_1(VAR_5->filter_func(VAR_0, VAR_1, VAR_2, VAR_5->filter_baton,
                                        VAR_4));
}
