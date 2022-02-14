
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct dir_baton {int edit_baton; } ;
typedef int apr_pool_t ;


 int * FUNC_0 (void**,char const*,int ,struct dir_baton*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(const char *VAR_0,
               void *VAR_1,
               svn_revnum_t VAR_2,
               apr_pool_t *VAR_3,
               void **VAR_4)
{
  struct dir_baton *VAR_5 = VAR_1;
  return FUNC_0(VAR_4, VAR_0, VAR_5->edit_baton, VAR_5, VAR_3);
}
