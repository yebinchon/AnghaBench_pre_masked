
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct proplist_receiver_wrapper_baton {int baton; int * (* receiver ) (int ,char const*,int *,int *) ;} ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int * VAR_0 ;
 int * FUNC_0 (int ,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_1,
                          const char *VAR_2,
                          apr_hash_t *VAR_3,
                          apr_array_header_t *VAR_4,
                          apr_pool_t *VAR_5)
{
  struct proplist_receiver_wrapper_baton *VAR_6 = VAR_1;

  if (VAR_6->receiver)
    return VAR_6->receiver(VAR_6->baton, VAR_2, VAR_3, VAR_5);

  return VAR_0;
}
