
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct svn_config_t {int dummy; } ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char**,char*,int *) ;
 scalar_t__ FUNC_3 (char**,int ,int *) ;
 int FUNC_4 (struct svn_config_t*,char const**,int ,int ,int *) ;
 int FUNC_5 (char const) ;
 int FUNC_6 (char*,int *) ;
 int * FUNC_7 (int ,int *,int ) ;
 int * FUNC_8 (int ,int *,int ,char*,int) ;
 int * FUNC_9 (scalar_t__,int *) ;
 struct svn_config_t* FUNC_10 (int *,int ) ;
 int FUNC_11 (int ,char*,char const**,int*,int *,int ,int *,int *,int *,int *) ;

svn_error_t *
FUNC_12(const char *VAR_9,
                              const char *VAR_10,
                              const char *VAR_11,
                              const char *VAR_12,
                              const char *VAR_13,
                              apr_hash_t *VAR_14,
                              svn_boolean_t *VAR_15,
                              apr_pool_t *VAR_16)
{
  char *VAR_17;

  if (FUNC_2(&VAR_17, "SVN_MERGE", VAR_16) != VAR_1)
    {
      struct svn_config_t *VAR_18;
      VAR_17 = ((void*)0);
      VAR_18 = VAR_14 ? FUNC_10(VAR_14, VAR_2) : ((void*)0);

      FUNC_4(VAR_18, (const char **)&VAR_17,
                     VAR_4,
                     VAR_3, ((void*)0));
    }

  if (VAR_17)
    {
      const char *VAR_19;

      for (VAR_19 = VAR_17; *VAR_19; VAR_19++)
        if (!FUNC_5(*VAR_19))
          break;

      if (! *VAR_19)
        return FUNC_7
          (VAR_5, ((void*)0),
           FUNC_1("The SVN_MERGE environment variable is empty or "
             "consists solely of whitespace. Expected a shell command.\n"));
    }
  else
      return FUNC_7
        (VAR_5, ((void*)0),
         FUNC_1("The environment variable SVN_MERGE and the merge-tool-cmd run-time "
           "configuration option were not set.\n"));

  {
    const char *VAR_20[7] = { 0 };
    char *VAR_21;
    int VAR_22;

    apr_status_t VAR_23 = FUNC_3(&VAR_21, VAR_0, VAR_16);
    if (VAR_23 != 0)
      return FUNC_9(VAR_23, ((void*)0));

    VAR_20[0] = VAR_17;
    VAR_20[1] = VAR_9;
    VAR_20[2] = VAR_10;
    VAR_20[3] = VAR_11;
    VAR_20[4] = VAR_12;
    VAR_20[5] = VAR_13;
    VAR_20[6] = ((void*)0);

    FUNC_0(FUNC_11(FUNC_6(VAR_21, VAR_16), VAR_17,
                           VAR_20, &VAR_22, ((void*)0), VAR_8, ((void*)0), ((void*)0), ((void*)0),
                           VAR_16));




    if (VAR_22 != 0 && VAR_22 != 1)
      return FUNC_8(VAR_6, ((void*)0),
        FUNC_1("The external merge tool '%s' exited with exit code %d."),
        VAR_17, VAR_22);
    else if (VAR_15)
      *VAR_15 = VAR_22 == 1;
  }
  return VAR_7;
}
