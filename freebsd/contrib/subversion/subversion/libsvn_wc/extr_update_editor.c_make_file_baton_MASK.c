
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_prop_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct file_baton {int shadowed; void* changed_rev; struct dir_baton* dir_baton; int skip_this; void* add_existed; void* obstruction_found; int adding_file; int bump_info; int propchanges; int edit_baton; int * pool; int name; int local_abspath; void* old_revision; } ;
struct dir_baton {int ref_count; scalar_t__ edit_obstructed; scalar_t__ shadowed; int skip_this; int bump_info; int edit_baton; int local_abspath; int pool; } ;
typedef int apr_pool_t ;


 void* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 void* VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (int *,int,int) ;
 struct file_baton* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,int ,int *) ;
 int FUNC_5 (char const*,int *) ;
 int * FUNC_6 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_7(struct file_baton **VAR_3,
                struct dir_baton *VAR_4,
                const char *VAR_5,
                svn_boolean_t VAR_6,
                apr_pool_t *VAR_7)
{
  apr_pool_t *VAR_8 = FUNC_6(VAR_4->pool);
  struct file_baton *VAR_9 = FUNC_3(VAR_8, sizeof(*VAR_9));

  FUNC_1(VAR_5);


  VAR_9->name = FUNC_5(VAR_5, VAR_8);
  VAR_9->old_revision = VAR_1;
  FUNC_0(FUNC_4(&VAR_9->local_abspath,
                               VAR_4->local_abspath, VAR_9->name, VAR_8));

  VAR_9->pool = VAR_8;
  VAR_9->edit_baton = VAR_4->edit_baton;
  VAR_9->propchanges = FUNC_2(VAR_8, 1, sizeof(svn_prop_t));
  VAR_9->bump_info = VAR_4->bump_info;
  VAR_9->adding_file = VAR_6;
  VAR_9->obstruction_found = VAR_0;
  VAR_9->add_existed = VAR_0;
  VAR_9->skip_this = VAR_4->skip_this;
  VAR_9->shadowed = VAR_4->shadowed || VAR_4->edit_obstructed;
  VAR_9->dir_baton = VAR_4;
  VAR_9->changed_rev = VAR_1;


  VAR_4->ref_count++;

  *VAR_3 = VAR_9;
  return VAR_2;
}
