
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_node {int dummy; } ;
struct cluster {struct tipc_node** nodes; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct cluster* FUNC_3 (int ) ;
 struct tipc_node** VAR_0 ;
 size_t FUNC_4 (int ) ;

__attribute__((used)) static inline struct tipc_node *FUNC_5(u32 VAR_1)
{
 if (FUNC_1(FUNC_0(VAR_1)))
  return VAR_0[FUNC_4(VAR_1)];
 else if (FUNC_2(VAR_1)) {
  struct cluster *VAR_2 = FUNC_3(VAR_1);

  if (VAR_2)
   return VAR_2->nodes[FUNC_4(VAR_1)];
 }
 return ((void*)0);
}
