
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct sk_buff *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (FUNC_2(VAR_1 == 1))
  VAR_1 = FUNC_1(VAR_0);

 return VAR_1;
}
