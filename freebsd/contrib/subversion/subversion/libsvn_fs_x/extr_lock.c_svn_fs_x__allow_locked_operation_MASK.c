
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_lock_t ;
struct TYPE_7__ {int path; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char const**,int ,char const*,int *) ;
 int FUNC_2 (TYPE_1__*,int **,char const*,scalar_t__,int *) ;
 int VAR_1 ;
 char* FUNC_3 (char const*,int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,char const*,int ,TYPE_1__*,scalar_t__,int *) ;

svn_error_t *
FUNC_6(const char *VAR_2,
                                 svn_fs_t *VAR_3,
                                 svn_boolean_t VAR_4,
                                 svn_boolean_t VAR_5,
                                 apr_pool_t *VAR_6)
{
  VAR_2 = FUNC_3(VAR_2, VAR_6);
  if (VAR_4)
    {

      const char *VAR_7;
      FUNC_0(FUNC_1(&VAR_7, VAR_3->path, VAR_2,
                                    VAR_6));
      FUNC_0(FUNC_5(VAR_3, VAR_7, VAR_1,
                         VAR_3, VAR_5, VAR_6));
    }
  else
    {

      svn_lock_t *VAR_8;
      FUNC_0(FUNC_2(VAR_3, &VAR_8, VAR_2, VAR_5,
                              VAR_6));
      if (VAR_8)
        FUNC_0(FUNC_4(VAR_3, VAR_8));
    }
  return VAR_0;
}
