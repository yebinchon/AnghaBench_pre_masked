
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__* data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_1)
{
 if (!FUNC_0(VAR_1, sizeof(u8)))
  return -1;
 if (*VAR_1->data == VAR_0) {
  FUNC_1(VAR_1, sizeof(u8));
  return -1;
 }
 return 0;
}
