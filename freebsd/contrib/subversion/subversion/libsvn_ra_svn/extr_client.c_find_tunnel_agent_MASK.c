
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_config_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (char*) ;
 char** FUNC_1 (int *,int) ;
 char* FUNC_2 (int *,char const*,int) ;
 scalar_t__ FUNC_3 (char const*,char***,int *) ;
 char* FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int FUNC_6 (char const*,char*) ;
 int FUNC_7 (int *,char const**,int ,char const*,int *) ;
 int * FUNC_8 (int ,int *,int ,char const*,...) ;
 int * FUNC_9 (scalar_t__,int ,char const*) ;
 int * FUNC_10 (int *,int ) ;

__attribute__((used)) static svn_error_t *FUNC_11(const char *VAR_5,
                                      const char *VAR_6,
                                      const char ***VAR_7,
                                      apr_hash_t *VAR_8, apr_pool_t *VAR_9)
{
  svn_config_t *VAR_10;
  const char *VAR_11, *VAR_12, *VAR_13;
  char **VAR_14;
  const char **VAR_15;
  apr_size_t VAR_16;
  apr_status_t VAR_17;
  int VAR_18;


  VAR_10 = VAR_8 ? FUNC_10(VAR_8, VAR_1) : ((void*)0);
  FUNC_7(VAR_10, &VAR_11, VAR_2, VAR_5, ((void*)0));


  if (!VAR_11 && FUNC_5(VAR_5, "ssh") == 0)
    {







      VAR_11 = "$SVN_SSH ssh -q --";
    }

  if (!VAR_11 || !*VAR_11)
    return FUNC_8(VAR_3, ((void*)0),
                             FUNC_0("Undefined tunnel scheme '%s'"), VAR_5);



  if (*VAR_11 == '$')
    {
      VAR_11++;
      VAR_16 = FUNC_6(VAR_11, " ");
      VAR_12 = FUNC_2(VAR_9, VAR_11, VAR_16);
      VAR_13 = FUNC_4(VAR_12);
      if (!VAR_13)
        {
          VAR_13 = VAR_11 + VAR_16;
          while (*VAR_13 == ' ')
            VAR_13++;
          if (!*VAR_13)
            return FUNC_8(VAR_3, ((void*)0),
                                     FUNC_0("Tunnel scheme %s requires environment "
                                       "variable %s to be defined"), VAR_5,
                                     VAR_12);
        }
    }
  else
    VAR_13 = VAR_11;


  VAR_17 = FUNC_3(VAR_13, &VAR_14, VAR_9);
  if (VAR_17 != VAR_0)
    return FUNC_9(VAR_17, FUNC_0("Can't tokenize command '%s'"), VAR_13);


  for (VAR_18 = 0; VAR_14[VAR_18] != ((void*)0); VAR_18++)
    ;

  VAR_15 = FUNC_1(VAR_9, (VAR_18 + 4) * sizeof(char *));


  for (VAR_18 = 0; VAR_14[VAR_18] != ((void*)0); VAR_18++)
    VAR_15[VAR_18] = VAR_14[VAR_18];

  VAR_15[VAR_18++] = VAR_6;
  VAR_15[VAR_18++] = "svnserve";
  VAR_15[VAR_18++] = "-t";
  VAR_15[VAR_18] = ((void*)0);

  *VAR_7 = VAR_15;
  return VAR_4;
}
