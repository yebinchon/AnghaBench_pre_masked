
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_node {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 struct tipc_node** VAR_0 ;
 size_t FUNC_2 (int ) ;
 struct tipc_node* FUNC_3 (int ,int ) ;

__attribute__((used)) static inline struct tipc_node *FUNC_4(u32 VAR_1, u32 VAR_2)
{
 if (FUNC_1(FUNC_0(VAR_1)))
  return VAR_0[FUNC_2(VAR_1)];
 return FUNC_3(VAR_1, VAR_2);
}
