
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int cancel_baton; int cancel_func; TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int svn_ra__provide_props_cb_t ;
typedef int svn_ra__provide_base_cb_t ;
typedef int svn_ra__get_copysrc_kind_cb_t ;
typedef int svn_error_t ;
typedef int svn_editor_t ;
typedef int svn_commit_callback2_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_6__ {int (* get_commit_ev2 ) (int **,TYPE_2__*,int *,int ,void*,int *,int ,int ,int ,int ,void*,int ,int ,int *,int *) ;} ;


 int FUNC_0 (int **,TYPE_2__*,int *,int ,void*,int *,int ,int ,int ,int ,void*,int ,int ,int *,int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int **,TYPE_2__*,int *,int ,void*,int *,int ,int ,int ,int ,void*,int ,int ,int *,int *) ;

svn_error_t *
FUNC_3(svn_editor_t **VAR_0,
                       svn_ra_session_t *VAR_1,
                       apr_hash_t *VAR_2,
                       svn_commit_callback2_t VAR_3,
                       void *VAR_4,
                       apr_hash_t *VAR_5,
                       svn_boolean_t VAR_6,
                       svn_ra__provide_base_cb_t VAR_7,
                       svn_ra__provide_props_cb_t VAR_8,
                       svn_ra__get_copysrc_kind_cb_t VAR_9,
                       void *VAR_10,
                       apr_pool_t *VAR_11,
                       apr_pool_t *VAR_12)
{
  if (VAR_1->vtable->get_commit_ev2 == ((void*)0))
    {



      return FUNC_1(FUNC_2(
                               VAR_0,
                               VAR_1,
                               VAR_2,
                               VAR_3, VAR_4,
                               VAR_5,
                               VAR_6,
                               VAR_7,
                               VAR_8,
                               VAR_9,
                               VAR_10,
                               VAR_1->cancel_func, VAR_1->cancel_baton,
                               VAR_11, VAR_12));
    }




  return FUNC_1(VAR_1->vtable->get_commit_ev2(
                           VAR_0,
                           VAR_1,
                           VAR_2,
                           VAR_3, VAR_4,
                           VAR_5,
                           VAR_6,
                           VAR_7,
                           VAR_8,
                           VAR_9,
                           VAR_10,
                           VAR_1->cancel_func, VAR_1->cancel_baton,
                           VAR_11, VAR_12));
}
