
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_proc_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;
typedef int apr_exit_why_e ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char const*,char const*,char const* const*,int *,int ,int ,int *,int ,int *,int ,int *,int *) ;
 int * FUNC_2 (int *,char const*,int*,int *,int *) ;

svn_error_t *
FUNC_3(const char *VAR_1,
               const char *VAR_2,
               const char *const *VAR_3,
               int *VAR_4,
               apr_exit_why_e *VAR_5,
               svn_boolean_t VAR_6,
               apr_file_t *VAR_7,
               apr_file_t *VAR_8,
               apr_file_t *VAR_9,
               apr_pool_t *VAR_10)
{
  apr_proc_t VAR_11;

  FUNC_0(FUNC_1(&VAR_11, VAR_1, VAR_2, VAR_3, ((void*)0), VAR_6,
                            VAR_0, VAR_7, VAR_0, VAR_8, VAR_0, VAR_9,
                            VAR_10));

  return FUNC_2(&VAR_11, VAR_2, VAR_4, VAR_5, VAR_10);
}
