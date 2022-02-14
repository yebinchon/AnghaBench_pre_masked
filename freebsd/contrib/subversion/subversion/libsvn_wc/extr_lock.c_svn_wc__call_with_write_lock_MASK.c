
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_context_t ;
typedef int (* svn_wc__with_write_lock_func_t ) (void*,int *,int *) ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (char const**,int *,char const*,int ,int *,int *) ;
 int * FUNC_4 (int *,char const*,int *) ;

svn_error_t *
FUNC_5(svn_wc__with_write_lock_func_t VAR_0,
                             void *VAR_1,
                             svn_wc_context_t *VAR_2,
                             const char *VAR_3,
                             svn_boolean_t VAR_4,
                             apr_pool_t *VAR_5,
                             apr_pool_t *VAR_6)
{
  svn_error_t *VAR_7, *VAR_8;
  const char *VAR_9;

  FUNC_0(FUNC_3(&VAR_9, VAR_2, VAR_3,
                                     VAR_4, VAR_6, VAR_6));
  VAR_7 = FUNC_2(VAR_0(VAR_1, VAR_5, VAR_6));
  VAR_8 = FUNC_4(VAR_2, VAR_9, VAR_6);
  return FUNC_1(VAR_7, VAR_8);
}
