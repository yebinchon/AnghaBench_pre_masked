
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned char* head; int len; scalar_t__ cb; } ;
struct ipx_interface {int if_ipx_offset; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (scalar_t__,scalar_t__,int) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_8(struct ipx_interface *VAR_1,
         struct sk_buff *VAR_2)
{
 struct sk_buff *VAR_3;
 int VAR_4 = (unsigned char *)FUNC_1(VAR_2) - VAR_2->head;
 int VAR_5 = VAR_1->if_ipx_offset;
 int VAR_6;


 if (VAR_4 >= VAR_5)
  return VAR_2;


 VAR_6 = VAR_2->len + VAR_5;
 VAR_3 = FUNC_0(VAR_6, VAR_0);
 if (VAR_3) {
  FUNC_5(VAR_3, VAR_5);
  FUNC_6(VAR_3);
  FUNC_7(VAR_3);
  FUNC_4(VAR_3, VAR_2->len);
  FUNC_3(FUNC_1(VAR_3), FUNC_1(VAR_2), VAR_2->len);
  FUNC_3(VAR_3->cb, VAR_2->cb, sizeof(VAR_2->cb));
 }
 FUNC_2(VAR_2);
 return VAR_3;
}
