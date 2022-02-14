
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef scalar_t__ svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
struct ev2_edit_baton {int edit_pool; int fetch_props_baton; int (* fetch_props_func ) (int **,int ,char const*,scalar_t__,int ,int *) ;} ;
struct change_node {scalar_t__ kind; scalar_t__ changing; char const* copyfrom_path; scalar_t__ copyfrom_rev; scalar_t__ action; int * props; } ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int * VAR_1 ;
 int * FUNC_3 (int ) ;
 char const* FUNC_4 (int ,char const*) ;
 struct change_node* FUNC_5 (struct ev2_edit_baton*,char const*) ;
 int FUNC_6 (int **,int ,char const*,scalar_t__,int ,int *) ;
 int FUNC_7 (int **,int ,char const*,scalar_t__,int ,int *) ;
 int FUNC_8 (int *,char const*,int *) ;
 scalar_t__ VAR_2 ;
 int * FUNC_9 (int const*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_10(struct ev2_edit_baton *VAR_3,
               const char *VAR_4,
               svn_node_kind_t VAR_5,
               svn_revnum_t VAR_6,
               const char *VAR_7,
               const svn_string_t *VAR_8,
               apr_pool_t *VAR_9)
{
  struct change_node *VAR_10 = FUNC_5(VAR_3, VAR_4);

  FUNC_1(VAR_10->kind == VAR_2 || VAR_10->kind == VAR_5);
  VAR_10->kind = VAR_5;


  FUNC_1(!FUNC_2(VAR_10->changing)
                 || VAR_10->changing == VAR_6);
  VAR_10->changing = VAR_6;

  if (VAR_10->props == ((void*)0))
    {







      if (VAR_10->copyfrom_path)
        FUNC_0(VAR_3->fetch_props_func(&VAR_10->props,
                                     VAR_3->fetch_props_baton,
                                     VAR_10->copyfrom_path,
                                     VAR_10->copyfrom_rev,
                                     VAR_3->edit_pool, VAR_9));
      else if (VAR_10->action == VAR_0)
        VAR_10->props = FUNC_3(VAR_3->edit_pool);
      else
        FUNC_0(VAR_3->fetch_props_func(&VAR_10->props,
                                     VAR_3->fetch_props_baton,
                                     VAR_4, VAR_6,
                                     VAR_3->edit_pool, VAR_9));
    }

  if (VAR_8 == ((void*)0))
    FUNC_8(VAR_10->props, VAR_7, ((void*)0));
  else
    FUNC_8(VAR_10->props,
                  FUNC_4(VAR_3->edit_pool, VAR_7),
                  FUNC_9(VAR_8, VAR_3->edit_pool));

  return VAR_1;
}
