
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int fs; } ;
typedef TYPE_1__ trail_t ;
typedef int svn_lock_t ;
struct TYPE_15__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int **,int ,char const*,TYPE_1__*,int *) ;
 TYPE_2__* FUNC_4 (char const**,int ,char const*,TYPE_1__*,int *) ;

svn_error_t *
FUNC_5(svn_lock_t **VAR_4,
                             const char *VAR_5,
                             trail_t *VAR_6,
                             apr_pool_t *VAR_7)
{
  const char *VAR_8;
  svn_error_t *VAR_9;

  VAR_9 = FUNC_4(&VAR_8, VAR_6->fs, VAR_5,
                                   VAR_6, VAR_7);



  if (VAR_9 && ((VAR_9->apr_err == VAR_2)
              || (VAR_9->apr_err == VAR_1)
              || (VAR_9->apr_err == VAR_0)))
    {
      FUNC_1(VAR_9);
      *VAR_4 = ((void*)0);
      return VAR_3;
    }
  else
    FUNC_0(VAR_9);


  VAR_9 = FUNC_3(VAR_4, VAR_6->fs, VAR_8, VAR_6, VAR_7);
  if (VAR_9 && ((VAR_9->apr_err == VAR_1)
              || (VAR_9->apr_err == VAR_0)))
    {
      FUNC_1(VAR_9);
      *VAR_4 = ((void*)0);
      return VAR_3;
    }
  else
    FUNC_0(VAR_9);

  return FUNC_2(VAR_9);
}
