
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_traversal_info_t ;
typedef int svn_wc_notify_func_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_delta_editor_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
struct compat_notify_baton_t {void* baton; int func; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct compat_notify_baton_t* FUNC_1 (int *,int) ;
 int VAR_1 ;
 int * FUNC_2 (int *,int *,char const*,int ,int ,int ,int ,int ,struct compat_notify_baton_t*,int ,void*,int *,int *,int *,int *,char const*,int *,int const**,void**,int *,int *) ;

svn_error_t *
FUNC_3(svn_revnum_t *VAR_2,
                         svn_wc_adm_access_t *VAR_3,
                         const char *VAR_4,
                         svn_boolean_t VAR_5,
                         svn_boolean_t VAR_6,
                         svn_wc_notify_func_t VAR_7,
                         void *VAR_8,
                         svn_cancel_func_t VAR_9,
                         void *VAR_10,
                         const char *VAR_11,
                         const svn_delta_editor_t **VAR_12,
                         void **VAR_13,
                         svn_wc_traversal_info_t *VAR_14,
                         apr_pool_t *VAR_15)
{

  struct compat_notify_baton_t *VAR_16 = FUNC_1(VAR_15, sizeof(*VAR_16));

  VAR_16->func = VAR_7;
  VAR_16->baton = VAR_8;

  return FUNC_2(VAR_2, VAR_3, VAR_4,
                                   VAR_5,
                                   FUNC_0(VAR_6), VAR_0,
                                   VAR_0, VAR_1, VAR_16,
                                   VAR_9, VAR_10, ((void*)0), ((void*)0),
                                   ((void*)0), ((void*)0),
                                   VAR_11, ((void*)0), VAR_12, VAR_13,
                                   VAR_14, VAR_15);
}
