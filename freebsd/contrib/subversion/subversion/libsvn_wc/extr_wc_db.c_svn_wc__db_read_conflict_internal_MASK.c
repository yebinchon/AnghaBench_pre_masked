
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_skel_t ;
typedef void* svn_node_kind_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (scalar_t__*,scalar_t__) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_1__*,char const*,int *) ;
 int VAR_6 ;
 int * FUNC_4 (int *,int *) ;
 int * FUNC_5 (int ,int *,int ,int ) ;
 int * FUNC_6 (int *) ;
 void* VAR_7 ;
 int * FUNC_7 (void const*,int ,int *) ;
 int * FUNC_8 (int *,char*,int ,char const*) ;
 void* FUNC_9 (int *,int,int *,int *) ;
 int FUNC_10 (int *,int ) ;
 int * FUNC_11 (int **,int *,int,int *,int *) ;
 void* FUNC_12 (int *,int,int ) ;
 int * FUNC_13 (int **,int ,int ) ;
 int * FUNC_14 (int *) ;
 int * FUNC_15 (scalar_t__*,int *) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

svn_error_t *
FUNC_16(svn_skel_t **VAR_12,
                                  svn_node_kind_t *VAR_13,
                                  apr_hash_t **VAR_14,
                                  svn_wc__db_wcroot_t *VAR_15,
                                  const char *VAR_16,
                                  apr_pool_t *VAR_17,
                                  apr_pool_t *VAR_18)
{
  svn_sqlite__stmt_t *VAR_19;
  svn_boolean_t VAR_20;

  if (VAR_13)
    *VAR_13 = VAR_7;
  if (VAR_14)
    *VAR_14 = ((void*)0);


  FUNC_0(FUNC_13(&VAR_19, VAR_15->sdb,
                                    VAR_1));
  FUNC_0(FUNC_8(VAR_19, "is", VAR_15->wc_id, VAR_16));

  FUNC_0(FUNC_15(&VAR_20, VAR_19));

  if (VAR_20)
    {
      apr_size_t VAR_21;
      const void *VAR_22;


      VAR_22 = FUNC_9(VAR_19, 2, &VAR_21, VAR_17);

      if (VAR_22)
        *VAR_12 = FUNC_7(VAR_22, VAR_21, VAR_17);
      else
        *VAR_12 = ((void*)0);

      if (VAR_14)
        {
          svn_error_t *VAR_23;

          VAR_23 = FUNC_6(FUNC_11(VAR_14, VAR_19, 1,
                                                              VAR_17,
                                                              VAR_18));

          if (VAR_23)
            return FUNC_4(VAR_23, FUNC_14(VAR_19));
        }
    }
  else
    *VAR_12 = ((void*)0);

  FUNC_0(FUNC_14(VAR_19));

  if (!VAR_20 || VAR_13 || (VAR_14 && !*VAR_14))
    {
      svn_error_t *VAR_24 = ((void*)0);
      svn_boolean_t VAR_25 = VAR_0;

      FUNC_0(FUNC_13(&VAR_19, VAR_15->sdb,
                                        VAR_2));

      FUNC_0(FUNC_8(VAR_19, "is", VAR_15->wc_id,
                                VAR_16));

      FUNC_0(FUNC_15(&VAR_25, VAR_19));

      if (VAR_25)
        {
          if (VAR_13)
            {
              svn_wc__db_status_t VAR_26;
              int VAR_27 = FUNC_10(VAR_19, 0);

              VAR_26 = FUNC_12(VAR_19, 3, VAR_6);

              if (VAR_27 > 0)
                VAR_24 = FUNC_2(&VAR_26, VAR_26);

              if (!VAR_24 && (VAR_26 == VAR_11
                           || VAR_26 == VAR_8
                           || VAR_26 == VAR_9
                           || VAR_26 == VAR_10))
                {
                  *VAR_13 = FUNC_12(VAR_19, 4, VAR_5);
                }
            }


          if (!VAR_24 && (VAR_14 && !*VAR_14))
            {
              VAR_24 = FUNC_11(VAR_14, VAR_19, 14,
                                                  VAR_17, VAR_18);
            }
        }

      FUNC_0(FUNC_4(VAR_24, FUNC_14(VAR_19)));

      if (!VAR_20 && !VAR_25)
        {
          return FUNC_5(VAR_3, ((void*)0),
                                   FUNC_1("The node '%s' was not found."),
                                   FUNC_3(VAR_15,
                                                          VAR_16,
                                                          VAR_18));
        }
    }

  return VAR_4;
}
