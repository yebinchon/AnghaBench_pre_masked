
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_prop_t ;
typedef int svn_boolean_t ;
struct file_baton_t {int propchanges; int * pool; int added; int relpath; int name; int local_abspath; struct dir_baton_t* parent_baton; struct edit_baton_t* eb; } ;
struct edit_baton_t {int anchor_abspath; } ;
struct dir_baton_t {int users; struct edit_baton_t* eb; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int *,int,int) ;
 struct file_baton_t* FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,char const*,int *) ;
 int FUNC_4 (int ,int ) ;
 int * FUNC_5 (int *) ;

__attribute__((used)) static struct file_baton_t *
FUNC_6(const char *VAR_0,
                svn_boolean_t VAR_1,
                struct dir_baton_t *VAR_2,
                apr_pool_t *VAR_3)
{
  apr_pool_t *VAR_4 = FUNC_5(VAR_3);
  struct file_baton_t *VAR_5 = FUNC_1(VAR_4, sizeof(*VAR_5));
  struct edit_baton_t *VAR_6 = VAR_2->eb;

  VAR_5->eb = VAR_6;
  VAR_5->parent_baton = VAR_2;
  VAR_5->parent_baton->users++;


  VAR_5->local_abspath = FUNC_3(VAR_6->anchor_abspath, VAR_0, VAR_4);
  VAR_5->relpath = FUNC_4(VAR_6->anchor_abspath, VAR_5->local_abspath);
  VAR_5->name = FUNC_2(VAR_5->relpath, ((void*)0));

  VAR_5->added = VAR_1;
  VAR_5->pool = VAR_4;
  VAR_5->propchanges = FUNC_0(VAR_4, 8, sizeof(svn_prop_t));

  return VAR_5;
}
