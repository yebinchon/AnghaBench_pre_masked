
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tipc_node {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 struct tipc_node* FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 struct tipc_node* FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (struct tipc_node*) ;
 struct tipc_node* FUNC_9 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (struct tipc_node*,scalar_t__) ;
 int FUNC_11 (scalar_t__) ;

struct tipc_node *FUNC_12(u32 VAR_0, u32 VAR_1)
{
 struct tipc_node *VAR_2;
 u32 VAR_3;

 if (!FUNC_3(VAR_0))
  return ((void*)0);


 VAR_2 = FUNC_7(VAR_0);
 if (VAR_2 && FUNC_8(VAR_2))
  return VAR_2;


 if (!FUNC_1(VAR_0) && FUNC_0(VAR_0))
  return ((void*)0);


 VAR_3 = FUNC_10(VAR_2, VAR_1);
 if (VAR_3)
  return FUNC_9(VAR_3, VAR_1);



 if (FUNC_1(VAR_0))
  return ((void*)0);


 VAR_0 = FUNC_2(FUNC_11(VAR_0), FUNC_4(VAR_0), 0);
 VAR_2 = FUNC_5(VAR_0, VAR_1);
 if (VAR_2 && FUNC_8(VAR_2))
  return VAR_2;


 VAR_3 = FUNC_6(VAR_0, VAR_1);
 if (VAR_3)
  return FUNC_9(VAR_3, VAR_1);

 return ((void*)0);
}
