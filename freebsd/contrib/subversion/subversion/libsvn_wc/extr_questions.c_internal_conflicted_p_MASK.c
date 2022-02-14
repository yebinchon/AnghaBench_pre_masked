
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_wc_conflict_reason_t ;
typedef scalar_t__ svn_wc_conflict_action_t ;
typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char const*,int *,int *) ;
 int VAR_3 ;
 int FUNC_2 (int *,int *,int*,int*,int*,int *,char const*,int *,int *,int *) ;
 int FUNC_3 (char const**,int *,int *,int *,int *,int *,char const*,int *,int *,int *) ;
 int FUNC_4 (char const**,char const**,char const**,int *,char const*,int *,int *,int *) ;
 int FUNC_5 (scalar_t__*,scalar_t__*,int *,int *,char const*,int *,int *,int *) ;
 int FUNC_6 (int *,char const*,int,int,int,int *,int *) ;
 int FUNC_7 (int **,int *,int *,int *,char const*,int *,int *) ;
 int FUNC_8 (int*,int *,char const*,int,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_boolean_t *VAR_6,
                      svn_boolean_t *VAR_7,
                      svn_boolean_t *VAR_8,
                      svn_boolean_t *VAR_9,
                      svn_wc__db_t *VAR_10,
                      const char *VAR_11,
                      apr_pool_t *VAR_12)
{
  svn_node_kind_t VAR_13;
  svn_skel_t *VAR_14;
  svn_boolean_t VAR_15 = VAR_0;
  svn_boolean_t VAR_16 = VAR_0;

  FUNC_0(FUNC_7(&VAR_14, ((void*)0), ((void*)0),
                                   VAR_10, VAR_11,
                                   VAR_12, VAR_12));

  if (!VAR_14)
    {
      if (VAR_6)
        *VAR_6 = VAR_0;
      if (VAR_7)
        *VAR_7 = VAR_0;
      if (VAR_8)
        *VAR_8 = VAR_0;
      if (VAR_9)
        *VAR_9 = VAR_0;

      return VAR_1;
    }

  FUNC_0(FUNC_2(((void*)0), ((void*)0), VAR_6,
                                     VAR_7, VAR_8,
                                     VAR_10, VAR_11, VAR_14,
                                     VAR_12, VAR_12));

  if (VAR_6 && *VAR_6)
    {
      const char *VAR_17;
      const char *VAR_18;
      const char *VAR_19;
      svn_boolean_t VAR_20 = VAR_0;
      FUNC_0(FUNC_4(&VAR_17,
                                                  &VAR_18,
                                                  &VAR_19,
                                                  VAR_10, VAR_11, VAR_14,
                                                  VAR_12, VAR_12));

      if (VAR_17)
        {
          FUNC_0(FUNC_1(VAR_17, &VAR_13, VAR_12));

          *VAR_6 = (VAR_13 == VAR_3);

          if (*VAR_6)
            VAR_20 = VAR_2;
        }

      if (!VAR_20 && VAR_19)
        {
          FUNC_0(FUNC_1(VAR_19, &VAR_13, VAR_12));

          *VAR_6 = (VAR_13 == VAR_3);

          if (*VAR_6)
            VAR_20 = VAR_2;
        }

        if (!VAR_20 && VAR_18)
        {
          FUNC_0(FUNC_1(VAR_18, &VAR_13, VAR_12));

          *VAR_6 = (VAR_13 == VAR_3);

          if (*VAR_6)
            VAR_20 = VAR_2;
        }

        if (!VAR_20 && (VAR_17 || VAR_19 || VAR_18))
          VAR_15 = VAR_2;
    }

  if (VAR_7 && *VAR_7)
    {
      const char *VAR_21;

      FUNC_0(FUNC_3(&VAR_21,
                                                  ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                                  VAR_10, VAR_11, VAR_14,
                                                  VAR_12, VAR_12));

      if (VAR_21)
        {
          FUNC_0(FUNC_1(VAR_21, &VAR_13, VAR_12));

          *VAR_7 = (VAR_13 == VAR_3);

          if (! *VAR_7)
            VAR_16 = VAR_2;
        }
    }

  if (VAR_9)
    {
      *VAR_9 = VAR_0;
      if (VAR_8 && *VAR_8)
        {
          svn_wc_conflict_reason_t VAR_22;
          svn_wc_conflict_action_t VAR_23;

          FUNC_0(FUNC_5(&VAR_22, &VAR_23, ((void*)0),
                                                      VAR_10, VAR_11,
                                                      VAR_14,
                                                      VAR_12,
                                                      VAR_12));

          if (VAR_22 == VAR_5
              && VAR_23 == VAR_4)
            {
              *VAR_8 = VAR_0;
              *VAR_9 = VAR_2;
            }
        }
    }

  if (VAR_15 || VAR_16)
    {
      svn_boolean_t VAR_24;


      FUNC_0(FUNC_8(&VAR_24, VAR_10, VAR_11, VAR_0,
                                          VAR_12));
      if (VAR_24)
        FUNC_0(FUNC_6(VAR_10, VAR_11,
                                            VAR_15,
                                            VAR_16,
                                            VAR_0 ,
                                            ((void*)0) ,
                                            VAR_12));
    }

  return VAR_1;
}
