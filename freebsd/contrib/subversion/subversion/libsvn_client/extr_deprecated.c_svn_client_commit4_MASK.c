
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_commit_info_t ;
struct TYPE_4__ {struct downgrade_commit_copied_notify_baton* notify_baton2; int notify_func2; } ;
typedef TYPE_1__ svn_client_ctx_t ;
typedef int svn_boolean_t ;
struct downgrade_commit_copied_notify_baton {struct downgrade_commit_copied_notify_baton* orig_notify_baton2; int orig_notify_func2; } ;
struct capture_baton_t {int * pool; int ** info; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int const*,int ,int ,int ,int ,int const*,int const*,int ,struct capture_baton_t*,TYPE_1__*,int *) ;
 int * FUNC_2 (int *) ;

svn_error_t *
FUNC_3(svn_commit_info_t **VAR_4,
                   const apr_array_header_t *VAR_5,
                   svn_depth_t VAR_6,
                   svn_boolean_t VAR_7,
                   svn_boolean_t VAR_8,
                   const apr_array_header_t *VAR_9,
                   const apr_hash_t *VAR_10,
                   svn_client_ctx_t *VAR_11,
                   apr_pool_t *VAR_12)
{
  struct capture_baton_t VAR_13;
  struct downgrade_commit_copied_notify_baton VAR_14;
  svn_error_t *VAR_15;

  VAR_14.orig_notify_func2 = VAR_11->notify_func2;
  VAR_14.orig_notify_baton2 = VAR_11->notify_baton2;

  *VAR_4 = ((void*)0);
  VAR_13.info = VAR_4;
  VAR_13.pool = VAR_12;



  if (VAR_11->notify_func2)
    {
      VAR_11->notify_func2 = VAR_3;
      VAR_11->notify_baton2 = &VAR_14;
    }

  VAR_15 = FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_0,
                           VAR_9, VAR_10,
                           VAR_2, &VAR_13, VAR_11, VAR_12);


  VAR_11->notify_func2 = VAR_14.orig_notify_func2;
  VAR_11->notify_baton2 = VAR_14.orig_notify_baton2;

  FUNC_0(VAR_15);

  if (! *VAR_4)
    *VAR_4 = FUNC_2(VAR_12);

  return VAR_1;
}
