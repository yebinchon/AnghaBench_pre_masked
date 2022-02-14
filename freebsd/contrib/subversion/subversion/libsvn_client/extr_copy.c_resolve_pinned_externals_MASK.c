
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_ra_session_t ;
typedef int svn_error_t ;
struct TYPE_6__ {int wc_ctx; } ;
typedef TYPE_1__ svn_client_ctx_t ;
struct TYPE_7__ {int src_abspath_or_url; int src_revnum; } ;
typedef TYPE_2__ svn_client__copy_pair_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 int * VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;
 void* FUNC_7 (int *) ;
 int FUNC_8 (int **,int *,int const*,char const*,char const*,TYPE_1__*,int *,int *) ;
 int FUNC_9 (char const**,int *,int ,int *) ;
 int FUNC_10 (int *,int *,int ,int ,char*,int ,int ,int *,int ,int *,int *) ;
 int VAR_2 ;
 char* FUNC_11 (int ,char const*) ;
 int FUNC_12 (int *,char const*,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,char const*,int *) ;
 int * FUNC_18 (char const*,int *) ;
 char* FUNC_19 (int ,char const*,int *) ;
 int FUNC_20 (int **,int *,int ,int ,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_21(apr_hash_t **VAR_4,
                         const apr_hash_t *VAR_5,
                         svn_client__copy_pair_t *VAR_6,
                         svn_ra_session_t *VAR_7,
                         const char *VAR_8,
                         svn_client_ctx_t *VAR_9,
                         apr_pool_t *VAR_10,
                         apr_pool_t *VAR_11)
{
  const char *VAR_12 = ((void*)0);
  apr_hash_t *VAR_13;
  apr_hash_index_t *VAR_14;
  apr_pool_t *VAR_15;

  *VAR_4 = FUNC_4(VAR_10);

  if (FUNC_13(VAR_6->src_abspath_or_url))
    {
      FUNC_0(FUNC_9(&VAR_12, VAR_7,
                                                VAR_6->src_abspath_or_url,
                                                VAR_11));
      VAR_13 = FUNC_4(VAR_11);
      FUNC_0(FUNC_10(VAR_13, ((void*)0),
                                         VAR_1,
                                         VAR_6->src_abspath_or_url, "",
                                         VAR_3,
                                         VAR_6->src_revnum,
                                         VAR_7,
                                         VAR_2,
                                         VAR_11,
                                         VAR_11));
    }
  else
    {
      FUNC_0(FUNC_20(&VAR_13, ((void*)0),
                                                   VAR_9->wc_ctx,
                                                   VAR_6->src_abspath_or_url,
                                                   VAR_2,
                                                   VAR_11, VAR_11));


      for (VAR_14 = FUNC_3(VAR_11, VAR_13);
           VAR_14;
           VAR_14 = FUNC_5(VAR_14))
        {
          const char *VAR_16 = FUNC_6(VAR_14);
          const char *VAR_17 = FUNC_7(VAR_14);
          svn_string_t *VAR_18 = FUNC_18(VAR_17, VAR_11);

          FUNC_12(VAR_13, VAR_16, VAR_18);
        }
    }

  if (FUNC_2(VAR_13) == 0)
    {
      if (VAR_12)
        FUNC_0(FUNC_17(VAR_7, VAR_12, VAR_11));
      return VAR_0;
    }

  VAR_15 = FUNC_15(VAR_11);
  for (VAR_14 = FUNC_3(VAR_11, VAR_13);
       VAR_14;
       VAR_14 = FUNC_5(VAR_14))
    {
      const char *VAR_19 = FUNC_6(VAR_14);
      svn_string_t *VAR_20 = FUNC_7(VAR_14);
      const char *VAR_21;
      svn_string_t *VAR_22;

      FUNC_14(VAR_15);

      FUNC_0(FUNC_8(&VAR_22, VAR_20,
                                 VAR_5,
                                 VAR_8, VAR_19, VAR_9,
                                 VAR_10, VAR_15));
      if (VAR_22)
        {
          if (FUNC_13(VAR_6->src_abspath_or_url))
            VAR_21 = FUNC_19(VAR_6->src_abspath_or_url,
                                            VAR_19,
                                            VAR_10);
          else
            VAR_21 = FUNC_11(VAR_6->src_abspath_or_url,
                                               VAR_19);
          FUNC_1(VAR_21);

          FUNC_12(*VAR_4, VAR_21, VAR_22);
        }
    }
  FUNC_16(VAR_15);

  if (VAR_12)
    FUNC_0(FUNC_17(VAR_7, VAR_12, VAR_11));

  return VAR_0;
}
