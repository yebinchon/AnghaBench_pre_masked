
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int abspath; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*,char const*,int *) ;
 int FUNC_6 (scalar_t__*,char const**,int *,int *,int *,int *,int *,char const**,char const**,int*,TYPE_1__*,char const*,int *,int *) ;
 int FUNC_7 (char const*) ;
 char* FUNC_8 (int ,char const*,int *) ;
 int * FUNC_9 (int ,int *,int ,int ) ;
 char* FUNC_10 (char const*,int,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_11 (TYPE_1__**,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_12(const char **VAR_3,
                      const char **VAR_4,
                      const char **VAR_5,
                      const char **VAR_6,
                      svn_wc__db_t *VAR_7,
                      const char *VAR_8,
                      apr_pool_t *VAR_9,
                      apr_pool_t *VAR_10)
{
  svn_wc__db_wcroot_t *VAR_11;
  const char *VAR_12;
  svn_wc__db_status_t VAR_13;
  const char *VAR_14 = ((void*)0);
  const char *VAR_15 = ((void*)0);
  const char *VAR_16 = ((void*)0);
  int VAR_17 = -1;

  FUNC_1(FUNC_7(VAR_8));

  FUNC_0(FUNC_11(&VAR_11, &VAR_12, VAR_7,
                              VAR_8, VAR_10, VAR_10));
  FUNC_3(VAR_11);

  FUNC_2(
          FUNC_6(&VAR_13,
                        VAR_4
                                ? &VAR_14
                                : ((void*)0),
                        ((void*)0), ((void*)0),
                        ((void*)0), ((void*)0), ((void*)0),
                        VAR_3
                            ? &VAR_15
                            : ((void*)0),
                        (VAR_5
                         || VAR_6)
                            ? &VAR_16
                            : ((void*)0),
                        VAR_6
                            ? &VAR_17
                            : ((void*)0),
                        VAR_11, VAR_12, VAR_10, VAR_10),
          VAR_11);

  if (VAR_13 != VAR_2 || !VAR_15)
    return FUNC_9(VAR_0, ((void*)0),
                             FUNC_4("Path '%s' was not moved here"),
                             FUNC_5(VAR_11, VAR_12,
                                                    VAR_10));

  if (VAR_4)
    *VAR_4 = FUNC_8(VAR_11->abspath, VAR_14,
                                       VAR_9);

  if (VAR_3)
    *VAR_3 = FUNC_8(VAR_11->abspath, VAR_15,
                                          VAR_9);

  if (VAR_5)
    *VAR_5 = FUNC_8(VAR_11->abspath,
                                                  VAR_16,
                                                  VAR_9);


  if (VAR_6)
    {
      const char *VAR_18 = FUNC_10(VAR_16,
                                           VAR_17, VAR_10);

      *VAR_6 = FUNC_8(VAR_11->abspath, VAR_18,
                                                   VAR_10);
    }

  return VAR_1;
}
