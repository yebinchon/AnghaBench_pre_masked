
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int abspath; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_wc__db_status_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_1 ;
 int FUNC_2 (int ,int ,int ,int *,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,char const**,char const**,int *,char const**,int *,int *,int *,int *,int *,TYPE_1__*,char const*,int *,int *) ;
 int FUNC_5 (char const*) ;
 char* FUNC_6 (int ,char const*,int *) ;
 int FUNC_7 (char const**,char const**,TYPE_1__*,int ,int *) ;
 int FUNC_8 (TYPE_1__**,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_9(svn_wc__db_status_t *VAR_2,
                         const char **VAR_3,
                         const char **VAR_4,
                         const char **VAR_5,
                         const char **VAR_6,
                         const char **VAR_7,
                         const char **VAR_8,
                         const char **VAR_9,
                         svn_revnum_t *VAR_10,
                         svn_wc__db_t *VAR_11,
                         const char *VAR_12,
                         apr_pool_t *VAR_13,
                         apr_pool_t *VAR_14)
{
  svn_wc__db_wcroot_t *VAR_15;
  const char *VAR_16;
  const char *VAR_17 = ((void*)0);
  apr_int64_t VAR_18 = VAR_0;
  apr_int64_t VAR_19 = VAR_0;
  apr_int64_t *VAR_20
    = (VAR_5 || VAR_6) ? &VAR_18 : ((void*)0);
  apr_int64_t *VAR_21
    = (VAR_8 || VAR_9) ? &VAR_19 : ((void*)0);

  FUNC_1(FUNC_5(VAR_12));

  FUNC_0(FUNC_8(&VAR_15, &VAR_16, VAR_11,
                              VAR_12, VAR_14, VAR_14));
  FUNC_3(VAR_15);

  FUNC_2(
          FUNC_4(VAR_2,
                        VAR_3
                                ? &VAR_17
                                : ((void*)0),
                        VAR_4, VAR_20,
                        VAR_7, VAR_21,
                        VAR_10,
                        ((void*)0), ((void*)0), ((void*)0),
                        VAR_15, VAR_16, VAR_13, VAR_14),
          FUNC_7(VAR_5, VAR_6, VAR_15,
                                      VAR_18, VAR_13),
          FUNC_7(VAR_8, VAR_9,
                                      VAR_15, VAR_19,
                                      VAR_13),
          VAR_1,
          VAR_15);

  if (VAR_3)
    *VAR_3 = FUNC_6(VAR_15->abspath, VAR_17,
                                       VAR_13);

  FUNC_1(VAR_20 == ((void*)0) || VAR_18 != VAR_0);

  return VAR_1;
}
