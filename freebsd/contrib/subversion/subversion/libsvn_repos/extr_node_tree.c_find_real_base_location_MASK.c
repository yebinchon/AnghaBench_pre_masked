
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_3__ {char action; char* copyfrom_path; int name; struct TYPE_3__* parent; int copyfrom_rev; } ;
typedef TYPE_1__ svn_repos_node_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (char const*,int ,int *) ;

__attribute__((used)) static void
FUNC_2(const char **VAR_1,
                        svn_revnum_t *VAR_2,
                        svn_repos_node_t *VAR_3,
                        apr_pool_t *VAR_4)
{


  if ((VAR_3->action == 'A')
      && VAR_3->copyfrom_path
      && FUNC_0(VAR_3->copyfrom_rev))
    {
      *VAR_1 = VAR_3->copyfrom_path;
      *VAR_2 = VAR_3->copyfrom_rev;
      return;
    }




  if (VAR_3->parent)
    {
      const char *VAR_5;
      svn_revnum_t VAR_6;

      FUNC_2(&VAR_5, &VAR_6, VAR_3->parent, VAR_4);
      *VAR_1 = FUNC_1(VAR_5, VAR_3->name, VAR_4);
      *VAR_2 = VAR_6;
      return;
    }



  *VAR_1 = "/";
  *VAR_2 = VAR_0;
  return;
}
