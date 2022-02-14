
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_5__ {char action; scalar_t__ kind; } ;
typedef TYPE_1__ svn_repos_node_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
struct node_baton {int node; struct edit_baton* edit_baton; } ;
struct edit_baton {int fs; int * base_root; int node_pool; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int FUNC_2 (char*) ;
 TYPE_1__* FUNC_3 (int ,char const*,int ) ;
 TYPE_1__* FUNC_4 (int ,char const*) ;
 int FUNC_5 (char const**,int *,TYPE_1__*,int *) ;
 int * FUNC_6 (int ,int *,int ,char const*) ;
 int FUNC_7 (scalar_t__*,int *,char const*,int *) ;
 int FUNC_8 (int **,int ,int ,int *) ;
 scalar_t__ VAR_2 ;
 char* FUNC_9 (char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(const char *VAR_3,
             svn_revnum_t VAR_4,
             void *VAR_5,
             apr_pool_t *VAR_6)
{
  struct node_baton *VAR_7 = VAR_5;
  struct edit_baton *VAR_8 = VAR_7->edit_baton;
  svn_repos_node_t *VAR_9;
  const char *VAR_10;
  const char *VAR_11;
  svn_revnum_t VAR_12;
  svn_fs_root_t *VAR_13;
  svn_node_kind_t VAR_14;


  VAR_10 = FUNC_9(VAR_3, VAR_6);
  VAR_9 = FUNC_4(VAR_7->node, VAR_10);
  if (! VAR_9)
    VAR_9 = FUNC_3(VAR_7->node, VAR_10, VAR_8->node_pool);
  VAR_9->action = 'D';






  FUNC_5(&VAR_11, &VAR_12, VAR_9, VAR_6);
  if (! FUNC_1(VAR_12))
    {


      VAR_13 = VAR_8->base_root;
    }
  else
    {

      FUNC_0(FUNC_8(&VAR_13, VAR_8->fs, VAR_12, VAR_6));
    }


  FUNC_0(FUNC_7(&VAR_14, VAR_13, VAR_11, VAR_6));
  if (VAR_14 == VAR_2)
    return FUNC_6(VAR_0, ((void*)0),
                             FUNC_2("'%s' not found in filesystem"), VAR_3);
  VAR_9->kind = VAR_14;

  return VAR_1;
}
