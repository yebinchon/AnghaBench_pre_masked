
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_1,
              const char *VAR_2,
              svn_node_kind_t VAR_3,
              svn_revnum_t VAR_4,
              apr_pool_t *VAR_5)
{



  return FUNC_1(
           VAR_0, ((void*)0),
           FUNC_0("The filesystem does not support 'absent' nodes"));
}
