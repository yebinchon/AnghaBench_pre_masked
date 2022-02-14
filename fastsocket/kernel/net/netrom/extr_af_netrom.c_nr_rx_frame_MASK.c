
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int (* sk_data_ready ) (struct sock*,int) ;int sk_receive_queue; int sk_state; } ;
struct sk_buff {unsigned short* data; int len; struct sock* sk; } ;
struct nr_sock {int bpqext; unsigned short your_index; unsigned short your_id; int my_index; int my_id; unsigned short window; unsigned short t1; int condition; int state; scalar_t__ vl; scalar_t__ vr; scalar_t__ va; scalar_t__ vs; void* user_addr; void* dest_addr; void* source_addr; } ;
struct net_device {int dummy; } ;
typedef void* ax25_address ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int VAR_12 ;
 struct sock* FUNC_2 (void**) ;
 int FUNC_3 () ;
 struct sock* FUNC_4 (unsigned short,unsigned short,void**) ;
 struct sock* FUNC_5 (unsigned short,unsigned short) ;
 int FUNC_6 (struct sock*) ;
 struct sock* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*,struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,struct net_device*) ;
 struct nr_sock* FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sk_buff*,int ) ;
 int FUNC_14 (struct sk_buff*,int) ;
 int FUNC_15 (struct sock*,unsigned short) ;
 int FUNC_16 (struct sock*) ;
 scalar_t__ FUNC_17 (struct sock*) ;
 int FUNC_18 (struct sk_buff*,scalar_t__) ;
 int FUNC_19 (int *,struct sk_buff*) ;
 int FUNC_20 (struct sk_buff*) ;
 int FUNC_21 (struct sock*,int ) ;
 int FUNC_22 (struct sock*,int) ;
 scalar_t__ VAR_13 ;

int FUNC_23(struct sk_buff *VAR_14, struct net_device *VAR_15)
{
 struct sock *VAR_16;
 struct sock *VAR_17;
 struct nr_sock *VAR_18;
 ax25_address *VAR_19, *VAR_20, *VAR_21;
 unsigned short VAR_22, VAR_23;
 unsigned short VAR_24, VAR_25;
 unsigned short VAR_26, VAR_27, VAR_28, VAR_29;
 int VAR_30;

 VAR_14->sk = ((void*)0);





 VAR_19 = (ax25_address *)(VAR_14->data + 0);
 VAR_20 = (ax25_address *)(VAR_14->data + 7);

 VAR_22 = VAR_14->data[15];
 VAR_23 = VAR_14->data[16];
 VAR_24 = VAR_14->data[17];
 VAR_25 = VAR_14->data[18];
 VAR_26 = VAR_14->data[19] & 0x0F;
 VAR_27 = VAR_14->data[19] & 0xF0;




 if (VAR_26 == VAR_5 &&
     VAR_22 == VAR_6 && VAR_23 == VAR_6) {
  FUNC_18(VAR_14, VAR_4 + VAR_9);
  FUNC_20(VAR_14);

  return FUNC_9(VAR_14, VAR_15);
 }
 VAR_16 = ((void*)0);

 if (VAR_22 == 0 && VAR_23 == 0) {
  if (VAR_26 == VAR_2 && VAR_27 == VAR_1)
   VAR_16 = FUNC_4(VAR_24, VAR_25, VAR_19);
 } else {
  if (VAR_26 == VAR_3)
   VAR_16 = FUNC_4(VAR_22, VAR_23, VAR_19);
  else
   VAR_16 = FUNC_5(VAR_22, VAR_23);
 }

 if (VAR_16 != ((void*)0)) {
  FUNC_20(VAR_14);

  if (VAR_26 == VAR_2 && VAR_14->len == 22)
   FUNC_10(VAR_16)->bpqext = 1;
  else
   FUNC_10(VAR_16)->bpqext = 0;

  VAR_30 = FUNC_8(VAR_16, VAR_14);
  FUNC_1(VAR_16);
  return VAR_30;
 }




 if (VAR_26 != VAR_3) {
  if (VAR_13 &&
      (VAR_26 != VAR_7 || VAR_27 != 0))
   FUNC_14(VAR_14, 1);

  return 0;
 }

 VAR_16 = FUNC_2(VAR_20);

 VAR_21 = (ax25_address *)(VAR_14->data + 21);

 if (VAR_16 == ((void*)0) || FUNC_17(VAR_16) ||
     (VAR_17 = FUNC_7(VAR_16)) == ((void*)0)) {
  FUNC_13(VAR_14, 0);
  if (VAR_16)
   FUNC_1(VAR_16);
  return 0;
 }

 VAR_28 = VAR_14->data[20];

 VAR_14->sk = VAR_17;
 VAR_17->sk_state = VAR_11;


 VAR_18 = FUNC_10(VAR_17);
 VAR_18->source_addr = *VAR_20;
 VAR_18->dest_addr = *VAR_19;
 VAR_18->user_addr = *VAR_21;

 VAR_18->your_index = VAR_22;
 VAR_18->your_id = VAR_23;

 FUNC_1(VAR_16);
 VAR_12 = FUNC_3();
 FUNC_0(VAR_16);

 VAR_18->my_index = VAR_12 / 256;
 VAR_18->my_id = VAR_12 % 256;

 VAR_12++;


 if (VAR_28 < VAR_18->window)
  VAR_18->window = VAR_28;


 if (VAR_14->len == 37) {
  VAR_29 = VAR_14->data[36] * 256 + VAR_14->data[35];
  if (VAR_29 * VAR_0 < VAR_18->t1)
   VAR_18->t1 = VAR_29 * VAR_0;
  VAR_18->bpqext = 1;
 } else {
  VAR_18->bpqext = 0;
 }

 FUNC_15(VAR_17, VAR_2);

 VAR_18->condition = 0x00;
 VAR_18->vs = 0;
 VAR_18->va = 0;
 VAR_18->vr = 0;
 VAR_18->vl = 0;
 VAR_18->state = VAR_8;
 FUNC_16(VAR_16);
 FUNC_19(&VAR_16->sk_receive_queue, VAR_14);

 if (!FUNC_21(VAR_16, VAR_10))
  VAR_16->sk_data_ready(VAR_16, VAR_14->len);

 FUNC_1(VAR_16);

 FUNC_6(VAR_17);

 FUNC_11(VAR_17);
 FUNC_12(VAR_17);

 return 1;
}
