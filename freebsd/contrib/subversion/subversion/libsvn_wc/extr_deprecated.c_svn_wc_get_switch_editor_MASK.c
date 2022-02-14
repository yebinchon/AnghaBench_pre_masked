
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
 int * FUNC_2 (int *,int *,char const*,char const*,int ,int ,int ,int ,int ,struct compat_notify_baton_t*,int ,void*,int *,int *,char const*,int *,int const**,void**,int *,int *) ;

svn_error_t *
FUNC_3(svn_revnum_t *VAR_2,
                         svn_wc_adm_access_t *VAR_3,
                         const char *VAR_4,
                         const char *VAR_5,
                         svn_boolean_t VAR_6,
                         svn_boolean_t VAR_7,
                         svn_wc_notify_func_t VAR_8,
                         void *VAR_9,
                         svn_cancel_func_t VAR_10,
                         void *VAR_11,
                         const char *VAR_12,
                         const svn_delta_editor_t **VAR_13,
                         void **VAR_14,
                         svn_wc_traversal_info_t *VAR_15,
                         apr_pool_t *VAR_16)
{

  struct compat_notify_baton_t *VAR_17 = FUNC_1(VAR_16, sizeof(*VAR_17));

  VAR_17->func = VAR_8;
  VAR_17->baton = VAR_9;

  return FUNC_2(VAR_2, VAR_3, VAR_4,
                                   VAR_5, VAR_6,
                                   FUNC_0(VAR_7), VAR_0,
                                   VAR_0, VAR_1, VAR_17,
                                   VAR_10, VAR_11,
                                   ((void*)0), ((void*)0), VAR_12,
                                   ((void*)0), VAR_13, VAR_14, VAR_15,
                                   VAR_16);
}
