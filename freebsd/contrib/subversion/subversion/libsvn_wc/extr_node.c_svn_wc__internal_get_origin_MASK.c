
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,char const*) ;
 int FUNC_3 (char const*,int *) ;
 int FUNC_4 (char const*,char const*) ;
 int * FUNC_5 (int ,int *,int ,int ) ;
 char* FUNC_6 (char const*,int ,int *) ;
 int FUNC_7 (int *,int *,int *,char const**,char const**,char const**,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,char const*,int *,int *) ;
 int FUNC_8 (scalar_t__*,int *,int *,char const**,char const**,char const**,int *,int *,int *,int *,int *,int *,char const**,char const**,char const**,int *,int *,int *,int *,int *,int *,scalar_t__*,int *,int *,int *,scalar_t__*,scalar_t__*,int *,char const*,int *,int *) ;
 int FUNC_9 (scalar_t__*,char const**,int *,int *,int *,char const**,char const**,char const**,int *,int *,char const*,int *,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

svn_error_t *
FUNC_10(svn_boolean_t *VAR_7,
                            svn_revnum_t *VAR_8,
                            const char **VAR_9,
                            const char **VAR_10,
                            const char **VAR_11,
                            svn_depth_t *VAR_12,
                            const char **VAR_13,
                            svn_wc__db_t *VAR_14,
                            const char *VAR_15,
                            svn_boolean_t VAR_16,
                            apr_pool_t *VAR_17,
                            apr_pool_t *VAR_18)
{
  const char *VAR_19;
  const char *VAR_20;
  const char *VAR_21;
  svn_revnum_t VAR_22;
  svn_wc__db_status_t VAR_23;
  svn_boolean_t VAR_24;
  svn_boolean_t VAR_25;

  const char *VAR_26;

  if (VAR_13)
    *VAR_13 = ((void*)0);
  if (!VAR_9)
    VAR_9 = &VAR_26;

  FUNC_0(FUNC_8(&VAR_23, ((void*)0), VAR_8, VAR_9,
                               VAR_10, VAR_11, ((void*)0), ((void*)0), ((void*)0),
                               VAR_12, ((void*)0), ((void*)0),
                               &VAR_19,
                               &VAR_20,
                               &VAR_21, &VAR_22,
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_25, ((void*)0),
                               ((void*)0), ((void*)0), &VAR_24, VAR_7,
                               VAR_14, VAR_15, VAR_17, VAR_18));

  if (*VAR_9)
    {
      return VAR_2;
    }

  if (VAR_23 == VAR_5 && !VAR_16)
    {
      if (VAR_7)
        *VAR_7 = VAR_0;

      return VAR_2;
    }

  if (VAR_19)
    {

      *VAR_9 = VAR_19;
      if (VAR_8)
        *VAR_8 = VAR_22;
      if (VAR_10)
        *VAR_10 = VAR_20;
      if (VAR_11)
        *VAR_11 = VAR_21;

      if (VAR_13 == ((void*)0))
        return VAR_2;
      else if (VAR_25)
        {
          *VAR_13 = FUNC_2(VAR_17, VAR_15);
          return VAR_2;
        }
    }

  {
    svn_boolean_t VAR_27 = VAR_0;

    if (VAR_23 == VAR_4
        || (VAR_23 == VAR_5 && VAR_24))
      VAR_27 = VAR_3;

    if (VAR_27)
      {
        const char *VAR_28;

        FUNC_0(FUNC_9(&VAR_23, &VAR_28, ((void*)0),
                                         ((void*)0), ((void*)0), &VAR_19,
                                         VAR_10,
                                         VAR_11, VAR_8,
                                         VAR_14, VAR_15,
                                         VAR_17, VAR_18));

        if (VAR_23 == VAR_4)
          {
            if (VAR_7)
              *VAR_7 = VAR_0;
            return VAR_2;
          }




        if (VAR_23 == VAR_6 && !VAR_19)
          return FUNC_5(VAR_1, ((void*)0),
                               FUNC_1("Incomplete copy information on path '%s'."),
                                   FUNC_3(VAR_15,
                                                          VAR_18));

        *VAR_9 = FUNC_6(
                                VAR_19,
                                FUNC_4(VAR_28,
                                                         VAR_15),
                                VAR_17);
        if (VAR_13)
          *VAR_13 = VAR_28;
      }
    else
      {
        if (VAR_7)
          *VAR_7 = VAR_0;

        FUNC_0(FUNC_7(((void*)0), ((void*)0), VAR_8, VAR_9,
                                         VAR_10, VAR_11, ((void*)0),
                                         ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                         ((void*)0), ((void*)0), ((void*)0),
                                         VAR_14, VAR_15,
                                         VAR_17, VAR_18));
      }

    return VAR_2;
  }
}
