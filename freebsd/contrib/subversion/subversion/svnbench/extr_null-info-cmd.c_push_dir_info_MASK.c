
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_ra_session_t ;
typedef int svn_error_t ;
struct TYPE_9__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_dirent_t ;
typedef int svn_depth_t ;
struct TYPE_10__ {int cancel_baton; int * (* cancel_func ) (int ) ;} ;
typedef TYPE_2__ svn_client_ctx_t ;
struct TYPE_11__ {int rev; } ;
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
 int * FUNC_5 (int ) ;
 TYPE_3__* FUNC_6 (TYPE_3__ const*,char const*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *,int **,int *,int *,char const*,int ,int ,int *) ;
 char* FUNC_11 (char const*,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_12(svn_ra_session_t *VAR_7,
              const svn_client__pathrev_t *VAR_8,
              const char *VAR_9,
              int *VAR_10,
              svn_depth_t VAR_11,
              svn_client_ctx_t *VAR_12,
              apr_pool_t *VAR_13)
{
  apr_hash_t *VAR_14;
  apr_hash_index_t *VAR_15;
  apr_pool_t *VAR_16 = FUNC_8(VAR_13);

  FUNC_0(FUNC_10(VAR_7, &VAR_14, ((void*)0), ((void*)0),
                          VAR_9, VAR_8->rev, VAR_0, VAR_13));

  for (VAR_15 = FUNC_1(VAR_13, VAR_14); VAR_15; VAR_15 = FUNC_2(VAR_15))
    {
      const char *VAR_17;
      const char *VAR_18 = FUNC_3(VAR_15);
      svn_dirent_t *VAR_19 = FUNC_4(VAR_15);
      svn_client__pathrev_t *VAR_20;

      FUNC_7(VAR_16);

      if (VAR_12->cancel_func)
        FUNC_0(VAR_12->cancel_func(VAR_12->cancel_baton));

      VAR_17 = FUNC_11(VAR_9, VAR_18, VAR_16);
      VAR_20 = FUNC_6(VAR_8, VAR_18, VAR_16);

      if (VAR_11 >= VAR_3
          || (VAR_11 == VAR_2 && VAR_19->kind == VAR_6))
        ++(*VAR_10);

      if (VAR_11 == VAR_4 && VAR_19->kind == VAR_5)
        FUNC_0(FUNC_12(VAR_7, VAR_20, VAR_17,
                              VAR_10, VAR_11, VAR_12, VAR_16));
    }

  FUNC_9(VAR_16);

  return VAR_1;
}
