
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* freeze_baton; int freeze_func; int * fs; } ;
typedef TYPE_1__ x_freeze_baton_t ;
typedef int svn_fs_t ;
typedef int svn_fs_freeze_func_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,TYPE_1__*,int *) ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_fs_t *VAR_3,
         svn_fs_freeze_func_t VAR_4,
         void *VAR_5,
         apr_pool_t *VAR_6)
{
  x_freeze_baton_t VAR_7;

  VAR_7.fs = VAR_3;
  VAR_7.freeze_func = VAR_4;
  VAR_7.freeze_baton = VAR_5;

  FUNC_0(FUNC_1(VAR_3, VAR_1));
  FUNC_0(FUNC_2(VAR_3, VAR_2, &VAR_7, VAR_6));

  return VAR_0;
}
