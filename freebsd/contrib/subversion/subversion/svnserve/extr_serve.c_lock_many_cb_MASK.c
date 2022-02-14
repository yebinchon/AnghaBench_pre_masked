
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_lock_t ;
typedef int svn_error_t ;
struct lock_result_t {int err; int const* lock; } ;
struct lock_many_baton_t {int pool; int results; } ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 struct lock_result_t* FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,struct lock_result_t*) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_1,
             const char *VAR_2,
             const svn_lock_t *VAR_3,
             svn_error_t *VAR_4,
             apr_pool_t *VAR_5)
{
  struct lock_many_baton_t *VAR_6 = VAR_1;
  struct lock_result_t *VAR_7 = FUNC_0(VAR_6->pool,
                                            sizeof(struct lock_result_t));

  VAR_7->lock = VAR_3;
  VAR_7->err = FUNC_2(VAR_4);
  FUNC_3(VAR_6->results, FUNC_1(VAR_6->pool, VAR_2), VAR_7);

  return VAR_0;
}
