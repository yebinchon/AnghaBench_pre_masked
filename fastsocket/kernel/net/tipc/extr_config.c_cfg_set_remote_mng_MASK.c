
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_3 (int ) ;
 struct sk_buff* FUNC_4 () ;
 int VAR_4 ;

__attribute__((used)) static struct sk_buff *FUNC_5(void)
{
 u32 VAR_5;

 if (!FUNC_0(VAR_2, VAR_3, VAR_1))
  return FUNC_3(VAR_0);

 VAR_5 = FUNC_2(*(__be32 *)FUNC_1(VAR_2));
 VAR_4 = (VAR_5 != 0);
 return FUNC_4();
}
