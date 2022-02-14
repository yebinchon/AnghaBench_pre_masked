
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fs; } ;
typedef TYPE_1__ trail_t ;
typedef int svn_lock_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int **,char const*,TYPE_1__*,int *) ;
 int FUNC_2 (int ,char const*,int ,int ,int ,TYPE_1__*,int *) ;
 int FUNC_3 (int ,int *,int *) ;

svn_error_t *
FUNC_4(const char *VAR_3,
                                    svn_boolean_t VAR_4,
                                    trail_t *VAR_5,
                                    apr_pool_t *VAR_6)
{
  if (VAR_4)
    {

      FUNC_0(FUNC_2(VAR_5->fs, VAR_3, VAR_2,
                                    VAR_1,
                                    VAR_5->fs, VAR_5, VAR_6));
    }
  else
    {
      svn_lock_t *VAR_7;


      FUNC_0(FUNC_1(&VAR_7, VAR_3, VAR_5, VAR_6));
      if (VAR_7)
        FUNC_0(FUNC_3(VAR_5->fs, VAR_7, VAR_6));
    }
  return VAR_0;
}
