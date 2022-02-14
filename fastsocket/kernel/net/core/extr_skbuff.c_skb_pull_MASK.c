
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int len; } ;


 unsigned char* FUNC_0 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_1 (int) ;

unsigned char *FUNC_2(struct sk_buff *VAR_0, unsigned int VAR_1)
{
 return FUNC_1(VAR_1 > VAR_0->len) ? ((void*)0) : FUNC_0(VAR_0, VAR_1);
}
