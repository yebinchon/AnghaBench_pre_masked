
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipa_dfs_info {int aux; } ;
struct cgraph_node {struct ipa_dfs_info* aux; } ;
typedef int funct_state ;



__attribute__((used)) static inline funct_state
FUNC_0 (struct cgraph_node *VAR_0)
{
  struct ipa_dfs_info * VAR_1 = VAR_0->aux;
  return VAR_1->aux;
}
