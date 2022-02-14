
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef scalar_t__ svn_mergeinfo_t ;
typedef int svn_mergeinfo_inheritance_t ;
typedef int * svn_mergeinfo_catalog_t ;
typedef int svn_error_t ;
struct TYPE_7__ {int wc_ctx; } ;
typedef TYPE_2__ svn_client_ctx_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 char* FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int *) ;
 char const* FUNC_7 (int *,char const*) ;
 scalar_t__ FUNC_8 (char const*,char const*) ;
 int FUNC_9 (scalar_t__*,scalar_t__*,int ,char const*,char const*,char const**,scalar_t__,TYPE_2__*,int *,int *) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (int *,char const*,scalar_t__) ;
 int FUNC_12 (scalar_t__*,int ,int *) ;
 int FUNC_13 (int *,char const**,char const**,int *,int ,char const*,int *,int *) ;
 int FUNC_14 (int **,int ,char const*,int ,int *,int *) ;

svn_error_t *
FUNC_15(svn_mergeinfo_catalog_t *VAR_2,
                                     svn_boolean_t *VAR_3,
                                     svn_boolean_t VAR_4,
                                     svn_mergeinfo_inheritance_t VAR_5,
                                     const char *VAR_6,
                                     const char *VAR_7,
                                     const char **VAR_8,
                                     svn_boolean_t VAR_9,
                                     svn_client_ctx_t *VAR_10,
                                     apr_pool_t *VAR_11,
                                     apr_pool_t *VAR_12)
{
  const char *VAR_13;
  svn_mergeinfo_t VAR_14;
  const char *VAR_15;

  FUNC_1(FUNC_10(VAR_6));
  *VAR_2 = ((void*)0);
  FUNC_0(FUNC_13(((void*)0), &VAR_13,
                                      &VAR_15, ((void*)0),
                                      VAR_10->wc_ctx, VAR_6,
                                      VAR_12, VAR_12));



  FUNC_0(FUNC_9(&VAR_14, VAR_3, VAR_5,
                                       VAR_6, VAR_7,
                                       VAR_8, VAR_9,
                                       VAR_10, VAR_11, VAR_12));



  if (VAR_14)
    {
      *VAR_2 = FUNC_3(VAR_11);
      FUNC_11(*VAR_2,
                    FUNC_7(VAR_11, VAR_13), VAR_14);
    }






  if (VAR_4)
    {
      apr_hash_t *VAR_16;
      apr_hash_index_t *VAR_17;

      FUNC_0(FUNC_14(&VAR_16,
                                              VAR_10->wc_ctx, VAR_6,
                                              VAR_1,
                                              VAR_12, VAR_12));


      for (VAR_17 = FUNC_2(VAR_12, VAR_16);
           VAR_17;
           VAR_17 = FUNC_4(VAR_17))
        {
          const char *VAR_18 = FUNC_5(VAR_17);
          svn_string_t *VAR_19 = FUNC_6(VAR_17);
          svn_mergeinfo_t VAR_20;
          const char *VAR_21;

          if (FUNC_8(VAR_18, VAR_6) == 0)
            continue;

          FUNC_0(FUNC_13(((void*)0), &VAR_21, ((void*)0), ((void*)0),
                                              VAR_10->wc_ctx, VAR_18,
                                              VAR_11, VAR_12));

          FUNC_0(FUNC_12(&VAR_20, VAR_19->data,
                                      VAR_11));




          if (*VAR_2 == ((void*)0))
            *VAR_2 = FUNC_3(VAR_11);

          FUNC_11(*VAR_2, VAR_21, VAR_20);
        }
    }

  return VAR_0;
}
