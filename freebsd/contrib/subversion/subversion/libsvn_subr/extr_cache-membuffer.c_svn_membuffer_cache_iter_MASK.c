
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_iter_apr_hash_cb_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_boolean_t *VAR_1,
                          void *VAR_2,
                          svn_iter_apr_hash_cb_t VAR_3,
                          void *VAR_4,
                          apr_pool_t *VAR_5)
{
  return FUNC_1(VAR_0, ((void*)0),
                          FUNC_0("Can't iterate a membuffer-based cache"));
}
