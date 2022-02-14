
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tipc_msg {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct tipc_msg*) ;
 scalar_t__ FUNC_1 (struct tipc_msg*) ;

__attribute__((used)) static int FUNC_2(struct tipc_msg *VAR_3, u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6;
 u32 VAR_7 = FUNC_1(VAR_3);

 if (VAR_7 == VAR_1)
  VAR_6 = VAR_5;
 else if (VAR_7 == VAR_2)
  VAR_6 = VAR_5 * 2;
 else if (VAR_7 == VAR_0)
  VAR_6 = VAR_5 * 100;
 else
  return 0;

 if (FUNC_0(VAR_3))
  VAR_6 *= 4;

 return (VAR_4 >= VAR_6);
}
