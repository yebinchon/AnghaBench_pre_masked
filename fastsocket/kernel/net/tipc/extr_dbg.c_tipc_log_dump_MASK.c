
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct tlv_desc {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct print_buf {int dummy; } ;
struct TYPE_4__ {int size; int buf; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tlv_desc*) ;
 int FUNC_1 (struct tlv_desc*,int ,int *,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,unsigned int) ;
 int VAR_2 ;
 int FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 struct sk_buff* FUNC_8 (int ) ;
 struct sk_buff* FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (struct print_buf*,int ,int) ;
 int FUNC_12 (struct print_buf*,TYPE_1__*) ;

struct sk_buff *FUNC_13(void)
{
 struct sk_buff *VAR_3;

 FUNC_5(&VAR_2);
 if (!VAR_0->buf) {
  FUNC_6(&VAR_2);
  VAR_3 = FUNC_9("log not activated\n");
 } else if (FUNC_10(VAR_0)) {
  FUNC_6(&VAR_2);
  VAR_3 = FUNC_9("log is empty\n");
 }
 else {
  struct tlv_desc *VAR_4;
  struct print_buf VAR_5;
  int VAR_6;

  VAR_6 = FUNC_3(VAR_0->size, 32768u);
  FUNC_6(&VAR_2);
  VAR_3 = FUNC_8(FUNC_2(VAR_6));
  if (VAR_3) {
   VAR_4 = (struct tlv_desc *)VAR_3->data;
   FUNC_11(&VAR_5, FUNC_0(VAR_4), VAR_6);
   FUNC_5(&VAR_2);
   FUNC_12(&VAR_5, VAR_0);
   FUNC_6(&VAR_2);
   VAR_6 = FUNC_7(FUNC_0(VAR_4)) + 1;
   FUNC_4(VAR_3, FUNC_2(VAR_6));
   FUNC_1(VAR_4, VAR_1, ((void*)0), VAR_6);
  }
 }
 return VAR_3;
}
