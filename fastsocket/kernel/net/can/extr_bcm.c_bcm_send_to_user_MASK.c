
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_can {int can_ifindex; int can_family; } ;
struct sock {int dummy; } ;
struct sk_buff {scalar_t__ cb; int tstamp; } ;
struct can_frame {unsigned int nframes; int can_dlc; } ;
struct bcm_sock {int dropped_usr_msgs; } ;
struct bcm_op {int rx_ifindex; int rx_stamp; struct sock* sk; } ;
struct bcm_msg_head {unsigned int nframes; int can_dlc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 unsigned int VAR_2 ;
 struct sk_buff* FUNC_1 (int,int ) ;
 struct bcm_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,struct can_frame*,unsigned int) ;
 int FUNC_6 (struct sockaddr_can*,int ,int) ;
 int FUNC_7 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sock*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_10(struct bcm_op *VAR_3, struct bcm_msg_head *VAR_4,
        struct can_frame *VAR_5, int VAR_6)
{
 struct sk_buff *VAR_7;
 struct can_frame *VAR_8;
 struct sockaddr_can *VAR_9;
 struct sock *VAR_10 = VAR_3->sk;
 unsigned int VAR_11 = VAR_4->nframes * VAR_2;
 int VAR_12;

 VAR_7 = FUNC_1(sizeof(*VAR_4) + VAR_11, FUNC_3());
 if (!VAR_7)
  return;

 FUNC_5(FUNC_7(VAR_7, sizeof(*VAR_4)), VAR_4, sizeof(*VAR_4));

 if (VAR_4->nframes) {

  VAR_8 = (struct can_frame *)FUNC_8(VAR_7);

  FUNC_5(FUNC_7(VAR_7, VAR_11), VAR_5, VAR_11);







  if (VAR_4->nframes == 1)
   VAR_8->can_dlc &= VAR_1;
 }

 if (VAR_6) {

  VAR_7->tstamp = VAR_3->rx_stamp;
 }
 FUNC_0(sizeof(VAR_7->cb) < sizeof(struct sockaddr_can));
 VAR_9 = (struct sockaddr_can *)VAR_7->cb;
 FUNC_6(VAR_9, 0, sizeof(*VAR_9));
 VAR_9->can_family = VAR_0;
 VAR_9->can_ifindex = VAR_3->rx_ifindex;

 VAR_12 = FUNC_9(VAR_10, VAR_7);
 if (VAR_12 < 0) {
  struct bcm_sock *VAR_13 = FUNC_2(VAR_10);

  FUNC_4(VAR_7);

  VAR_13->dropped_usr_msgs++;
 }
}
