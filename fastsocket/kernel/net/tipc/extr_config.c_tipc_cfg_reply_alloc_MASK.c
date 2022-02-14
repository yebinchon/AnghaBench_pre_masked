
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct sk_buff*,scalar_t__) ;

struct sk_buff *FUNC_2(int VAR_2)
{
 struct sk_buff *VAR_3;

 VAR_3 = FUNC_0(VAR_1 + VAR_2, VAR_0);
 if (VAR_3)
  FUNC_1(VAR_3, VAR_1);
 return VAR_3;
}
