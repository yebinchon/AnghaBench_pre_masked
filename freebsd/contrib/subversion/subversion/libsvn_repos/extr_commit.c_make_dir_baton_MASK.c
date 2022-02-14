
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_boolean_t ;
struct edit_baton {int dummy; } ;
struct dir_baton {char const* path; int base_rev; int was_copied; int * pool; struct dir_baton* parent; struct edit_baton* edit_baton; } ;
typedef int apr_pool_t ;


 struct dir_baton* FUNC_0 (int *,int) ;

__attribute__((used)) static struct dir_baton *
FUNC_1(struct edit_baton *VAR_0,
               struct dir_baton *VAR_1,
               const char *VAR_2,
               svn_boolean_t VAR_3,
               svn_revnum_t VAR_4,
               apr_pool_t *VAR_5)
{
  struct dir_baton *VAR_6;
  VAR_6 = FUNC_0(VAR_5, sizeof(*VAR_6));
  VAR_6->edit_baton = VAR_0;
  VAR_6->parent = VAR_1;
  VAR_6->pool = VAR_5;
  VAR_6->path = VAR_2;
  VAR_6->was_copied = VAR_3;
  VAR_6->base_rev = VAR_4;
  return VAR_6;
}
