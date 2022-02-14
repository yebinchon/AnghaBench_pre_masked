
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct audit_buffer {struct sk_buff* skb; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct audit_buffer*,int) ;
 int FUNC_2 (struct sk_buff*,size_t) ;
 unsigned char* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;

void FUNC_5(struct audit_buffer *VAR_1, const unsigned char *VAR_2,
  size_t VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 unsigned char *VAR_7;
 struct sk_buff *VAR_8;
 static const unsigned char *VAR_9 = "0123456789ABCDEF";

 if (!VAR_1)
  return;

 FUNC_0(!VAR_1->skb);
 VAR_8 = VAR_1->skb;
 VAR_5 = FUNC_4(VAR_8);
 VAR_6 = VAR_3<<1;
 if (VAR_6 >= VAR_5) {

  VAR_6 = VAR_0*(((VAR_6-VAR_5)/VAR_0) + 1);
  VAR_5 = FUNC_1(VAR_1, VAR_6);
  if (!VAR_5)
   return;
 }

 VAR_7 = FUNC_3(VAR_8);
 for (VAR_4=0; VAR_4<VAR_3; VAR_4++) {
  *VAR_7++ = VAR_9[(VAR_2[VAR_4] & 0xF0)>>4];
  *VAR_7++ = VAR_9[VAR_2[VAR_4] & 0x0F];
 }
 *VAR_7 = 0;
 FUNC_2(VAR_8, VAR_3 << 1);
}
