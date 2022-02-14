
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_io_walk_func_t ;
typedef int svn_error_t ;
struct walk_func_filter_baton_t {void* walk_baton; int walk_func; } ;
typedef int apr_pool_t ;
typedef int apr_int32_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (char const*,int ,int ,struct walk_func_filter_baton_t*,int *) ;
 int VAR_0 ;

svn_error_t *
FUNC_2(const char *VAR_1,
                apr_int32_t VAR_2,
                svn_io_walk_func_t VAR_3,
                void *VAR_4,
                apr_pool_t *VAR_5)
{
  struct walk_func_filter_baton_t VAR_6;
  VAR_6.walk_func = VAR_3;
  VAR_6.walk_baton = VAR_4;
  return FUNC_0(FUNC_1(VAR_1, VAR_2,
                                          VAR_0,
                                          &VAR_6, VAR_5));
}
