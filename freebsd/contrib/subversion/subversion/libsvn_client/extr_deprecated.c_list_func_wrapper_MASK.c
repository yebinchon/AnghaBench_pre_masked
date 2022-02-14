
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_lock_t ;
typedef int svn_error_t ;
typedef int svn_dirent_t ;
struct list_func_wrapper_baton {int list_func1_baton; int * (* list_func1 ) (int ,char const*,int const*,int const*,char const*,int *) ;} ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int * FUNC_0 (int ,char const*,int const*,int const*,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_1,
                  const char *VAR_2,
                  const svn_dirent_t *VAR_3,
                  const svn_lock_t *VAR_4,
                  const char *VAR_5,
                  const char *VAR_6,
                  const char *VAR_7,
                  apr_pool_t *VAR_8)
{
  struct list_func_wrapper_baton *VAR_9 = VAR_1;

  if (VAR_9->list_func1)
    return VAR_9->list_func1(VAR_9->list_func1_baton, VAR_2, VAR_3,
                           VAR_4, VAR_5, VAR_8);

  return VAR_0;
}
