
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_frame {int control; scalar_t__ caddr; void* daddr; void* saddr; } ;
struct sk_buff {int len; int data; } ;
struct irlap_cb {int qos_tx; int saddr; } ;
typedef scalar_t__ __u8 ;
typedef int __u32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct irlap_cb*,struct sk_buff*) ;
 int FUNC_3 (struct irlap_cb*,int *) ;
 int FUNC_4 (scalar_t__*,int ,int) ;
 scalar_t__* FUNC_5 (struct sk_buff*,int) ;

void FUNC_6(struct irlap_cb *VAR_6, __u8 VAR_7, __u32 VAR_8,
      struct sk_buff *VAR_9)
{
 struct sk_buff *VAR_10;
 struct test_frame *VAR_11;
 __u8 *VAR_12;

 VAR_10 = FUNC_0(VAR_9->len + sizeof(struct test_frame), VAR_1);
 if (!VAR_10)
  return;


 if (VAR_7 == VAR_0) {
  VAR_11 = (struct test_frame *)
   FUNC_5(VAR_10, sizeof(struct test_frame));


  VAR_11->saddr = FUNC_1(VAR_6->saddr);
  VAR_11->daddr = FUNC_1(VAR_8);
 } else
  VAR_11 = (struct test_frame *) FUNC_5(VAR_10, VAR_2 + VAR_3);

 VAR_11->caddr = VAR_7;
 VAR_11->control = VAR_5 | VAR_4;


 VAR_12 = FUNC_5(VAR_10, VAR_9->len);
 FUNC_4(VAR_12, VAR_9->data, VAR_9->len);


 FUNC_3(VAR_6, &VAR_6->qos_tx);
 FUNC_2(VAR_6, VAR_10);
}
