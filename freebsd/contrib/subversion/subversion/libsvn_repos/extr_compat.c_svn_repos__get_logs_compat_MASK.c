
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_repos_t ;
typedef int svn_repos_authz_func_t ;
typedef int svn_log_entry_receiver_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_4__ {void* inner_baton; int inner; int * changes; int * changes_pool; } ;
typedef TYPE_1__ log_entry_receiver_baton_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int const*,int ,int ,int,scalar_t__,scalar_t__,int const*,int ,void*,int *,TYPE_1__*,int ,TYPE_1__*,int *) ;

svn_error_t *
FUNC_4(svn_repos_t *VAR_3,
                           const apr_array_header_t *VAR_4,
                           svn_revnum_t VAR_5,
                           svn_revnum_t VAR_6,
                           int VAR_7,
                           svn_boolean_t VAR_8,
                           svn_boolean_t VAR_9,
                           svn_boolean_t VAR_10,
                           const apr_array_header_t *VAR_11,
                           svn_repos_authz_func_t VAR_12,
                           void *VAR_13,
                           svn_log_entry_receiver_t VAR_14,
                           void *VAR_15,
                           apr_pool_t *VAR_16)
{
  apr_pool_t *VAR_17 = FUNC_1(VAR_16);

  log_entry_receiver_baton_t VAR_18;
  VAR_18.changes_pool = VAR_17;
  VAR_18.changes = ((void*)0);
  VAR_18.inner = VAR_14;
  VAR_18.inner_baton = VAR_15;

  FUNC_0(FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
                              VAR_9,
                              VAR_10,
                              VAR_11,
                              VAR_12, VAR_13,
                              VAR_8
                                ? VAR_2
                                : ((void*)0),
                              &VAR_18,
                              VAR_1, &VAR_18,
                              VAR_16));

  FUNC_2(VAR_17);
  return VAR_0;
}
