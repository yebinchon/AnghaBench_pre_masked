
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_depth_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_5__ {int * (* get_locks ) (TYPE_2__*,int **,char const*,scalar_t__,int *) ;} ;


 int FUNC_0 (int) ;
 int * FUNC_1 (TYPE_2__*,int **,char const*,scalar_t__,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char const*) ;

svn_error_t *FUNC_3(svn_ra_session_t *VAR_4,
                               apr_hash_t **VAR_5,
                               const char *VAR_6,
                               svn_depth_t VAR_7,
                               apr_pool_t *VAR_8)
{
  FUNC_0(FUNC_2(VAR_6));
  FUNC_0((VAR_7 == VAR_0) ||
                 (VAR_7 == VAR_1) ||
                 (VAR_7 == VAR_2) ||
                 (VAR_7 == VAR_3));
  return VAR_4->vtable->get_locks(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}
