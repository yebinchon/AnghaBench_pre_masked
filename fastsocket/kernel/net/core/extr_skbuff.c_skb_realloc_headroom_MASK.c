
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ,int ) ;
 struct sk_buff* FUNC_4 (struct sk_buff*,int ) ;
 unsigned int FUNC_5 (struct sk_buff*) ;

struct sk_buff *FUNC_6(struct sk_buff *VAR_1, unsigned int VAR_2)
{
 struct sk_buff *VAR_3;
 int VAR_4 = VAR_2 - FUNC_5(VAR_1);

 if (VAR_4 <= 0)
  VAR_3 = FUNC_2(VAR_1, VAR_0);
 else {
  VAR_3 = FUNC_4(VAR_1, VAR_0);
  if (VAR_3 && FUNC_3(VAR_3, FUNC_0(VAR_4), 0,
          VAR_0)) {
   FUNC_1(VAR_3);
   VAR_3 = ((void*)0);
  }
 }
 return VAR_3;
}
