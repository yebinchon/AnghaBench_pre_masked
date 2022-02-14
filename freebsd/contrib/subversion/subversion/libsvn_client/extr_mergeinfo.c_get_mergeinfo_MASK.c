
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_ra_session_t ;
typedef int svn_opt_revision_t ;
typedef int svn_mergeinfo_catalog_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
struct TYPE_5__ {scalar_t__ rev; int url; } ;
typedef TYPE_1__ svn_client__pathrev_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *,int ,scalar_t__,int ,int ,scalar_t__,int *,int *) ;
 int FUNC_3 (int *,int *,int *,scalar_t__,int ,scalar_t__,int ,int *,char const*,int *,int *,int *) ;
 int FUNC_4 (int **,TYPE_1__**,char const*,int *,int const*,int const*,int *,int *) ;
 int FUNC_5 (TYPE_1__**,int *,char const*,int const*,int const*,int *,int *) ;
 int FUNC_6 (TYPE_1__**,char const*,int *,int *,int *) ;
 int FUNC_7 (char const**,char const*,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (char const*) ;
 int FUNC_9 (int *,char const**,int *) ;
 int FUNC_10 (int *,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(svn_mergeinfo_catalog_t *VAR_4,
              const char **VAR_5,
              const char *VAR_6,
              const svn_opt_revision_t *VAR_7,
              svn_boolean_t VAR_8,
              svn_boolean_t VAR_9,
              svn_client_ctx_t *VAR_10,
              svn_ra_session_t *VAR_11,
              apr_pool_t *VAR_12,
              apr_pool_t *VAR_13)
{
  const char *VAR_14;
  svn_boolean_t VAR_15 = FUNC_8(VAR_6);
  svn_client__pathrev_t *VAR_16;

  if (VAR_11 && FUNC_8(VAR_6))
    {
      FUNC_0(FUNC_10(VAR_11, VAR_6, VAR_13));
      FUNC_0(FUNC_5(&VAR_16, VAR_11,
                                              VAR_6,
                                              VAR_7,
                                              VAR_7,
                                              VAR_10, VAR_13));
    }
  else
    {
      FUNC_0(FUNC_4(&VAR_11, &VAR_16,
                                                VAR_6, ((void*)0),
                                                VAR_7,
                                                VAR_7, VAR_10, VAR_13));
    }



  if (!VAR_15)
    {
      svn_client__pathrev_t *VAR_17;
      FUNC_0(FUNC_7(&VAR_14, VAR_6,
                                      VAR_13));

      FUNC_0(FUNC_6(&VAR_17, VAR_14, VAR_10,
                                             VAR_13, VAR_13));
      if (!VAR_17
          || FUNC_1(VAR_17->url, VAR_16->url) != 0
          || VAR_16->rev != VAR_17->rev)
      {
        VAR_15 = VAR_2;
      }
    }

  FUNC_0(FUNC_9(VAR_11, VAR_5, VAR_12));

  if (VAR_15)
    {
      FUNC_0(FUNC_2(
        VAR_4, VAR_11, VAR_16->url, VAR_16->rev,
        VAR_3, VAR_0, VAR_8,
        VAR_12, VAR_13));
    }
  else
    {
      FUNC_0(FUNC_3(
        VAR_4, ((void*)0), ((void*)0), VAR_8, VAR_0,
        VAR_9, VAR_3,
        VAR_11, VAR_6, VAR_10,
        VAR_12, VAR_13));
    }

  return VAR_1;
}
