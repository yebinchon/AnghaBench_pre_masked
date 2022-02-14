
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_diff_t ;
typedef int svn_diff_file_options_t ;
struct TYPE_5__ {int pool; TYPE_1__* files; int const* options; int member_0; } ;
typedef TYPE_2__ svn_diff__file_baton_t ;
typedef int apr_pool_t ;
struct TYPE_4__ {char const* path; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int **,TYPE_2__*,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

svn_error_t *
FUNC_4(svn_diff_t **VAR_2,
                      const char *VAR_3,
                      const char *VAR_4,
                      const char *VAR_5,
                      const svn_diff_file_options_t *VAR_6,
                      apr_pool_t *VAR_7)
{
  svn_diff__file_baton_t VAR_8 = { 0 };

  VAR_8.options = VAR_6;
  VAR_8.files[0].path = VAR_3;
  VAR_8.files[1].path = VAR_4;
  VAR_8.files[2].path = VAR_5;
  VAR_8.pool = FUNC_2(VAR_7);

  FUNC_0(FUNC_1(VAR_2, &VAR_8, &VAR_1, VAR_7));

  FUNC_3(VAR_8.pool);
  return VAR_0;
}
