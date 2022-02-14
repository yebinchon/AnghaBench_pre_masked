
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ kind; char action; struct TYPE_3__* sibling; int name; struct TYPE_3__* child; scalar_t__ prop_mod; } ;
typedef TYPE_1__ svn_repos_node_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *,char*,char const*) ;
 char* FUNC_3 (char const*,int ,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_repos_node_t *VAR_5,
                        const char *VAR_6 ,
                        apr_pool_t *VAR_7)
{
  svn_repos_node_t *VAR_8;
  svn_boolean_t VAR_9 = VAR_0;
  const char *VAR_10;
  apr_pool_t *VAR_11;

  FUNC_0(FUNC_1(((void*)0)));

  if (! VAR_5)
    return VAR_1;


  if (VAR_5->kind != VAR_3)
    return VAR_1;


  if (VAR_5->prop_mod)
    VAR_9 = VAR_2;


  VAR_8 = VAR_5->child;
  while (VAR_8 && (! VAR_9))
    {
      if ((VAR_8->kind == VAR_4)
           || (VAR_8->action == 'A')
           || (VAR_8->action == 'D'))
        {
          VAR_9 = VAR_2;
        }
      VAR_8 = VAR_8->sibling;
    }


  if (VAR_9)
    {
      FUNC_0(FUNC_2(VAR_7, "%s/\n", VAR_6));
    }


  VAR_8 = VAR_5->child;
  if (! VAR_8)
    return VAR_1;


  VAR_11 = FUNC_5(VAR_7);
  while (VAR_8)
    {
      FUNC_4(VAR_11);
      VAR_10 = FUNC_3(VAR_6, VAR_8->name, VAR_11);
      FUNC_0(FUNC_7(VAR_8, VAR_10, VAR_11));
      VAR_8 = VAR_8->sibling;
    }
  FUNC_6(VAR_11);

  return VAR_1;
}
