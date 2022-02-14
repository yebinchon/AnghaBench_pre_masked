
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_revnum_t ;
struct TYPE_6__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {int * (* rev_prop ) (TYPE_2__*,int ,char const*,int **,int *) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (TYPE_2__*,int ,char const*,int **,int *) ;

svn_error_t *FUNC_3(svn_ra_session_t *VAR_0,
                             svn_revnum_t VAR_1,
                             const char *VAR_2,
                             svn_string_t **VAR_3,
                             apr_pool_t *VAR_4)
{
  FUNC_0(FUNC_1(VAR_1));
  return VAR_0->vtable->rev_prop(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
