
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct blame_receiver_wrapper_baton {int baton; int * (* receiver ) (int ,int ,int ,char const*,char const*,char const*,int *) ;} ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 int * VAR_0 ;
 int * FUNC_0 (int ,int ,int ,char const*,char const*,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_1,
                       apr_int64_t VAR_2,
                       svn_revnum_t VAR_3,
                       const char *VAR_4,
                       const char *VAR_5,
                       svn_revnum_t VAR_6,
                       const char *VAR_7,
                       const char *VAR_8,
                       const char *VAR_9,
                       const char *VAR_10,
                       apr_pool_t *VAR_11)
{
  struct blame_receiver_wrapper_baton *VAR_12 = VAR_1;

  if (VAR_12->receiver)
    return VAR_12->receiver(VAR_12->baton,
                          VAR_2, VAR_3, VAR_4, VAR_5, VAR_10, VAR_11);

  return VAR_0;
}
