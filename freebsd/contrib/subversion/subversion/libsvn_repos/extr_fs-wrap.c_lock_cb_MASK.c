
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_lock_t ;
typedef int svn_error_t ;
struct lock_baton_t {int fs_err; int const* lock; } ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_1,
        const char *VAR_2,
        const svn_lock_t *VAR_3,
        svn_error_t *VAR_4,
        apr_pool_t *VAR_5)
{
  struct lock_baton_t *VAR_6 = VAR_1;

  VAR_6->lock = VAR_3;
  VAR_6->fs_err = FUNC_0(VAR_4);

  return VAR_0;
}
