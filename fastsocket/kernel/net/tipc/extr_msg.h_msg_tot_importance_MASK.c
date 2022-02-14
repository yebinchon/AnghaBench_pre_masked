
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tipc_msg {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct tipc_msg* FUNC_1 (struct tipc_msg*) ;
 scalar_t__ FUNC_2 (struct tipc_msg*) ;
 int FUNC_3 (struct tipc_msg*) ;
 scalar_t__ FUNC_4 (struct tipc_msg*) ;
 scalar_t__ FUNC_5 (struct tipc_msg*) ;
 scalar_t__ FUNC_6 (struct tipc_msg*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline u32 FUNC_7(struct tipc_msg *VAR_3)
{
 if (FUNC_0(FUNC_3(VAR_3))) {
  if (FUNC_0(FUNC_4(VAR_3) == VAR_2))
   return FUNC_2(VAR_3);
  return FUNC_2(VAR_3) + 4;
 }
 if ((FUNC_6(VAR_3) == VAR_1) &&
     (FUNC_5(VAR_3) == VAR_0))
  return FUNC_2(FUNC_1(VAR_3));
 return FUNC_2(VAR_3);
}
