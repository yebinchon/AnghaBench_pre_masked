
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
typedef int __u32 ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct sk_buff const*) ;

__attribute__((used)) static int FUNC_2(const struct sk_buff *VAR_0)
{
 return *((__u32 *)(FUNC_1(VAR_0))) & FUNC_0(1 << 20);
}
