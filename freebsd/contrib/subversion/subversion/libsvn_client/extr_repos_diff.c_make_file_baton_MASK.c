
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_prop_t ;
typedef int svn_boolean_t ;
struct file_baton {int base_revision; int propchanges; int path; int * pool; void* skip; void* tree_conflicted; int added; TYPE_1__* edit_baton; struct dir_baton* parent_baton; } ;
struct dir_baton {int users; TYPE_1__* edit_baton; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int revision; } ;


 void* VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 struct file_baton* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char const*) ;
 int * FUNC_3 (int *) ;

__attribute__((used)) static struct file_baton *
FUNC_4(const char *VAR_1,
                struct dir_baton *VAR_2,
                svn_boolean_t VAR_3,
                apr_pool_t *VAR_4)
{
  apr_pool_t *VAR_5 = FUNC_3(VAR_4);
  struct file_baton *VAR_6 = FUNC_1(VAR_5, sizeof(*VAR_6));

  VAR_6->parent_baton = VAR_2;
  VAR_6->edit_baton = VAR_2->edit_baton;
  VAR_6->added = VAR_3;
  VAR_6->tree_conflicted = VAR_0;
  VAR_6->skip = VAR_0;
  VAR_6->pool = VAR_5;
  VAR_6->path = FUNC_2(VAR_5, VAR_1);
  VAR_6->propchanges = FUNC_0(VAR_5, 8, sizeof(svn_prop_t));
  VAR_6->base_revision = VAR_2->edit_baton->revision;

  VAR_2->users++;

  return VAR_6;
}
