
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int len; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_1, unsigned int VAR_2)
{
 if (VAR_1->len + VAR_2 > 65535)
  return 0;

 if (FUNC_0(VAR_1, 0, VAR_2 - FUNC_1(VAR_1), VAR_0))
  return 0;

 return 1;
}
