
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct cgraph_global_info {int dummy; } ;
struct cgraph_node {struct cgraph_global_info global; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 struct cgraph_node* FUNC_1 (int ) ;
 int FUNC_2 (int) ;

struct cgraph_global_info *
FUNC_3 (tree VAR_2)
{
  struct cgraph_node *VAR_3;

  FUNC_2 (FUNC_0 (VAR_2) == VAR_0 && VAR_1);
  VAR_3 = FUNC_1 (VAR_2);
  return &VAR_3->global;
}
