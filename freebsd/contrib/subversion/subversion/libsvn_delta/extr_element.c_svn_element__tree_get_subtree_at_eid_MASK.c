
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int root_eid; int e_map; } ;
typedef TYPE_1__ svn_element__tree_t ;
struct TYPE_10__ {int payload; } ;
typedef TYPE_2__ svn_element__content_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int,char*,int ,int *) ;
 TYPE_1__* FUNC_1 (int ,int,int *) ;
 TYPE_2__* FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;

svn_element__tree_t *
FUNC_5(svn_element__tree_t *VAR_0,
                                     int VAR_1,
                                     apr_pool_t *VAR_2)
{
  svn_element__tree_t *VAR_3;
  svn_element__content_t *VAR_4;

  VAR_3 = FUNC_1(VAR_0->e_map, VAR_1,
                                         VAR_2);


  FUNC_3(VAR_3->e_map,
                                  VAR_3->root_eid, VAR_2);


  VAR_4
    = FUNC_2(VAR_3, VAR_3->root_eid);
  FUNC_4(VAR_3, VAR_3->root_eid,
                        FUNC_0(
                          -1, "", VAR_4->payload, VAR_2));

  return VAR_3;
}
