
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_wcroot_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char const*,int *) ;
 int FUNC_4 (scalar_t__*,int *,int *,char const**,scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,char const*,int *,int *) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;
 int * FUNC_6 (int ,int *,int ,int ) ;
 char* FUNC_7 (char const*,char const*,int *) ;
 int FUNC_8 (char const**,char const**,char const*,int *) ;
 int FUNC_9 (int *,int *,int *,char const**,scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,char const*,int *,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static svn_error_t *
FUNC_10(svn_boolean_t *VAR_7,
               svn_node_kind_t *VAR_8,
               svn_wc__db_wcroot_t *VAR_9,
               const char *VAR_10,
               apr_pool_t *VAR_11)
{
  svn_wc__db_status_t VAR_12;
  apr_int64_t VAR_13;
  const char *VAR_14;
  const char *VAR_15;
  const char *VAR_16;
  apr_int64_t VAR_17;
  const char *VAR_18;

  FUNC_1(*VAR_10 != '\0');

  FUNC_0(FUNC_4(&VAR_12, VAR_8, ((void*)0), &VAR_14, &VAR_13, ((void*)0),
                    ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                    ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                    VAR_9, VAR_10, VAR_11, VAR_11));

  if (VAR_12 == VAR_6
      || VAR_12 == VAR_4
      || VAR_12 == VAR_5)
    {
      return FUNC_6(
                    VAR_1, ((void*)0),
                    FUNC_2("The node '%s' was not found."),
                    FUNC_3(VAR_9, VAR_10,
                                           VAR_11));
    }
  else if (! VAR_14)
    {

      if (VAR_7)
        *VAR_7 = VAR_0;

      return VAR_2;
    }

  if (! VAR_7)
    return VAR_2;

  FUNC_8(&VAR_16, &VAR_15, VAR_10, VAR_11);

  FUNC_0(FUNC_9(((void*)0), ((void*)0), ((void*)0),
                                            &VAR_18,
                                            &VAR_17, ((void*)0), ((void*)0), ((void*)0),
                                            ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                            ((void*)0), ((void*)0),
                                            VAR_9, VAR_16,
                                            VAR_11, VAR_11));

  if (VAR_13 != VAR_17)
    *VAR_7 = VAR_3;
  else
    {
      const char *VAR_19;

      VAR_19 = FUNC_7(VAR_18, VAR_15,
                                          VAR_11);

      *VAR_7 = (FUNC_5(VAR_19, VAR_14) != 0);
    }

  return VAR_2;
}
