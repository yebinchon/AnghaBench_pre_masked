
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct sk_buff {int len; int data; int protocol; int ip_summed; } ;
struct TYPE_4__ {int rx_errors; int rx_packets; int rx_dropped; int rx_bytes; } ;
struct net_device {TYPE_1__ stats; } ;
struct TYPE_5__ {void* h_proto; struct TYPE_5__* h_source; struct TYPE_5__* h_dest; } ;
struct bnep_session {TYPE_2__ eh; struct net_device* dev; } ;
typedef int __be16 ;





 size_t VAR_0 ;
 size_t VAR_1 ;

 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int* VAR_9 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_1 (int,int ) ;
 int FUNC_2 (struct bnep_session*,int,int) ;
 scalar_t__ FUNC_3 (struct bnep_session*,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,struct net_device*) ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (scalar_t__,TYPE_2__*,int) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (void*,int *) ;
 int FUNC_11 (struct sk_buff*,scalar_t__,int) ;
 TYPE_2__* FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*,int) ;
 int FUNC_14 (struct sk_buff*,int) ;
 int FUNC_15 (struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_16(struct bnep_session *VAR_10, struct sk_buff *VAR_11)
{
 struct net_device *VAR_12 = VAR_10->dev;
 struct sk_buff *VAR_13;
 u8 VAR_14;

 VAR_12->stats.rx_bytes += VAR_11->len;

 VAR_14 = *(u8 *) VAR_11->data; FUNC_13(VAR_11, 1);

 if ((VAR_14 & VAR_3) > VAR_2)
  goto badframe;

 if ((VAR_14 & VAR_3) == VAR_0) {
  FUNC_2(VAR_10, VAR_11->data, VAR_11->len);
  FUNC_6(VAR_11);
  return 0;
 }

 FUNC_15(VAR_11);


 if (!FUNC_13(VAR_11, VAR_9[VAR_14 & VAR_3]))
  goto badframe;

 VAR_10->eh.h_proto = FUNC_5((__be16 *) (VAR_11->data - 2));

 if (VAR_14 & VAR_1) {
  if (FUNC_3(VAR_10, VAR_11) < 0)
   goto badframe;
 }


 if (FUNC_9(VAR_10->eh.h_proto) == 0x8100) {
  if (!FUNC_13(VAR_11, 4))
   goto badframe;
  VAR_10->eh.h_proto = FUNC_5((__be16 *) (VAR_11->data - 2));
 }



 VAR_13 = FUNC_1(2 + VAR_7 + VAR_11->len, VAR_8);
 if (!VAR_13) {
  VAR_12->stats.rx_dropped++;
  FUNC_6(VAR_11);
  return -VAR_5;
 }
 FUNC_14(VAR_13, 2);


 switch (VAR_14 & VAR_3) {
 case 131:
  FUNC_7(FUNC_0(VAR_13, VAR_7), &VAR_10->eh, VAR_7);
  break;

 case 129:
  FUNC_7(FUNC_0(VAR_13, VAR_6), VAR_10->eh.h_dest, VAR_6);
  FUNC_7(FUNC_0(VAR_13, VAR_6), FUNC_12(VAR_11), VAR_6);
  FUNC_10(VAR_10->eh.h_proto, (__be16 *) FUNC_0(VAR_13, 2));
  break;

 case 130:
  FUNC_7(FUNC_0(VAR_13, VAR_6), FUNC_12(VAR_11),
         VAR_6);
  FUNC_7(FUNC_0(VAR_13, VAR_6 + 2), VAR_10->eh.h_source,
         VAR_6 + 2);
  break;

 case 128:
  FUNC_7(FUNC_0(VAR_13, VAR_6 * 2), FUNC_12(VAR_11),
         VAR_6 * 2);
  FUNC_10(VAR_10->eh.h_proto, (__be16 *) FUNC_0(VAR_13, 2));
  break;
 }

 FUNC_11(VAR_11, FUNC_0(VAR_13, VAR_11->len), VAR_11->len);
 FUNC_6(VAR_11);

 VAR_12->stats.rx_packets++;
 VAR_13->ip_summed = VAR_4;
 VAR_13->protocol = FUNC_4(VAR_13, VAR_12);
 FUNC_8(VAR_13);
 return 0;

badframe:
 VAR_12->stats.rx_errors++;
 FUNC_6(VAR_11);
 return 0;
}
