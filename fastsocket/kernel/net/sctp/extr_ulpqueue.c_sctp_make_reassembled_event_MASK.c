
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff_head {int dummy; } ;
struct sk_buff {struct sk_buff* next; scalar_t__ len; int data_len; int sk; } ;
struct sctp_ulpevent {int dummy; } ;
struct TYPE_2__ {struct sk_buff* frag_list; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*,struct sk_buff_head*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sctp_ulpevent* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 struct sk_buff* FUNC_6 (struct sk_buff*,int ) ;
 TYPE_1__* FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static struct sctp_ulpevent *FUNC_8(struct sk_buff_head *VAR_2, struct sk_buff *VAR_3, struct sk_buff *VAR_4)
{
 struct sk_buff *VAR_5;
 struct sk_buff *VAR_6 = ((void*)0);
 struct sctp_ulpevent *VAR_7;
 struct sk_buff *VAR_8, *VAR_9;
 struct sk_buff *VAR_10 = FUNC_7(VAR_3)->frag_list;


 if (VAR_3 == VAR_4)
  VAR_5 = ((void*)0);
 else
  VAR_5 = VAR_3->next;


 for (VAR_9 = VAR_10; VAR_10; VAR_9 = VAR_10, VAR_10 = VAR_10->next);




 if (VAR_9)
  VAR_9->next = VAR_5;
 else {
  if (FUNC_5(VAR_3)) {





   VAR_6 = FUNC_6(VAR_3, VAR_0);
   if (!VAR_6)
    return ((void*)0);

   FUNC_4(VAR_6, VAR_3->sk);

   FUNC_7(VAR_6)->frag_list = VAR_5;
  } else
   FUNC_7(VAR_3)->frag_list = VAR_5;
 }


 FUNC_1(VAR_3, VAR_2);


 if (VAR_6) {
  FUNC_2(VAR_3);
  VAR_3 = VAR_6;
 }

 while (VAR_5) {

  VAR_8 = VAR_5->next;


  VAR_3->len += VAR_5->len;
  VAR_3->data_len += VAR_5->len;


  FUNC_1(VAR_5, VAR_2);


  if (VAR_5 == VAR_4)
   break;
  VAR_5->next = VAR_8;
  VAR_5 = VAR_8;
 }

 VAR_7 = FUNC_3(VAR_3);
 FUNC_0(VAR_1);

 return VAR_7;
}
