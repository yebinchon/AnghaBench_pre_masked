
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct l2cap_pinfo {scalar_t__ fcs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct l2cap_pinfo *VAR_3, struct sk_buff *VAR_4)
{
 u16 VAR_5, VAR_6;
 int VAR_7 = VAR_2 + 2;

 if (VAR_3->fcs == VAR_1) {
  FUNC_2(VAR_4, VAR_4->len - 2);
  VAR_6 = FUNC_1(VAR_4->data + VAR_4->len);
  VAR_5 = FUNC_0(0, VAR_4->data - VAR_7, VAR_4->len + VAR_7);

  if (VAR_5 != VAR_6)
   return -VAR_0;
 }
 return 0;
}
