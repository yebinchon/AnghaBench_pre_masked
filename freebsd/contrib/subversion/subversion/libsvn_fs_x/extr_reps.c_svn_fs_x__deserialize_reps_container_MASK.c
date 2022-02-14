
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int instructions; int first_instructions; int bases; int text; } ;
typedef TYPE_1__ svn_fs_x__reps_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (TYPE_1__*,void**) ;

svn_error_t *
FUNC_1(void **VAR_1,
                                     void *VAR_2,
                                     apr_size_t VAR_3,
                                     apr_pool_t *VAR_4)
{
  svn_fs_x__reps_t *VAR_5 = (svn_fs_x__reps_t *)VAR_2;


  FUNC_0(VAR_5, (void **)&VAR_5->text);
  FUNC_0(VAR_5, (void **)&VAR_5->bases);
  FUNC_0(VAR_5, (void **)&VAR_5->first_instructions);
  FUNC_0(VAR_5, (void **)&VAR_5->instructions);


  *VAR_1 = VAR_5;

  return VAR_0;
}
