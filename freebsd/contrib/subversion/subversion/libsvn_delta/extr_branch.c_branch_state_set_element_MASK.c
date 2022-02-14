
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_15__ {int parent_eid; char* name; int payload; } ;
typedef TYPE_3__ svn_element__content_t ;
struct TYPE_16__ {TYPE_1__* priv; } ;
typedef TYPE_4__ svn_branch__state_t ;
typedef int svn_branch__eid_t ;
typedef int apr_pool_t ;
struct TYPE_14__ {int root_eid; int e_map; } ;
struct TYPE_13__ {TYPE_2__* element_tree; } ;


 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int * VAR_1 ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*,int ,TYPE_3__ const*) ;
 TYPE_3__* FUNC_6 (TYPE_3__ const*,int *) ;
 int * FUNC_7 (int ,int *,int ,int ,int,char*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_branch__state_t *VAR_2,
                         svn_branch__eid_t VAR_3,
                         const svn_element__content_t *VAR_4,
                         apr_pool_t *VAR_5)
{
  apr_pool_t *VAR_6 = FUNC_4(VAR_2->priv->element_tree->e_map);


  FUNC_2(FUNC_0(VAR_2, VAR_3));

  if (VAR_4)
    {
      VAR_4 = FUNC_6(VAR_4, VAR_6);


      FUNC_2(VAR_4->payload);

      if ((VAR_4->parent_eid == -1) != FUNC_1(VAR_2, VAR_3)
          || (*VAR_4->name == '\0') != FUNC_1(VAR_2, VAR_3))
        {
          return FUNC_7(VAR_0, ((void*)0),
                                   FUNC_3("Cannot set e%d to (parent=e%d, name='%s'): "
                                     "branch root is e%d"),
                                   VAR_3, VAR_4->parent_eid, VAR_4->name,
                                   VAR_2->priv->element_tree->root_eid);
        }
    }


  FUNC_5(VAR_2, VAR_3, VAR_4);
  return VAR_1;
}
