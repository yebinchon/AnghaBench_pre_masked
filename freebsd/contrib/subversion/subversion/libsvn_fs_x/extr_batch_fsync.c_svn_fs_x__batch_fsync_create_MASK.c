
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int counter; int flush_to_disk; int files; } ;
typedef TYPE_1__ svn_fs_x__batch_fsync_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int VAR_1 ;
 int FUNC_2 (int *,TYPE_1__*,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

svn_error_t *
FUNC_5(svn_fs_x__batch_fsync_t **VAR_3,
                             svn_boolean_t VAR_4,
                             apr_pool_t *VAR_5)
{
  svn_fs_x__batch_fsync_t *VAR_6 = FUNC_1(VAR_5, sizeof(*VAR_6));
  VAR_6->files = FUNC_3(VAR_5);
  VAR_6->flush_to_disk = VAR_4;

  FUNC_0(FUNC_4(&VAR_6->counter, VAR_5));
  FUNC_2(VAR_5, VAR_6, VAR_2,
                            VAR_1);

  *VAR_3 = VAR_6;

  return VAR_0;
}
