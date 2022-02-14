
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_changelist_receiver_t ;
typedef int svn_cancel_func_t ;
struct get_cl_fn_baton {int * clhash; void* callback_baton; int callback_func; int db; } ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int **,int const*,int *) ;
 int FUNC_3 (int ,char const*,int ,int const*,int ,struct get_cl_fn_baton*,int ,int ,void*,int *) ;

svn_error_t *
FUNC_4(svn_wc_context_t *VAR_2,
                       const char *VAR_3,
                       svn_depth_t VAR_4,
                       const apr_array_header_t *VAR_5,
                       svn_changelist_receiver_t VAR_6,
                       void *VAR_7,
                       svn_cancel_func_t VAR_8,
                       void *VAR_9,
                       apr_pool_t *VAR_10)
{
  struct get_cl_fn_baton VAR_11;

  VAR_11.db = VAR_2->db;
  VAR_11.clhash = ((void*)0);
  VAR_11.callback_func = VAR_6;
  VAR_11.callback_baton = VAR_7;

  if (VAR_5)
    FUNC_0(FUNC_2(&VAR_11.clhash, VAR_5,
                                       VAR_10));

  return FUNC_1(
    FUNC_3(VAR_2->db, VAR_3, VAR_0,
                                   VAR_5, VAR_1,
                                   &VAR_11, VAR_4,
                                   VAR_8, VAR_9,
                                   VAR_10));

}
