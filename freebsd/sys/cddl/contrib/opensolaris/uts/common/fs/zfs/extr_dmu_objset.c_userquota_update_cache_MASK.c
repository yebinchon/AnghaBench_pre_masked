
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int uqn_delta; int uqn_id; } ;
typedef TYPE_1__ userquota_node_t ;
typedef int uint64_t ;
typedef scalar_t__ int64_t ;
typedef int avl_tree_t ;
typedef int avl_index_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,TYPE_1__*,int *) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_2 (int,int ) ;

__attribute__((used)) static void
FUNC_3(avl_tree_t *VAR_1, uint64_t VAR_2, int64_t VAR_3)
{
 userquota_node_t VAR_4 = { .uqn_id = VAR_2 };
 avl_index_t VAR_5;

 userquota_node_t *VAR_6 = FUNC_0(VAR_1, &VAR_4, &VAR_5);
 if (VAR_6 == ((void*)0)) {
  VAR_6 = FUNC_2(sizeof (*VAR_6), VAR_0);
  VAR_6->uqn_id = VAR_2;
  FUNC_1(VAR_1, VAR_6, VAR_5);
 }
 VAR_6->uqn_delta += VAR_3;
}
