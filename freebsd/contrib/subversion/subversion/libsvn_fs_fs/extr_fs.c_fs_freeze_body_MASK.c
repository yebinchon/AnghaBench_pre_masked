
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct fs_freeze_baton_t {int freeze_baton; int (* freeze_func ) (int ,int *) ;int fs; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (scalar_t__*,int ,int *) ;
 int FUNC_3 (int ,int (*) (int ,int *),int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_1,
               apr_pool_t *VAR_2)
{
  struct fs_freeze_baton_t *VAR_3 = VAR_1;
  svn_boolean_t VAR_4;

  FUNC_0(FUNC_2(&VAR_4, VAR_3->fs, VAR_2));
  if (VAR_4)
    FUNC_0(FUNC_3(VAR_3->fs,
                                           VAR_3->freeze_func, VAR_3->freeze_baton,
                                           VAR_2));
  else
    FUNC_0(VAR_3->freeze_func(VAR_3->freeze_baton, VAR_2));

  return VAR_0;
}
