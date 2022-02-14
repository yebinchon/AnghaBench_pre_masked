
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int svn_revnum_t ;
typedef int svn_repos_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,char*,int ) ;
 char* FUNC_3 (char const*,scalar_t__*,int *) ;
 int FUNC_4 (int **,int const*,int *) ;
 int * FUNC_5 (char const*) ;
 int FUNC_6 (int *,int ,char const*,char const**,int *,int *,int *) ;
 char* FUNC_7 (int ,int *) ;
 int * FUNC_8 (int ,int *,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int **,int ,int ,int ,int *) ;
 int FUNC_11 (int *,int *) ;
 char* FUNC_12 (int *,int *) ;

svn_error_t *
FUNC_13(svn_repos_t *VAR_6,
                                    apr_hash_t *VAR_7,
                                    svn_revnum_t VAR_8,
                                    const char *VAR_9,
                                    const char *VAR_10,
                                    const svn_string_t *VAR_11,
                                    char VAR_12,
                                    apr_pool_t *VAR_13)
{
  const char *VAR_14 = FUNC_12(VAR_6, VAR_13);
  svn_boolean_t VAR_15;

  if ((VAR_14 = FUNC_3(VAR_14, &VAR_15, VAR_13)) && VAR_15)
    {
      return FUNC_5(VAR_14);
    }
  else if (VAR_14)
    {
      const char *VAR_16[7];
      apr_file_t *VAR_17 = ((void*)0);
      char VAR_18[2];


      if (VAR_11)
        FUNC_0(FUNC_4(&VAR_17, VAR_11, VAR_13));
      else
        FUNC_0(FUNC_10(&VAR_17, VAR_4,
                                 VAR_1, VAR_0, VAR_13));

      VAR_18[0] = VAR_12;
      VAR_18[1] = '\0';

      VAR_16[0] = VAR_14;
      VAR_16[1] = FUNC_7(FUNC_11(VAR_6, VAR_13), VAR_13);
      VAR_16[2] = FUNC_2(VAR_13, "%ld", VAR_8);
      VAR_16[3] = VAR_9 ? VAR_9 : "";
      VAR_16[4] = VAR_10;
      VAR_16[5] = VAR_18;
      VAR_16[6] = ((void*)0);

      FUNC_0(FUNC_6(((void*)0), VAR_5, VAR_14,
                           VAR_16, VAR_7, VAR_17, VAR_13));

      FUNC_0(FUNC_9(VAR_17, VAR_13));
    }
  else
    {




      return
        FUNC_8
        (VAR_2, ((void*)0),
         FUNC_1("Repository has not been enabled to accept revision propchanges;\n"
           "ask the administrator to create a pre-revprop-change hook"));
    }

  return VAR_3;
}
