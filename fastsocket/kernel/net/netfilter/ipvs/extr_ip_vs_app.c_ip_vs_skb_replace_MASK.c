
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {char* data; int len; } ;
typedef int gfp_t ;
struct TYPE_2__ {int tot_len; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,char*,int) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int,int ) ;
 int FUNC_7 (struct sk_buff*,int,char*,int) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*,int) ;

int FUNC_12(struct sk_buff *VAR_1, gfp_t VAR_2,
        char *VAR_3, int VAR_4, char *VAR_5, int VAR_6)
{
 int VAR_7;
 int VAR_8;
 int VAR_9;

 FUNC_0(9);

 VAR_7 = VAR_6 - VAR_4;
 VAR_8 = VAR_3 - (char *)VAR_1->data;

 VAR_9 = VAR_1->len - (VAR_8 + VAR_4);

 if (VAR_7 <= 0) {
  FUNC_5(VAR_3 + VAR_6, VAR_3 + VAR_4, VAR_9);
  FUNC_4(VAR_3, VAR_5, VAR_6);
  FUNC_11(VAR_1, VAR_1->len + VAR_7);
 } else if (VAR_7 <= FUNC_10(VAR_1)) {
  FUNC_9(VAR_1, VAR_7);
  FUNC_5(VAR_3 + VAR_6, VAR_3 + VAR_4, VAR_9);
  FUNC_4(VAR_3, VAR_5, VAR_6);
 } else {
  if (FUNC_6(VAR_1, FUNC_8(VAR_1), VAR_7, VAR_2))
   return -VAR_0;
  FUNC_9(VAR_1, VAR_7);
  FUNC_5(VAR_1->data + VAR_8 + VAR_6,
   VAR_1->data + VAR_8 + VAR_4, VAR_9);
  FUNC_7(VAR_1, VAR_8, VAR_5, VAR_6);
 }


 FUNC_3(VAR_1)->tot_len = FUNC_2(VAR_1->len);

 FUNC_1(9);
 return 0;
}
