
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_wc_notify_state_t ;
typedef int svn_wc_context_t ;
typedef scalar_t__ svn_wc_conflict_resolver_func_t ;
typedef int svn_wc_adm_access_t ;
struct TYPE_7__ {int apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct conflict_func_1to2_baton {void* inner_baton; scalar_t__ inner_func; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;


 int FUNC_1 (char*) ;
 int * VAR_2 ;
 int FUNC_2 (char const**,char const*,int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_4 (int ,int *,int ) ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int *,int ,int *) ;
 int FUNC_8 (int *) ;
 TYPE_1__* FUNC_9 (int *,int *,char const*,int *,int *,int *,int const*,scalar_t__,int *,struct conflict_func_1to2_baton*,int *,int *,int *) ;

svn_error_t *
FUNC_10(svn_wc_notify_state_t *VAR_3,
                    const char *VAR_4,
                    svn_wc_adm_access_t *VAR_5,
                    apr_hash_t *VAR_6,
                    const apr_array_header_t *VAR_7,
                    svn_boolean_t VAR_8,
                    svn_boolean_t VAR_9,
                    svn_wc_conflict_resolver_func_t VAR_10,
                    void *VAR_11,
                    apr_pool_t *VAR_12)
{
  const char *VAR_13;
  svn_error_t *VAR_14;
  svn_wc_context_t *VAR_15;
  struct conflict_func_1to2_baton VAR_16;

  if (VAR_8 && !VAR_9)
    return FUNC_4(VAR_0, ((void*)0),
                            FUNC_1("base_merge=TRUE is no longer supported; "
                               "see notes/api-errata/1.7/wc006.txt"));

  FUNC_0(FUNC_2(&VAR_13, VAR_4, VAR_12));

  VAR_16.inner_func = VAR_10;
  VAR_16.inner_baton = VAR_11;

  FUNC_0(FUNC_7(&VAR_15, ((void*)0),
                                         FUNC_6(VAR_5),
                                         VAR_12));

  VAR_14 = FUNC_9(VAR_3,
                            VAR_15,
                            VAR_13,
                            ((void*)0) ,
                            ((void*)0) ,
                            VAR_6,
                            VAR_7,
                            VAR_9,
                            VAR_10 ? VAR_2
                                          : ((void*)0),
                            &VAR_16,
                            ((void*)0), ((void*)0),
                            VAR_12);

  if (VAR_14)
    switch(VAR_14->apr_err)
      {
        case 129:
        case 128:
          VAR_14->apr_err = VAR_1;
          break;
      }
  return FUNC_5(
            FUNC_3(VAR_14,
                                     FUNC_8(VAR_15)));
}
