
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int svn_ra_session_t ;
typedef int svn_lock_t ;
typedef int svn_error_t ;
struct TYPE_12__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_dirent_t ;
typedef int svn_depth_t ;
typedef int * (* svn_client_info_receiver2_t ) (void*,char const*,int *,int *) ;
typedef int svn_client_info2_t ;
struct TYPE_13__ {int cancel_baton; int * (* cancel_func ) (int ) ;} ;
typedef TYPE_2__ svn_client_ctx_t ;
struct TYPE_14__ {int rev; } ;
typedef TYPE_3__ svn_client__pathrev_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * VAR_1 ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int *) ;
 int * FUNC_5 (int **,TYPE_1__*,int *,TYPE_3__*,int *) ;
 int * FUNC_6 (int ) ;
 char* FUNC_7 (TYPE_3__*,int *) ;
 TYPE_3__* FUNC_8 (TYPE_3__ const*,char const*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_9 (int *,char const*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int *,int **,int *,int *,char const*,int ,int ,int *) ;
 char* FUNC_14 (char const*,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_15(svn_ra_session_t *VAR_7,
              const svn_client__pathrev_t *VAR_8,
              const char *VAR_9,
              svn_client_info_receiver2_t VAR_10,
              void *VAR_11,
              svn_depth_t VAR_12,
              svn_client_ctx_t *VAR_13,
              apr_hash_t *VAR_14,
              apr_pool_t *VAR_15)
{
  apr_hash_t *VAR_16;
  apr_hash_index_t *VAR_17;
  apr_pool_t *VAR_18 = FUNC_11(VAR_15);

  FUNC_0(FUNC_13(VAR_7, &VAR_16, ((void*)0), ((void*)0),
                          VAR_9, VAR_8->rev, VAR_0, VAR_15));

  for (VAR_17 = FUNC_1(VAR_15, VAR_16); VAR_17; VAR_17 = FUNC_2(VAR_17))
    {
      const char *VAR_19, *VAR_20;
      svn_lock_t *VAR_21;
      svn_client_info2_t *VAR_22;
      const char *VAR_23 = FUNC_3(VAR_17);
      svn_dirent_t *VAR_24 = FUNC_4(VAR_17);
      svn_client__pathrev_t *VAR_25;

      FUNC_10(VAR_18);

      if (VAR_13->cancel_func)
        FUNC_0(VAR_13->cancel_func(VAR_13->cancel_baton));

      VAR_19 = FUNC_14(VAR_9, VAR_23, VAR_18);
      VAR_25 = FUNC_8(VAR_8, VAR_23, VAR_18);
      VAR_20 = FUNC_7(VAR_25, VAR_18);

      VAR_21 = FUNC_9(VAR_14, VAR_20);

      FUNC_0(FUNC_5(&VAR_22, VAR_24, VAR_21, VAR_25,
                                     VAR_18));

      if (VAR_12 >= VAR_3
          || (VAR_12 == VAR_2 && VAR_24->kind == VAR_6))
        {
          FUNC_0(VAR_10(VAR_11, VAR_19, VAR_22, VAR_18));
        }

      if (VAR_12 == VAR_4 && VAR_24->kind == VAR_5)
        {
          FUNC_0(FUNC_15(VAR_7, VAR_25, VAR_19,
                                VAR_10, VAR_11,
                                VAR_12, VAR_13, VAR_14, VAR_18));
        }
    }

  FUNC_12(VAR_18);

  return VAR_1;
}
