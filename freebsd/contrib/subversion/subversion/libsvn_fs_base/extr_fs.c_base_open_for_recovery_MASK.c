
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_mutex__t ;
struct TYPE_3__ {int pool; int path; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (int ,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_1(svn_fs_t *VAR_1,
                       const char *VAR_2,
                       svn_mutex__t *VAR_3,
                       apr_pool_t *VAR_4,
                       apr_pool_t *VAR_5)
{

  VAR_1->path = FUNC_0(VAR_1->pool, VAR_2);

  return VAR_0;
}
