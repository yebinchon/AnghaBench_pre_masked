
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_procattr_t ;
typedef int apr_proc_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_5 ;
 int FUNC_2 (char*) ;
 char** FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int ,int *,int *) ;
 scalar_t__ FUNC_5 (int *,char const*,char const**,char const* const*,int *,int *) ;
 scalar_t__ FUNC_6 (int *,int *,int *) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int *,int *,int *) ;
 scalar_t__ FUNC_9 (int *,int *,int *) ;
 scalar_t__ FUNC_10 (int *,int ) ;
 scalar_t__ FUNC_11 (int **,int *) ;
 scalar_t__ FUNC_12 (int *,char const*) ;
 scalar_t__ FUNC_13 (int *,int ,int ,int ) ;
 int FUNC_14 (char const**,char const* const,int *) ;
 int VAR_6 ;
 int * FUNC_15 (scalar_t__,int ,char const*) ;

svn_error_t *
FUNC_16(apr_proc_t *VAR_7,
                  const char *VAR_8,
                  const char *VAR_9,
                  const char *const *VAR_10,
                  const char *const *VAR_11,
                  svn_boolean_t VAR_12,
                  svn_boolean_t VAR_13,
                  apr_file_t *VAR_14,
                  svn_boolean_t VAR_15,
                  apr_file_t *VAR_16,
                  svn_boolean_t VAR_17,
                  apr_file_t *VAR_18,
                  apr_pool_t *VAR_19)
{
  apr_status_t VAR_20;
  apr_procattr_t *VAR_21;
  int VAR_22;
  const char **VAR_23;
  const char *VAR_24;

  FUNC_1(!((VAR_14 != ((void*)0)) && VAR_13));
  FUNC_1(!((VAR_16 != ((void*)0)) && VAR_15));
  FUNC_1(!((VAR_18 != ((void*)0)) && VAR_17));


  VAR_20 = FUNC_11(&VAR_21, VAR_19);
  if (VAR_20)
    return FUNC_15(VAR_20,
                              FUNC_2("Can't create process '%s' attributes"),
                              VAR_9);


  VAR_20 = FUNC_10(VAR_21,
                                     VAR_12 ? VAR_3 : VAR_2);
  if (VAR_20)
    return FUNC_15(VAR_20, FUNC_2("Can't set process '%s' cmdtype"),
                              VAR_9);


  if (VAR_8)
    {
      const char *VAR_25;


      if (VAR_8[0] == '\0')
        VAR_8 = ".";

      FUNC_0(FUNC_14(&VAR_25, VAR_8, VAR_19));
      VAR_20 = FUNC_12(VAR_21, VAR_25);
      if (VAR_20)
        return FUNC_15(VAR_20,
                                  FUNC_2("Can't set process '%s' directory"),
                                  VAR_9);
    }






  if (VAR_14)
    {
      VAR_20 = FUNC_8(VAR_21, VAR_14, ((void*)0));
      if (VAR_20)
        return FUNC_15(VAR_20,
                                  FUNC_2("Can't set process '%s' child input"),
                                  VAR_9);
    }
  if (VAR_16)
    {
      VAR_20 = FUNC_9(VAR_21, VAR_16, ((void*)0));
      if (VAR_20)
        return FUNC_15(VAR_20,
                                  FUNC_2("Can't set process '%s' child outfile"),
                                  VAR_9);
    }
  if (VAR_18)
    {
      VAR_20 = FUNC_6(VAR_21, VAR_18, ((void*)0));
      if (VAR_20)
        return FUNC_15(VAR_20,
                                  FUNC_2("Can't set process '%s' child errfile"),
                                  VAR_9);
    }


  if (VAR_13 || VAR_15 || VAR_17)
    {
      VAR_20 = FUNC_13(VAR_21,
                                    VAR_13 ? VAR_0 : VAR_1,
                                    VAR_15 ? VAR_0 : VAR_1,
                                    VAR_17 ? VAR_0 : VAR_1);

      if (VAR_20)
        return FUNC_15(VAR_20,
                                  FUNC_2("Can't set process '%s' stdio pipes"),
                                  VAR_9);
    }


  VAR_20 = FUNC_4(VAR_18, VAR_4, ((void*)0), VAR_19);
  if (VAR_20)
    return FUNC_15(VAR_20,
                              FUNC_2("Can't set process '%s' child errfile for "
                                "error handler"),
                              VAR_9);
  VAR_20 = FUNC_7(VAR_21,
                                         VAR_6);
  if (VAR_20)
    return FUNC_15(VAR_20,
                              FUNC_2("Can't set process '%s' error handler"),
                              VAR_9);


  FUNC_0(FUNC_14(&VAR_24, VAR_9, VAR_19));
  for (VAR_22 = 0; VAR_10[VAR_22]; VAR_22++)
    ;
  VAR_23 = FUNC_3(VAR_19, (VAR_22 + 1) * sizeof(char *));
  VAR_23[VAR_22] = ((void*)0);
  while (VAR_22--)
    {



      FUNC_0(FUNC_14(&VAR_23[VAR_22],
                                VAR_10[VAR_22], VAR_19));
    }



  VAR_20 = FUNC_5(VAR_7, VAR_24, VAR_23,
                            VAR_12 ? ((void*)0) : VAR_11, VAR_21, VAR_19);
  if (VAR_20)
    return FUNC_15(VAR_20, FUNC_2("Can't start process '%s'"), VAR_9);

  return VAR_5;
}
