
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct sk_buff {struct sk_buff* next; void* protocol; } ;
struct net_device {int dummy; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;


 int FUNC_1 (struct sk_buff*,struct list_head*,int ,unsigned int,struct net_device*,struct net_device*,int (*) (struct sk_buff*),unsigned int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct sk_buff *VAR_3,
      struct list_head *VAR_4,
      u_int8_t VAR_5, unsigned int VAR_6,
      struct net_device *VAR_7,
      struct net_device *VAR_8,
      int (*VAR_9)(struct sk_buff *),
      unsigned int VAR_10)
{
 struct sk_buff *VAR_11;
 int VAR_12;
 unsigned int VAR_13;

 if (!FUNC_5(VAR_3))
  return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
      VAR_10);

 switch (VAR_5) {
 case 129:
  VAR_3->protocol = FUNC_2(VAR_1);
  break;
 case 128:
  VAR_3->protocol = FUNC_2(VAR_2);
  break;
 }

 VAR_11 = FUNC_4(VAR_3, 0);




 if (FUNC_0(VAR_11))
  return -VAR_0;

 VAR_13 = 0;
 VAR_12 = 0;
 do {
  struct sk_buff *VAR_14 = VAR_11->next;

  VAR_11->next = ((void*)0);
  if (VAR_12 == 0)
   VAR_12 = FUNC_1(VAR_11, VAR_4, VAR_5, VAR_6, VAR_7,
        VAR_8, VAR_9, VAR_10);
  if (VAR_12 == 0)
   VAR_13++;
  else
   FUNC_3(VAR_11);
  VAR_11 = VAR_14;
 } while (VAR_11);


 if (FUNC_6(VAR_12 && VAR_13))
  VAR_12 = 0;
 if (VAR_12 == 0)
  FUNC_3(VAR_3);
 return VAR_12;
}
