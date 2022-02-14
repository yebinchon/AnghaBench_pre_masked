
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_6__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int svn_error_t ;
typedef int svn_delta_editor_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {int * (* replay ) (TYPE_2__*,int ,int ,int ,int const*,void*,int *) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (TYPE_2__*,int ,int ,int ,int const*,void*,int *) ;

svn_error_t *FUNC_3(svn_ra_session_t *VAR_0,
                           svn_revnum_t VAR_1,
                           svn_revnum_t VAR_2,
                           svn_boolean_t VAR_3,
                           const svn_delta_editor_t *VAR_4,
                           void *VAR_5,
                           apr_pool_t *VAR_6)
{
  FUNC_0(FUNC_1(VAR_1)
                 && FUNC_1(VAR_2));
  return VAR_0->vtable->replay(VAR_0, VAR_1, VAR_2,
                                 VAR_3, VAR_4, VAR_5, VAR_6);
}
