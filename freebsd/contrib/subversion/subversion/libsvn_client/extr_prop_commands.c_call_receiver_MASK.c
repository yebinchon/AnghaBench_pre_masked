
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* svn_proplist_receiver2_t ) (void*,char const*,int *,int *,int *) ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static svn_error_t*
FUNC_2(const char *VAR_1,
              apr_hash_t *VAR_2,
              apr_array_header_t *VAR_3,
              svn_proplist_receiver2_t VAR_4,
              void *VAR_5,
              apr_pool_t *VAR_6)
{
  if ((VAR_2 && FUNC_1(VAR_2))
      || VAR_3)
    FUNC_0(VAR_4(VAR_5, VAR_1, VAR_2, VAR_3,
                     VAR_6));

  return VAR_0;
}
