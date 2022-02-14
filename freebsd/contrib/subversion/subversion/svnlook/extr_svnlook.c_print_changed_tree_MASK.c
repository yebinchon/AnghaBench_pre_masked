
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char action; char* copyfrom_path; scalar_t__ kind; char* copyfrom_rev; struct TYPE_3__* sibling; int name; struct TYPE_3__* child; scalar_t__ prop_mod; scalar_t__ text_mod; } ;
typedef TYPE_1__ svn_repos_node_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *,char*,char*,char const*,char*) ;
 char* FUNC_3 (char const*,int ,int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_repos_node_t *VAR_4,
                   const char *VAR_5 ,
                   svn_boolean_t VAR_6,
                   apr_pool_t *VAR_7)
{
  const char *VAR_8;
  char VAR_9[4] = "_  ";
  svn_boolean_t VAR_10 = VAR_2;
  apr_pool_t *VAR_11;

  FUNC_0(FUNC_1(((void*)0)));

  if (! VAR_4)
    return VAR_1;


  if (VAR_4->action == 'A')
    {
      VAR_9[0] = 'A';
      if (VAR_6 && VAR_4->copyfrom_path)
        VAR_9[2] = '+';
    }
  else if (VAR_4->action == 'D')
    VAR_9[0] = 'D';
  else if (VAR_4->action == 'R')
    {
      if ((! VAR_4->text_mod) && (! VAR_4->prop_mod))
        VAR_10 = VAR_0;
      if (VAR_4->text_mod)
        VAR_9[0] = 'U';
      if (VAR_4->prop_mod)
        VAR_9[1] = 'U';
    }
  else
    VAR_10 = VAR_0;


  if (VAR_10)
    {
      FUNC_0(FUNC_2(VAR_7, "%s %s%s\n",
                                 VAR_9,
                                 VAR_5,
                                 VAR_4->kind == VAR_3 ? "/" : ""));
      if (VAR_6 && VAR_4->copyfrom_path)


        FUNC_0(FUNC_2(VAR_7, "    (from %s%s:r%ld)\n",
                                   (VAR_4->copyfrom_path[0] == '/'
                                    ? VAR_4->copyfrom_path + 1
                                    : VAR_4->copyfrom_path),
                                   (VAR_4->kind == VAR_3 ? "/" : ""),
                                   VAR_4->copyfrom_rev));
    }


  VAR_4 = VAR_4->child;
  if (! VAR_4)
    return VAR_1;


  VAR_11 = FUNC_5(VAR_7);
  while (VAR_4)
    {
      FUNC_4(VAR_11);
      VAR_8 = FUNC_3(VAR_5, VAR_4->name, VAR_11);
      FUNC_0(FUNC_7(VAR_4, VAR_8, VAR_6, VAR_11));
      VAR_4 = VAR_4->sibling;
    }
  FUNC_6(VAR_11);

  return VAR_1;
}
