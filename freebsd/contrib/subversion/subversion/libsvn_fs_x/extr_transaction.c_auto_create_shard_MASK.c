
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_12__ {int max_files_per_dir; } ;
typedef TYPE_1__ svn_fs_x__data_t ;
typedef int svn_fs_x__batch_fsync_t ;
struct TYPE_13__ {int path; TYPE_1__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
struct TYPE_14__ {int apr_err; } ;
typedef TYPE_3__ svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_3__* VAR_2 ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *,char const*,int *) ;
 char* FUNC_6 (TYPE_2__*,int,int *) ;
 int FUNC_7 (int ,char const*,int *) ;
 TYPE_3__* FUNC_8 (char const*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_fs_t *VAR_3,
                  svn_revnum_t VAR_4,
                  svn_fs_x__batch_fsync_t *VAR_5,
                  apr_pool_t *VAR_6)
{
  svn_fs_x__data_t *VAR_7 = VAR_3->fsap_data;
  if (VAR_4 % VAR_7->max_files_per_dir == 0)
    {
      const char *VAR_8 = FUNC_6(VAR_3, VAR_4, VAR_6);
      svn_error_t *VAR_9 = FUNC_8(VAR_8, VAR_0,
                                         VAR_6);

      if (VAR_9 && !FUNC_0(VAR_9->apr_err))
        return FUNC_4(VAR_9);
      FUNC_3(VAR_9);

      FUNC_1(FUNC_7(FUNC_2(VAR_3->path, VAR_1,
                                                VAR_6),
                                VAR_8, VAR_6));
      FUNC_1(FUNC_5(VAR_5, VAR_8, VAR_6));
    }

  return VAR_2;
}
