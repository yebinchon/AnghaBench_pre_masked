
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; int pkt_type; int ip_summed; int sk; TYPE_1__* dev; int protocol; scalar_t__ data; } ;
struct can_frame {int can_dlc; } ;
struct TYPE_4__ {int tx_frames_delta; int tx_frames; } ;
struct TYPE_3__ {scalar_t__ type; int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_2__ VAR_13 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;

int FUNC_8(struct sk_buff *VAR_14, int VAR_15)
{
 struct sk_buff *VAR_16 = ((void*)0);
 struct can_frame *VAR_17 = (struct can_frame *)VAR_14->data;
 int VAR_18;

 if (VAR_14->len != sizeof(struct can_frame) || VAR_17->can_dlc > 8) {
  FUNC_2(VAR_14);
  return -VAR_2;
 }

 if (VAR_14->dev->type != VAR_0) {
  FUNC_2(VAR_14);
  return -VAR_5;
 }

 if (!(VAR_14->dev->flags & VAR_9)) {
  FUNC_2(VAR_14);
  return -VAR_3;
 }

 VAR_14->protocol = FUNC_1(VAR_6);
 FUNC_6(VAR_14);
 FUNC_7(VAR_14);

 if (VAR_15) {



  VAR_14->pkt_type = VAR_12;
  if (!(VAR_14->dev->flags & VAR_8)) {




   VAR_16 = FUNC_5(VAR_14, VAR_7);
   if (!VAR_16) {
    FUNC_2(VAR_14);
    return -VAR_4;
   }

   VAR_16->sk = VAR_14->sk;
   VAR_16->ip_summed = VAR_1;
   VAR_16->pkt_type = VAR_10;
  }
 } else {

  VAR_14->pkt_type = VAR_11;
 }


 VAR_18 = FUNC_0(VAR_14);
 if (VAR_18 > 0)
  VAR_18 = FUNC_3(VAR_18);

 if (VAR_18) {
  FUNC_2(VAR_16);
  return VAR_18;
 }

 if (VAR_16)
  FUNC_4(VAR_16);


 VAR_13.tx_frames++;
 VAR_13.tx_frames_delta++;

 return 0;
}
