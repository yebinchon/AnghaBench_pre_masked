
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int abspath; int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_sqlite__stmt_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_depth_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int * VAR_3 ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 char* FUNC_5 (char const*,char const*,int *) ;
 char* FUNC_6 (int ,char const*,int *) ;
 int FUNC_7 (int *,char const*,char*) ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,char*,int ,char const*) ;
 char* FUNC_12 (int *,int,int *) ;
 int FUNC_13 (int **,int ,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (scalar_t__*,int *) ;
 int FUNC_16 (int *,scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,TYPE_1__*,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_17(apr_hash_t **VAR_8,
                                svn_wc__db_wcroot_t *VAR_9,
                                const char *VAR_10,
                                svn_depth_t VAR_11,
                                apr_pool_t *VAR_12,
                                apr_pool_t *VAR_13)
{
  svn_sqlite__stmt_t *VAR_14;
  svn_boolean_t VAR_15;

  *VAR_8 = FUNC_2(VAR_12);


  FUNC_0(FUNC_13(&VAR_14, VAR_9->sdb,
                                    VAR_1));
  FUNC_0(FUNC_11(VAR_14, "is", VAR_9->wc_id, VAR_10));
  FUNC_0(FUNC_15(&VAR_15, VAR_14));

  if (VAR_15)
   {
      const char *VAR_16 = FUNC_12(VAR_14, 0,
                                                               ((void*)0));
      const char *VAR_17 = FUNC_6(VAR_9->abspath,
                                                       VAR_16,
                                                       VAR_12);
      FUNC_7(*VAR_8, VAR_17,
                    FUNC_12(VAR_14, 1, VAR_12));
    }
  FUNC_0(FUNC_14(VAR_14));

  if (VAR_11 == VAR_4)
    return VAR_3;


  if (VAR_11 == VAR_5
      || VAR_11 == VAR_6)
    {
      FUNC_0(FUNC_13(&VAR_14, VAR_9->sdb,
                                        VAR_0));
    }
  else
    {
      FUNC_0(FUNC_13(&VAR_14, VAR_9->sdb,
                                        VAR_2));
    }

  FUNC_0(FUNC_11(VAR_14, "is", VAR_9->wc_id, VAR_10));
  FUNC_0(FUNC_15(&VAR_15, VAR_14));

  while (VAR_15)
    {
      const char *VAR_18 = FUNC_12(VAR_14, 0,
                                                               ((void*)0));
      const char *VAR_19 = FUNC_6(VAR_9->abspath,
                                                       VAR_18,
                                                       VAR_12);
      FUNC_7(*VAR_8, VAR_19,
                    FUNC_12(VAR_14, 1, VAR_12));
      FUNC_0(FUNC_15(&VAR_15, VAR_14));
    }

  FUNC_0(FUNC_14(VAR_14));


  if (VAR_11 == VAR_5)
    {
      apr_hash_index_t *VAR_20;
      apr_pool_t *VAR_21 = FUNC_9(VAR_13);

      for (VAR_20 = FUNC_1(VAR_13, *VAR_8);
           VAR_20;
           VAR_20 = FUNC_3(VAR_20))
        {
          const char *VAR_22 = FUNC_4(VAR_20);
          const char *VAR_23;
          svn_node_kind_t VAR_24;

          FUNC_8(VAR_21);

          VAR_23 = FUNC_5(VAR_10, VAR_22,
                                              ((void*)0));

          if (! VAR_23)
            {
              continue;
            }

          FUNC_0(FUNC_16(((void*)0), &VAR_24, ((void*)0),
                                                    ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                                    ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                                    ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                                    VAR_9, VAR_23,
                                                    VAR_13,
                                                    VAR_13));


          if (VAR_24 != VAR_7)
            {
              FUNC_7(*VAR_8, VAR_22, ((void*)0));
            }
        }

      FUNC_10(VAR_21);
    }

  return VAR_3;
}
