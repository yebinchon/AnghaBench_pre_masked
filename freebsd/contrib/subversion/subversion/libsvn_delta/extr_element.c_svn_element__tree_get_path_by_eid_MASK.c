
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int root_eid; } ;
typedef TYPE_1__ svn_element__tree_t ;
struct TYPE_7__ {int parent_eid; int name; } ;
typedef TYPE_2__ svn_element__content_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (TYPE_1__ const*,int) ;
 char* FUNC_2 (int ,char const*,int *) ;

const char *
FUNC_3(const svn_element__tree_t *VAR_0,
                                  int VAR_1,
                                  apr_pool_t *VAR_2)
{
  const char *VAR_3 = "";
  svn_element__content_t *VAR_4;

  for (; VAR_1 != VAR_0->root_eid; VAR_1 = VAR_4->parent_eid)
    {
      VAR_4 = FUNC_1(VAR_0, VAR_1);
      if (! VAR_4)
        return ((void*)0);
      VAR_3 = FUNC_2(VAR_4->name, VAR_3, VAR_2);
    }
  FUNC_0(VAR_1 == VAR_0->root_eid);
  return VAR_3;
}
