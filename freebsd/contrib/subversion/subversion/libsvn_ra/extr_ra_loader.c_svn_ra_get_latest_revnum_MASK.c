
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
typedef int apr_pool_t ;
struct TYPE_5__ {int * (* get_latest_revnum ) (TYPE_2__*,int *,int *) ;} ;


 int * FUNC_0 (TYPE_2__*,int *,int *) ;

svn_error_t *FUNC_1(svn_ra_session_t *VAR_0,
                                      svn_revnum_t *VAR_1,
                                      apr_pool_t *VAR_2)
{
  return VAR_0->vtable->get_latest_revnum(VAR_0, VAR_1, VAR_2);
}
