
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_prop_t ;
typedef int svn_boolean_t ;
struct edit_baton {int dummy; } ;
struct dir_baton {int users; int base_revision; int propchanges; int path; int * pool; void* skip_children; void* skip; void* tree_conflicted; int added; struct edit_baton* edit_baton; struct dir_baton* parent_baton; } ;
typedef int apr_pool_t ;


 void* VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 struct dir_baton* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char const*) ;
 int * FUNC_3 (int *) ;

__attribute__((used)) static struct dir_baton *
FUNC_4(const char *VAR_1,
               struct dir_baton *VAR_2,
               struct edit_baton *VAR_3,
               svn_boolean_t VAR_4,
               svn_revnum_t VAR_5,
               apr_pool_t *VAR_6)
{
  apr_pool_t *VAR_7 = FUNC_3(VAR_6);
  struct dir_baton *VAR_8 = FUNC_1(VAR_7, sizeof(*VAR_8));

  VAR_8->parent_baton = VAR_2;
  VAR_8->edit_baton = VAR_3;
  VAR_8->added = VAR_4;
  VAR_8->tree_conflicted = VAR_0;
  VAR_8->skip = VAR_0;
  VAR_8->skip_children = VAR_0;
  VAR_8->pool = VAR_7;
  VAR_8->path = FUNC_2(VAR_7, VAR_1);
  VAR_8->propchanges = FUNC_0(VAR_7, 8, sizeof(svn_prop_t));
  VAR_8->base_revision = VAR_5;
  VAR_8->users++;

  if (VAR_2)
    VAR_2->users++;

  return VAR_8;
}
