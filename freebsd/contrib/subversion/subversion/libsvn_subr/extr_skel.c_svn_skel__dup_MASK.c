
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int len; struct TYPE_5__* next; struct TYPE_5__* children; struct TYPE_5__ const* data; scalar_t__ is_atom; } ;
typedef TYPE_1__ svn_skel_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 void* FUNC_0 (int *,TYPE_1__ const*,int) ;

svn_skel_t *FUNC_1(const svn_skel_t *VAR_0, svn_boolean_t VAR_1,
                          apr_pool_t *VAR_2)
{
  svn_skel_t *VAR_3 = FUNC_0(VAR_2, VAR_0, sizeof(svn_skel_t));

  if (VAR_1 && VAR_3->data)
    {
      if (VAR_3->is_atom)
        VAR_3->data = FUNC_0(VAR_2, VAR_3->data, VAR_3->len);
      else
        {



          VAR_3->data = ((void*)0);
          VAR_3->len = 0;
        }
    }

  if (VAR_3->children)
    VAR_3->children = FUNC_1(VAR_3->children, VAR_1, VAR_2);

  if (VAR_3->next)
    VAR_3->next = FUNC_1(VAR_3->next, VAR_1, VAR_2);

  return VAR_3;
}
