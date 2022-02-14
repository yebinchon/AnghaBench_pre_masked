
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int svn_error_t ;
typedef int svn_delta_editor_t ;
typedef int svn_commit_callback2_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_5__ {int * (* get_commit_editor ) (TYPE_2__*,int const**,void**,int *,int ,void*,int *,int ,int *) ;} ;


 int * FUNC_0 (TYPE_2__*,int const**,void**,int *,int ,void*,int *,int ,int *) ;

svn_error_t *FUNC_1(svn_ra_session_t *VAR_0,
                                       const svn_delta_editor_t **VAR_1,
                                       void **VAR_2,
                                       apr_hash_t *VAR_3,
                                       svn_commit_callback2_t VAR_4,
                                       void *VAR_5,
                                       apr_hash_t *VAR_6,
                                       svn_boolean_t VAR_7,
                                       apr_pool_t *VAR_8)
{
  return VAR_0->vtable->get_commit_editor(VAR_0, VAR_1, VAR_2,
                                            VAR_3,
                                            VAR_4, VAR_5,
                                            VAR_6, VAR_7, VAR_8);
}
