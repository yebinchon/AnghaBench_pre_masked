
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_prop_t ;
typedef int svn_depth_t ;
typedef int svn_boolean_t ;
struct edit_baton_t {int anchor_abspath; int * pool; } ;
struct dir_baton_t {int users; int compared; int propchanges; int * pool; int depth; int added; struct edit_baton_t* eb; int relpath; int name; int local_abspath; struct dir_baton_t* parent_baton; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *) ;
 struct dir_baton_t* FUNC_2 (int *,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,char const*,int *) ;
 int FUNC_5 (int ,int ) ;
 int * FUNC_6 (int *) ;

__attribute__((used)) static struct dir_baton_t *
FUNC_7(const char *VAR_0,
               struct dir_baton_t *VAR_1,
               struct edit_baton_t *VAR_2,
               svn_boolean_t VAR_3,
               svn_depth_t VAR_4,
               apr_pool_t *VAR_5)
{
  apr_pool_t *VAR_6 = FUNC_6(VAR_1 ? VAR_1->pool
                                                      : VAR_2->pool);
  struct dir_baton_t *VAR_7 = FUNC_2(VAR_6, sizeof(*VAR_7));

  VAR_7->parent_baton = VAR_1;


  VAR_7->local_abspath = FUNC_4(VAR_2->anchor_abspath, VAR_0, VAR_6);
  VAR_7->relpath = FUNC_5(VAR_2->anchor_abspath, VAR_7->local_abspath);
  VAR_7->name = FUNC_3(VAR_7->relpath, ((void*)0));

  VAR_7->eb = VAR_2;
  VAR_7->added = VAR_3;
  VAR_7->depth = VAR_4;
  VAR_7->pool = VAR_6;
  VAR_7->propchanges = FUNC_0(VAR_6, 8, sizeof(svn_prop_t));
  VAR_7->compared = FUNC_1(VAR_6);

  if (VAR_1 != ((void*)0))
    {
      VAR_1->users++;
    }

  VAR_7->users = 1;

  return VAR_7;
}
