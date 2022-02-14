
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct sk_buff {scalar_t__ len; } ;
struct sctp_ulpevent {int dummy; } ;


 struct sctp_ulpevent* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sctp_ulpevent*) ;
 int FUNC_2 (struct sctp_ulpevent*) ;
 struct sk_buff* FUNC_3 (struct sk_buff_head*) ;

unsigned int FUNC_4(struct sk_buff_head *VAR_0)
{
 struct sk_buff *VAR_1;
 unsigned int VAR_2 = 0;

 while ((VAR_1 = FUNC_3(VAR_0)) != ((void*)0)) {
  struct sctp_ulpevent *VAR_3 = FUNC_0(VAR_1);

  if (!FUNC_2(VAR_3))
   VAR_2 += VAR_1->len;

  FUNC_1(VAR_3);
 }

 return VAR_2;
}
