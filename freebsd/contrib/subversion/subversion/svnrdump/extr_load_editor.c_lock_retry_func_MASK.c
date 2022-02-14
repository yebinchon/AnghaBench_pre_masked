
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_0,
                const svn_string_t *VAR_1,
                apr_pool_t *VAR_2)
{
  return FUNC_1(VAR_2,
                            FUNC_0("Failed to get lock on destination "
                              "repos, currently held by '%s'\n"),
                            VAR_1->data);
}
