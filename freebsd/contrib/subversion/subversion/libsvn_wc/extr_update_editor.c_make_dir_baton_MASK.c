
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_prop_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct edit_baton {int anchor_abspath; int * pool; } ;
struct dir_baton {int ref_count; int shadowed; void* was_incomplete; int ambient_depth; scalar_t__ edit_obstructed; int skip_this; int not_present_nodes; void* changed_rev; int adding_dir; void* old_revision; void* add_existed; void* obstruction_found; int propchanges; int * pool; struct dir_baton* parent_baton; struct edit_baton* edit_baton; int local_abspath; int * name; } ;
typedef int apr_pool_t ;


 void* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *) ;
 struct dir_baton* FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ,int *,int *) ;
 int VAR_3 ;
 int * FUNC_6 (char const*,int *) ;
 int * FUNC_7 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(struct dir_baton **VAR_4,
               const char *VAR_5,
               struct edit_baton *VAR_6,
               struct dir_baton *VAR_7,
               svn_boolean_t VAR_8,
               apr_pool_t *VAR_9)
{
  apr_pool_t *VAR_10;
  struct dir_baton *VAR_11;

  if (VAR_7 != ((void*)0))
    VAR_10 = FUNC_7(VAR_7->pool);
  else
    VAR_10 = FUNC_7(VAR_6->pool);

  FUNC_1(VAR_5 || (! VAR_7));


  VAR_11 = FUNC_4(VAR_10, sizeof(*VAR_11));


  if (VAR_5)
    {
      VAR_11->name = FUNC_6(VAR_5, VAR_10);
      FUNC_0(FUNC_5(&VAR_11->local_abspath,
                                   VAR_7->local_abspath, VAR_11->name, VAR_10));
    }
  else
    {

      VAR_11->name = ((void*)0);
      VAR_11->local_abspath = VAR_6->anchor_abspath;
    }

  VAR_11->edit_baton = VAR_6;
  VAR_11->parent_baton = VAR_7;
  VAR_11->pool = VAR_10;
  VAR_11->propchanges = FUNC_2(VAR_10, 1, sizeof(svn_prop_t));
  VAR_11->obstruction_found = VAR_0;
  VAR_11->add_existed = VAR_0;
  VAR_11->ref_count = 1;
  VAR_11->old_revision = VAR_1;
  VAR_11->adding_dir = VAR_8;
  VAR_11->changed_rev = VAR_1;
  VAR_11->not_present_nodes = FUNC_3(VAR_10);


  if (VAR_7)
    {
      VAR_11->skip_this = VAR_7->skip_this;
      VAR_11->shadowed = VAR_7->shadowed || VAR_7->edit_obstructed;


      VAR_7->ref_count++;
    }


  VAR_11->ambient_depth = VAR_3;
  VAR_11->was_incomplete = VAR_0;

  *VAR_4 = VAR_11;
  return VAR_2;
}
