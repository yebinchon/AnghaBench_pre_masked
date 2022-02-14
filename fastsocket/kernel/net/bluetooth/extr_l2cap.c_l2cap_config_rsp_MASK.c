
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sock {int sk_state; int sk_err; } ;
struct l2cap_conn {int chan_list; } ;
struct l2cap_conf_rsp {int data; int result; int flags; int scid; } ;
struct l2cap_conf_req {int dummy; } ;
struct l2cap_cmd_hdr {int len; } ;
typedef int req ;
struct TYPE_2__ {int conf_state; scalar_t__ fcs; scalar_t__ num_to_ack; scalar_t__ buffer_seq; scalar_t__ expected_tx_seq; int num_conf_req; int num_conf_rsp; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 struct sock* FUNC_7 (int *,int) ;
 int FUNC_8 (struct l2cap_conn*) ;
 int FUNC_9 (struct sock*,int ,int,char*,int*) ;
 TYPE_1__* FUNC_10 (struct sock*) ;
 int FUNC_11 (struct l2cap_conn*,int ,int ,int,char*) ;
 int FUNC_12 (struct l2cap_conn*,struct sock*) ;
 int FUNC_13 (struct sock*,int) ;

__attribute__((used)) static inline int FUNC_14(struct l2cap_conn *VAR_11, struct l2cap_cmd_hdr *VAR_12, u8 *VAR_13)
{
 struct l2cap_conf_rsp *VAR_14 = (struct l2cap_conf_rsp *)VAR_13;
 u16 VAR_15, VAR_16, VAR_17;
 struct sock *VAR_18;

 VAR_15 = FUNC_3(VAR_14->scid);
 VAR_16 = FUNC_3(VAR_14->flags);
 VAR_17 = FUNC_3(VAR_14->result);

 FUNC_0("scid 0x%4.4x flags 0x%2.2x result 0x%2.2x",
   VAR_15, VAR_16, VAR_17);

 VAR_18 = FUNC_7(&VAR_11->chan_list, VAR_15);
 if (!VAR_18)
  return 0;

 switch (VAR_17) {
 case 129:
  break;

 case 128:
  if (FUNC_10(VAR_18)->num_conf_rsp <= VAR_5) {
   int VAR_19 = VAR_12->len - sizeof(*VAR_14);
   char VAR_20[64];

   if (VAR_19 > sizeof(VAR_20) - sizeof(struct l2cap_conf_req)) {
    FUNC_12(VAR_11, VAR_18);
    goto done;
   }


   VAR_17 = 129;
   VAR_19 = FUNC_9(VAR_18, VAR_14->data,
       VAR_19, VAR_20, &VAR_17);
   if (VAR_19 < 0) {
    FUNC_12(VAR_11, VAR_18);
    goto done;
   }

   FUNC_11(VAR_11, FUNC_8(VAR_11),
      VAR_8, VAR_19, VAR_20);
   FUNC_10(VAR_18)->num_conf_req++;
   if (VAR_17 != 129)
    goto done;
   break;
  }

 default:
  VAR_18->sk_state = VAR_1;
  VAR_18->sk_err = VAR_2;
  FUNC_13(VAR_18, VAR_3 * 5);
  FUNC_12(VAR_11, VAR_18);
  goto done;
 }

 if (VAR_16 & 0x01)
  goto done;

 FUNC_10(VAR_18)->conf_state |= VAR_4;

 if (FUNC_10(VAR_18)->conf_state & VAR_7) {
  if (!(FUNC_10(VAR_18)->conf_state & VAR_6)
    || FUNC_10(VAR_18)->fcs != VAR_10)
   FUNC_10(VAR_18)->fcs = VAR_9;

  VAR_18->sk_state = VAR_0;
  FUNC_10(VAR_18)->expected_tx_seq = 0;
  FUNC_10(VAR_18)->buffer_seq = 0;
  FUNC_10(VAR_18)->num_to_ack = 0;
  FUNC_4(FUNC_2(VAR_18));
  FUNC_4(FUNC_1(VAR_18));
  FUNC_6(VAR_18);
 }

done:
 FUNC_5(VAR_18);
 return 0;
}
