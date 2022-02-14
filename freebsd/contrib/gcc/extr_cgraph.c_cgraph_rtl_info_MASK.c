
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct cgraph_rtl_info {int dummy; } ;
struct cgraph_node {struct cgraph_rtl_info rtl; int decl; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 struct cgraph_node* FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int) ;

struct cgraph_rtl_info *
FUNC_4 (tree VAR_2)
{
  struct cgraph_node *VAR_3;

  FUNC_3 (FUNC_1 (VAR_2) == VAR_0);
  VAR_3 = FUNC_2 (VAR_2);
  if (VAR_2 != VAR_1
      && !FUNC_0 (VAR_3->decl))
    return ((void*)0);
  return &VAR_3->rtl;
}
