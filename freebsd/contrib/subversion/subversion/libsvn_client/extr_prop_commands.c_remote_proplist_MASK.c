
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef int svn_proplist_receiver2_t ;
typedef scalar_t__ svn_prop_kind_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
struct TYPE_3__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_dirent_t ;
typedef scalar_t__ svn_depth_t ;
typedef int * (* svn_cancel_func_t ) (void*) ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_ssize_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;
typedef int apr_array_header_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,char const*,int ,int *) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (int *) ;
 int * FUNC_9 (char const*,int *,int *,int ,void*,int *) ;
 int * FUNC_10 (int *,char const*,int *,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int * FUNC_11 (int ,int *,int ,char const*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 char* FUNC_12 (char const*,char const*,int *) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_16 (char const*) ;
 int * FUNC_17 (int *,int **,int *,int **,char const*,int ,int ,int *) ;
 int * FUNC_18 (int *,char const*,int ,int *,int *,int **,int *) ;
 int * FUNC_19 (int *,int **,char const*,int ,int *,int *) ;
 int * FUNC_20 (int *,char const**,int *) ;
 char* FUNC_21 (char const*,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_22(const char *VAR_11,
                const char *VAR_12,
                svn_node_kind_t VAR_13,
                svn_revnum_t VAR_14,
                svn_ra_session_t *VAR_15,
                svn_boolean_t VAR_16,
                svn_boolean_t VAR_17,
                svn_depth_t VAR_18,
                svn_proplist_receiver2_t VAR_19,
                void *VAR_20,
                svn_cancel_func_t VAR_21,
                void *VAR_22,
                apr_pool_t *VAR_23)
{
  apr_hash_t *VAR_24;
  apr_hash_t *VAR_25 = ((void*)0);
  apr_hash_index_t *VAR_26;
  const char *VAR_27 =
    FUNC_12(VAR_11, VAR_12, VAR_23);
  apr_array_header_t *VAR_28;




  if (VAR_13 == VAR_8)
    {
      FUNC_0(FUNC_17(VAR_15,
                              (VAR_18 > VAR_5) ? &VAR_24 : ((void*)0),
                              ((void*)0), &VAR_25, VAR_12, VAR_14,
                              VAR_1, VAR_23));
    }
  else if (VAR_13 == VAR_9)
    {
      FUNC_0(FUNC_18(VAR_15, VAR_12, VAR_14,
                              ((void*)0), ((void*)0), &VAR_25, VAR_23));
    }
  else
    {
      return FUNC_11(VAR_2, ((void*)0),
                               FUNC_1("Unknown node kind for '%s'"),
                               VAR_27);
    }

  if (VAR_17)
    {
      const char *VAR_29;

      FUNC_0(FUNC_19(VAR_15, &VAR_28,
                                         VAR_12, VAR_14,
                                         VAR_23, VAR_23));
      FUNC_0(FUNC_20(VAR_15, &VAR_29,
                                     VAR_23));
      FUNC_0(FUNC_10(VAR_28,
                                                 VAR_29,
                                                 VAR_23,
                                                 VAR_23));
    }
  else
    {
      VAR_28 = ((void*)0);
    }

  if (!VAR_16)
    VAR_25 = ((void*)0);
  else
    {




      for (VAR_26 = FUNC_3(VAR_23, VAR_25);
           VAR_26;
           VAR_26 = FUNC_4(VAR_26))
        {
          const char *VAR_30 = FUNC_6(VAR_26);
          apr_ssize_t VAR_31 = FUNC_7(VAR_26);
          svn_prop_kind_t VAR_32;

          VAR_32 = FUNC_16(VAR_30);

          if (VAR_32 != VAR_10)
            {
              FUNC_5(VAR_25, VAR_30, VAR_31, ((void*)0));
            }
        }
    }

  FUNC_0(FUNC_9(VAR_27, VAR_25, VAR_28,
                        VAR_19, VAR_20, VAR_23));

  if (VAR_18 > VAR_5
      && VAR_16
      && (VAR_13 == VAR_8) && (FUNC_2(VAR_24) > 0))
    {
      apr_pool_t *VAR_33 = FUNC_14(VAR_23);

      for (VAR_26 = FUNC_3(VAR_23, VAR_24);
           VAR_26;
           VAR_26 = FUNC_4(VAR_26))
        {
          const char *VAR_34 = FUNC_6(VAR_26);
          svn_dirent_t *VAR_35 = FUNC_8(VAR_26);
          const char *VAR_36;

          if (VAR_21)
            FUNC_0(VAR_21(VAR_22));

          FUNC_13(VAR_33);

          VAR_36 = FUNC_21(VAR_12,
                                                 VAR_34, VAR_33);

          if (VAR_35->kind == VAR_9
              || VAR_18 > VAR_6)
            {
              svn_depth_t VAR_37 = VAR_18;

              if (VAR_18 == VAR_7)
                VAR_37 = VAR_5;

              FUNC_0(FUNC_22(VAR_11,
                                      VAR_36,
                                      VAR_35->kind,
                                      VAR_14,
                                      VAR_15,
                                      VAR_4 ,
                                      VAR_0 ,
                                      VAR_37,
                                      VAR_19, VAR_20,
                                      VAR_21, VAR_22,
                                      VAR_33));
            }
        }

      FUNC_15(VAR_33);
    }

  return VAR_3;
}
