
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int found_entry; } ;
typedef TYPE_1__ svn_wc_entry_callbacks_t ;
struct TYPE_6__ {int handle_error; int found_entry; int member_0; } ;
typedef TYPE_2__ svn_wc_entry_callbacks2_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char const*,int *,TYPE_2__*,void*,int ,int ,int ,void*,int *) ;

svn_error_t *
FUNC_1(const char *VAR_2,
                     svn_wc_adm_access_t *VAR_3,
                     const svn_wc_entry_callbacks_t *VAR_4,
                     void *VAR_5,
                     svn_boolean_t VAR_6,
                     svn_cancel_func_t VAR_7,
                     void *VAR_8,
                     apr_pool_t *VAR_9)
{
  svn_wc_entry_callbacks2_t VAR_10 = { 0 };
  VAR_10 = VAR_4->found_entry;
  VAR_10 = VAR_1;
  return FUNC_0(VAR_2, VAR_3,
                              &VAR_10, VAR_5, VAR_0,
                              VAR_6, VAR_7, VAR_8, VAR_9);
}
