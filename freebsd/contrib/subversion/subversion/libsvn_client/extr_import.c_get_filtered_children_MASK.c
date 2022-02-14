
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int lock_state; int prop_state; int content_state; int kind; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef int svn_io_dirent2_t ;
typedef int svn_error_t ;
typedef int (* svn_client_import_filter_func_t ) (void*,scalar_t__*,char const*,int const*,int *) ;
struct TYPE_7__ {int notify_baton2; int (* notify_func2 ) (int ,TYPE_1__*,int *) ;} ;
typedef TYPE_2__ svn_client_ctx_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;
typedef int apr_array_header_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int ,TYPE_1__*,int *) ;
 char* FUNC_6 (char const*,char const*,int *) ;
 scalar_t__ FUNC_7 (int *,char const*) ;
 int FUNC_8 (int *,char const*,int *) ;
 int FUNC_9 (int **,char const*,int ,int *,int *) ;
 int VAR_3 ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 TYPE_1__* FUNC_13 (char*,int ,int *) ;
 scalar_t__ FUNC_14 (char const*,int *) ;
 scalar_t__ FUNC_15 (char const*,int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static svn_error_t *
FUNC_16(apr_hash_t **VAR_7,
                      const char *VAR_8,
                      apr_hash_t *VAR_9,
                      apr_array_header_t *VAR_10,
                      apr_array_header_t *VAR_11,
                      svn_client_import_filter_func_t VAR_12,
                      void *VAR_13,
                      svn_client_ctx_t *VAR_14,
                      apr_pool_t *VAR_15,
                      apr_pool_t *VAR_16)
{
  apr_hash_t *VAR_17;
  apr_hash_index_t *VAR_18;
  apr_pool_t *VAR_19 = FUNC_11(VAR_16);

  FUNC_0(FUNC_9(&VAR_17, VAR_8, VAR_2, VAR_15,
                              VAR_16));

  for (VAR_18 = FUNC_1(VAR_16, VAR_17); VAR_18; VAR_18 = FUNC_2(VAR_18))
    {
      const char *VAR_20 = FUNC_3(VAR_18);
      const svn_io_dirent2_t *VAR_21 = FUNC_4(VAR_18);
      const char *VAR_22;

      FUNC_10(VAR_19);

      VAR_22 = FUNC_6(VAR_8, VAR_20, VAR_19);

      if (FUNC_14(VAR_20, VAR_19))
        {






          if (VAR_14->notify_func2)
            {
              svn_wc_notify_t *VAR_23
                = FUNC_13(FUNC_6(VAR_22, VAR_20,
                                                       VAR_19),
                                       VAR_5, VAR_19);
              VAR_23->kind = VAR_3;
              VAR_23->content_state = VAR_23->prop_state
                = VAR_6;
              VAR_23->lock_state = VAR_4;
              VAR_14->notify_func2(VAR_14->notify_baton2, VAR_23, VAR_19);
            }

          FUNC_8(VAR_17, VAR_20, ((void*)0));
          continue;
        }

      if (FUNC_7(VAR_9, VAR_22))
        {
          FUNC_8(VAR_17, VAR_20, ((void*)0));
          continue;
        }

      if (VAR_10 && FUNC_15(VAR_20, VAR_10, VAR_19))
        {
          FUNC_8(VAR_17, VAR_20, ((void*)0));
          continue;
        }

      if (VAR_11 &&
          FUNC_15(VAR_20, VAR_11, VAR_19))
        {
          FUNC_8(VAR_17, VAR_20, ((void*)0));
          continue;
        }

      if (VAR_12)
        {
          svn_boolean_t VAR_24 = VAR_0;

          FUNC_0(VAR_12(VAR_13, &VAR_24, VAR_22,
                                  VAR_21, VAR_19));

          if (VAR_24)
            {
              FUNC_8(VAR_17, VAR_20, ((void*)0));
              continue;
            }
        }
    }
  FUNC_12(VAR_19);

  *VAR_7 = VAR_17;
  return VAR_1;
}
