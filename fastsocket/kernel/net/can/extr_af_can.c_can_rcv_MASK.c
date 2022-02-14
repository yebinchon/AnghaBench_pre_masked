
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ data; } ;
struct packet_type {int dummy; } ;
struct net_device {int type; } ;
struct dev_rcv_lists {int dummy; } ;
struct can_frame {int can_dlc; } ;
struct TYPE_2__ {int matches_delta; int matches; int rx_frames_delta; int rx_frames; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,char*,int ,int,int) ;
 int FUNC_1 (struct dev_rcv_lists*,struct sk_buff*) ;
 struct dev_rcv_lists VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct net_device*) ;
 struct dev_rcv_lists* FUNC_4 (struct net_device*) ;
 int VAR_5 ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_6, struct net_device *VAR_7,
     struct packet_type *VAR_8, struct net_device *VAR_9)
{
 struct dev_rcv_lists *VAR_10;
 struct can_frame *VAR_11 = (struct can_frame *)VAR_6->data;
 int VAR_12;

 if (!FUNC_6(FUNC_3(VAR_7), &VAR_5))
  goto drop;

 if (FUNC_0(VAR_7->type != VAR_0 ||
        VAR_6->len != sizeof(struct can_frame) ||
        VAR_11->can_dlc > 8,
        "PF_CAN: dropped non conform skbuf: "
        "dev type %d, len %d, can_dlc %d\n",
        VAR_7->type, VAR_6->len, VAR_11->can_dlc))
  goto drop;


 VAR_4.rx_frames++;
 VAR_4.rx_frames_delta++;

 FUNC_7();


 VAR_12 = FUNC_1(&VAR_3, VAR_6);


 VAR_10 = FUNC_4(VAR_7);
 if (VAR_10)
  VAR_12 += FUNC_1(VAR_10, VAR_6);

 FUNC_8();


 FUNC_2(VAR_6);

 if (VAR_12 > 0) {
  VAR_4.matches++;
  VAR_4.matches_delta++;
 }

 return VAR_2;

drop:
 FUNC_5(VAR_6);
 return VAR_1;
}
