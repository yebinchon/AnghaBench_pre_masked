
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_19__ {int data; } ;
typedef TYPE_2__ svn_string_t ;
struct TYPE_18__ {int member_0; } ;
struct TYPE_20__ {TYPE_1__ member_1; int member_0; } ;
typedef TYPE_3__ svn_opt_revision_t ;
typedef int * svn_mergeinfo_t ;
struct TYPE_21__ {scalar_t__ apr_err; } ;
typedef TYPE_4__ svn_error_t ;
typedef int svn_depth_t ;
struct TYPE_22__ {int wc_ctx; } ;
typedef TYPE_5__ svn_client_ctx_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 TYPE_2__* FUNC_5 (int *) ;
 int FUNC_6 (int **,int *,int ,char const*,TYPE_3__*,TYPE_3__*,int *,int ,int *,TYPE_5__*,int *,int *) ;
 int FUNC_7 (char const*,int *) ;
 TYPE_4__* FUNC_8 (int ,TYPE_4__*,int ,int ) ;
 TYPE_4__* FUNC_9 (TYPE_4__*) ;
 scalar_t__ FUNC_10 (int *,char const*) ;
 int FUNC_11 (int *,char const*,int *) ;
 TYPE_4__* FUNC_12 (int **,int ,int *) ;
 int VAR_4 ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int **,int ,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_17(apr_hash_t **VAR_5,
                                  const char *VAR_6,
                                  svn_depth_t VAR_7,
                                  svn_client_ctx_t *VAR_8,
                                  apr_pool_t *VAR_9,
                                  apr_pool_t *VAR_10)
{
  svn_opt_revision_t VAR_11 = { VAR_4, 0 };
  apr_pool_t *VAR_12 = FUNC_14(VAR_10);
  apr_hash_index_t *VAR_13;
  apr_hash_t *VAR_14;

  FUNC_0(FUNC_6(VAR_5, ((void*)0),
                              VAR_3, VAR_6,
                              &VAR_11, &VAR_11, ((void*)0),
                              VAR_7, ((void*)0), VAR_8, VAR_9, VAR_10));

  FUNC_0(FUNC_16(&VAR_14, VAR_8->wc_ctx,
                                          VAR_6, VAR_10,
                                          VAR_10));


  for (VAR_13 = FUNC_2(VAR_10, *VAR_5);
       VAR_13;
       VAR_13 = FUNC_3(VAR_13))
    {
      const char *VAR_15 = FUNC_4(VAR_13);
      svn_string_t *VAR_16 = FUNC_5(VAR_13);
      svn_mergeinfo_t VAR_17;
      svn_error_t *VAR_18;



      if (FUNC_10(VAR_14, VAR_15))
        {
          FUNC_11(*VAR_5, VAR_15, ((void*)0));
          continue;
        }

      FUNC_13(VAR_12);

      VAR_18 = FUNC_12(&VAR_17, VAR_16->data,
                                VAR_9);
      if (VAR_18)
        {
          if (VAR_18->apr_err == VAR_1)
            {
              VAR_18 = FUNC_8(
                VAR_0, VAR_18,
                FUNC_1("Invalid mergeinfo detected on '%s', "
                  "merge tracking not possible"),
                FUNC_7(VAR_15, VAR_10));
            }
          return FUNC_9(VAR_18);
        }
      FUNC_11(*VAR_5, VAR_15, VAR_17);
    }
  FUNC_15(VAR_12);

  return VAR_2;
}
