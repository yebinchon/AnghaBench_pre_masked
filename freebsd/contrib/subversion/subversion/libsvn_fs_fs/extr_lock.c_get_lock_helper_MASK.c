
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_lock_t ;
typedef int svn_fs_t ;
struct TYPE_7__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* FUNC_1 (int **,int *,char const*,int ,int ,int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_fs_t *VAR_4,
                svn_lock_t **VAR_5,
                const char *VAR_6,
                svn_boolean_t VAR_7,
                apr_pool_t *VAR_8)
{
  svn_lock_t *VAR_9;
  svn_error_t *VAR_10;

  VAR_10 = FUNC_1(&VAR_9, VAR_4, VAR_6, VAR_7, VAR_0, VAR_8);



  if (VAR_10 && ((VAR_10->apr_err == VAR_2)
              || (VAR_10->apr_err == VAR_1)))
    {
      FUNC_2(VAR_10);
      *VAR_5 = ((void*)0);
      return VAR_3;
    }
  else
    FUNC_0(VAR_10);

  *VAR_5 = VAR_9;
  return VAR_3;
}
