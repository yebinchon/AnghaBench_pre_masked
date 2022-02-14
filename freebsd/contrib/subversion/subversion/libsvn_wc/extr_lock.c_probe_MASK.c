
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 char* FUNC_3 (char const*,int *) ;
 char* FUNC_4 (char const*,int *) ;
 int FUNC_5 (char const**,char const*,int *) ;
 int FUNC_6 (char const*,int *) ;
 int * FUNC_7 (int ,int *,int ,int ,char const*) ;
 int FUNC_8 (char const*,scalar_t__*,int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_9 (int*,int *,char const*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(svn_wc__db_t *VAR_4,
      const char **VAR_5,
      const char *VAR_6,
      apr_pool_t *VAR_7)
{
  svn_node_kind_t VAR_8;
  int VAR_9 = 0;

  FUNC_0(FUNC_8(VAR_6, &VAR_8, VAR_7));
  if (VAR_8 == VAR_3)
    {
      const char *VAR_10;

      FUNC_0(FUNC_5(&VAR_10, VAR_6, VAR_7));
      FUNC_0(FUNC_9(&VAR_9, VAR_4, VAR_10,
                                        VAR_0, VAR_7));
    }


  if (VAR_8 != VAR_3 || VAR_9 == 0)
    {





      const char *VAR_11 = FUNC_3(VAR_6, VAR_7);
      if ((FUNC_2(VAR_11, "..") == 0)
          || (FUNC_2(VAR_11, ".") == 0))
        {
          return FUNC_7
            (VAR_1, ((void*)0),
             FUNC_1("Path '%s' ends in '%s', "
               "which is unsupported for this operation"),
             FUNC_6(VAR_6, VAR_7), VAR_11);
        }

      *VAR_5 = FUNC_4(VAR_6, VAR_7);
    }
  else
    *VAR_5 = VAR_6;

  return VAR_2;
}
