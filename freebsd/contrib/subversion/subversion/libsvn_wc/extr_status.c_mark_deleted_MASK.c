
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int repos_node_status; } ;
typedef TYPE_1__ svn_wc_status3_t ;
typedef int svn_error_t ;
struct status_baton {int real_status_baton; int * (* real_status_func ) (int ,char const*,TYPE_1__*,int *) ;} ;
typedef int apr_pool_t ;


 int * FUNC_0 (int ,char const*,TYPE_1__*,int *) ;
 TYPE_1__* FUNC_1 (TYPE_1__ const*,int *) ;
 int VAR_0 ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_1,
             const char *VAR_2,
             const svn_wc_status3_t *VAR_3,
             apr_pool_t *VAR_4)
{
  struct status_baton *VAR_5 = VAR_1;
  svn_wc_status3_t *VAR_6 = FUNC_1(VAR_3, VAR_4);
  VAR_6->repos_node_status = VAR_0;
  return VAR_5->real_status_func(VAR_5->real_status_baton, VAR_2,
                              VAR_6, VAR_4);
}
