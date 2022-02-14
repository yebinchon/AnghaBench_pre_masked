
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int len; } ;


 int FUNC_0 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_1 (struct sk_buff*,unsigned int) ;
 int FUNC_2 (struct sk_buff*) ;
 unsigned int FUNC_3 (struct sk_buff*) ;

int FUNC_4(struct sk_buff *VAR_0, unsigned int VAR_1)
{
 if (VAR_1 > VAR_0->len)
  return 0;


 if (!FUNC_2(VAR_0)) {
  if (VAR_1 <= FUNC_3(VAR_0))
   return 1;
 } else if (FUNC_1(VAR_0, VAR_1))
  return 1;

 if (VAR_1 <= FUNC_3(VAR_0))
  VAR_1 = 0;
 else
  VAR_1 -= FUNC_3(VAR_0);

 return !!FUNC_0(VAR_0, VAR_1);
}
