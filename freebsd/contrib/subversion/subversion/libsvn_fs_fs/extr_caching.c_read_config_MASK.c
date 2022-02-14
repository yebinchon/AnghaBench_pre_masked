
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int config; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,char*) ;

__attribute__((used)) static svn_error_t *
FUNC_3(const char **VAR_6,
            svn_boolean_t *VAR_7,
            svn_boolean_t *VAR_8,
            svn_boolean_t *VAR_9,
            svn_fs_t *VAR_10,
            apr_pool_t *VAR_11)
{
  *VAR_6
    = FUNC_0(FUNC_2(VAR_10->config,
                                               VAR_3,
                                               ""),
                         VAR_11);




  *VAR_7
    = FUNC_1(VAR_10->config,
                         VAR_0,
                         VAR_5);
  *VAR_8
    = FUNC_1(VAR_10->config,
                         VAR_1,
                         VAR_5);





  *VAR_9
    = FUNC_1(VAR_10->config,
                         VAR_2,
                         VAR_5);
  return VAR_4;
}
