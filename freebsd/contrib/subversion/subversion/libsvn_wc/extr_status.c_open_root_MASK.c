
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct edit_baton {int root_opened; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * FUNC_0 (void**,int *,struct edit_baton*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_1,
          svn_revnum_t VAR_2,
          apr_pool_t *VAR_3,
          void **VAR_4)
{
  struct edit_baton *VAR_5 = VAR_1;
  VAR_5->root_opened = VAR_0;
  return FUNC_0(VAR_4, ((void*)0), VAR_5, ((void*)0), VAR_3);
}
