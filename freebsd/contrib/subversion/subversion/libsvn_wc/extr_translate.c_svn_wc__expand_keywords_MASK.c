
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef scalar_t__ apr_time_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ) ;
 char* FUNC_3 (char const*,char const*,int *) ;
 int FUNC_4 (int **,char const*,int ,char const*,char const*,scalar_t__,char const*,int *) ;
 int FUNC_5 (int *,int *,int *,char const**,char const**,int *,int *,scalar_t__*,char const**,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,char const*,int *,int *) ;
 int FUNC_6 (int *,char const**,char const**,int *,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_7(apr_hash_t **VAR_2,
                        svn_wc__db_t *VAR_3,
                        const char *VAR_4,
                        const char *VAR_5,
                        const char *VAR_6,
                        svn_boolean_t VAR_7,
                        apr_pool_t *VAR_8,
                        apr_pool_t *VAR_9)
{
  svn_revnum_t VAR_10;
  apr_time_t VAR_11;
  const char *VAR_12;
  const char *VAR_13;
  const char *VAR_14;

  if (! VAR_7)
    {
      const char *VAR_15;

      FUNC_0(FUNC_5(((void*)0), ((void*)0), ((void*)0), &VAR_15,
                                   &VAR_14, ((void*)0), &VAR_10,
                                   &VAR_11, &VAR_12, ((void*)0),
                                   ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                   ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                   ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                   VAR_3, VAR_4,
                                   VAR_9, VAR_9));


      if (!VAR_15)
         FUNC_0(FUNC_6(((void*)0), &VAR_15,
                                            &VAR_14, ((void*)0),
                                            VAR_3, VAR_4,
                                            VAR_9, VAR_9));

      VAR_13 = FUNC_3(VAR_14, VAR_15,
                                        VAR_9);
    }
  else
    {
      VAR_13 = "";
      VAR_10 = VAR_0;
      VAR_11 = 0;
      VAR_12 = "";
      VAR_14 = "";
    }

  FUNC_0(FUNC_4(VAR_2, VAR_6,
                                    FUNC_2(VAR_9, "%ld",
                                                 VAR_10),
                                    VAR_13, VAR_14,
                                    VAR_11, VAR_12,
                                    VAR_8));

  if (FUNC_1(*VAR_2) == 0)
    *VAR_2 = ((void*)0);

  return VAR_1;
}
