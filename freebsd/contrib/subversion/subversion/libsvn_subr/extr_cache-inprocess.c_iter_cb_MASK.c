
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct cache_iter_baton {int user_baton; int * (* user_cb ) (int ,void const*,int ,int ,int *) ;} ;
struct cache_entry {int value; } ;
typedef int apr_ssize_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int ,void const*,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_0,
        const void *VAR_1,
        apr_ssize_t VAR_2,
        void *VAR_3,
        apr_pool_t *VAR_4)
{
  struct cache_iter_baton *VAR_5 = VAR_0;
  struct cache_entry *VAR_6 = VAR_3;
  return (VAR_5->user_cb)(VAR_5->user_baton, VAR_1, VAR_2, VAR_6->value, VAR_4);
}
