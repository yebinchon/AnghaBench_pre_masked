
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_fs_freeze_func_t ;
typedef int svn_error_t ;
struct fs_freeze_baton_t {void* freeze_baton; int freeze_func; TYPE_1__* fs; } ;
struct TYPE_7__ {scalar_t__ format; } ;
typedef TYPE_2__ fs_fs_data_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct fs_freeze_baton_t*,int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int (*) (struct fs_freeze_baton_t*,int *),struct fs_freeze_baton_t*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_fs_t *VAR_3,
          svn_fs_freeze_func_t VAR_4,
          void *VAR_5,
          apr_pool_t *VAR_6)
{
  fs_fs_data_t *VAR_7 = VAR_3->fsap_data;
  struct fs_freeze_baton_t VAR_8;

  VAR_8.fs = VAR_3;
  VAR_8.freeze_func = VAR_4;
  VAR_8.freeze_baton = VAR_5;

  FUNC_0(FUNC_2(VAR_3, VAR_2));

  if (VAR_7->format >= VAR_0)
    FUNC_0(FUNC_3(VAR_3, FUNC_1, &VAR_8, VAR_6));
  else
    FUNC_0(FUNC_1(&VAR_8, VAR_6));

  return VAR_1;
}
