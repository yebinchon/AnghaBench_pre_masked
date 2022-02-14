
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_lock_t ;
typedef int svn_error_t ;
struct lock_baton_t {int is_lock; int lock_baton; scalar_t__ (* lock_func ) (int ,char const*,int ,int const*,int *,int *) ;scalar_t__ cb_err; int fs_path; } ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const*,int ,int const*,int *,int *) ;
 char* FUNC_1 (int ,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_1,
        const char *VAR_2,
        const svn_lock_t *VAR_3,
        svn_error_t *VAR_4,
        apr_pool_t *VAR_5)
{
  struct lock_baton_t *VAR_6 = VAR_1;

  if (VAR_6 && !VAR_6->cb_err && VAR_6->lock_func)
    {
      VAR_2 = FUNC_1(VAR_6->fs_path, VAR_2);
      VAR_6->cb_err = VAR_6->lock_func(VAR_6->lock_baton, VAR_2, VAR_6->is_lock, VAR_3, VAR_4,
                               VAR_5);
    }

  return VAR_0;
}
