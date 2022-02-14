
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tipc_msg {int dummy; } ;


 scalar_t__ FUNC_0 (struct tipc_msg*) ;
 scalar_t__ FUNC_1 (struct tipc_msg*) ;

__attribute__((used)) static inline int FUNC_2(struct tipc_msg *VAR_0, u32 VAR_1)
{
 return(FUNC_1(VAR_0) || (FUNC_0(VAR_0) == VAR_1));
}
