
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int abspath; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char const**,char const**,char const**,char const**,TYPE_1__*,char const*,int *,int *) ;
 int FUNC_5 (char const*) ;
 char* FUNC_6 (int ,char const*,int *) ;
 int FUNC_7 (TYPE_1__**,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_8(const char **VAR_1,
                         const char **VAR_2,
                         const char **VAR_3,
                         const char **VAR_4,
                         svn_wc__db_t *VAR_5,
                         const char *VAR_6,
                         apr_pool_t *VAR_7,
                         apr_pool_t *VAR_8)
{
  svn_wc__db_wcroot_t *VAR_9;
  const char *VAR_10;
  const char *VAR_11, *VAR_12, *VAR_13;
  const char *VAR_14;

  FUNC_1(FUNC_5(VAR_6));

  FUNC_0(FUNC_7(&VAR_9, &VAR_10, VAR_5,
                              VAR_6, VAR_8, VAR_8));
  FUNC_3(VAR_9);

  FUNC_2(
    FUNC_4(&VAR_11, &VAR_12,
                  &VAR_13, &VAR_14,
                  VAR_9, VAR_10, VAR_7, VAR_8),
    VAR_9);

  if (VAR_1)
    {
      *VAR_1 = (VAR_11
                           ? FUNC_6(VAR_9->abspath,
                                             VAR_11, VAR_7)
                           : ((void*)0));
    }
  if (VAR_2)
    {
      *VAR_2 = (VAR_12
                           ? FUNC_6(VAR_9->abspath,
                                             VAR_12, VAR_7)
                           : ((void*)0));
    }
  if (VAR_3)
    {
      *VAR_3 = (VAR_13
                           ? FUNC_6(VAR_9->abspath,
                                             VAR_13, VAR_7)
                           : ((void*)0));
    }
  if (VAR_4)
    {
      *VAR_4 = (VAR_14
                           ? FUNC_6(VAR_9->abspath,
                                             VAR_14,
                                             VAR_7)
                           : ((void*)0));
    }

  return VAR_0;
}
