
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int trail_t ;
typedef int svn_lock_t ;
typedef int svn_fs_t ;
struct TYPE_9__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int **,int *,char const*,int *,int *) ;
 TYPE_1__* FUNC_3 (int *,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_lock_t **VAR_3,
         svn_fs_t *VAR_4,
         const char *VAR_5,
         const char *VAR_6,
         trail_t *VAR_7,
         apr_pool_t *VAR_8)
{
  svn_error_t *VAR_9 = VAR_2;
  *VAR_3 = ((void*)0);



  VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_6, VAR_7, VAR_8);
  if (VAR_9 && ((VAR_9->apr_err == VAR_1)
              || (VAR_9->apr_err == VAR_0)))
    {
      FUNC_0(VAR_9);




      VAR_9 = FUNC_3(VAR_4, VAR_5, VAR_7, VAR_8);
    }
  return FUNC_1(VAR_9);
}
