
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sock {int sk_state; } ;
struct l2cap_conn_rsp {int status; int result; int dcid; int scid; } ;
struct l2cap_conn {int chan_list; } ;
struct l2cap_cmd_hdr {int ident; } ;
struct TYPE_2__ {int dcid; int conf_state; int num_conf_req; int ident; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_1 (int ) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int *) ;
 int FUNC_4 (struct sock*,int ) ;
 struct sock* FUNC_5 (int *,int ) ;
 struct sock* FUNC_6 (int *,int) ;
 int FUNC_7 (struct l2cap_conn*) ;
 TYPE_1__* FUNC_8 (struct sock*) ;
 int FUNC_9 (struct l2cap_conn*,int ,int ,int ,int *) ;

__attribute__((used)) static inline int FUNC_10(struct l2cap_conn *VAR_5, struct l2cap_cmd_hdr *VAR_6, u8 *VAR_7)
{
 struct l2cap_conn_rsp *VAR_8 = (struct l2cap_conn_rsp *) VAR_7;
 u16 VAR_9, VAR_10, VAR_11, VAR_12;
 struct sock *VAR_13;
 u8 VAR_14[128];

 VAR_9 = FUNC_1(VAR_8->scid);
 VAR_10 = FUNC_1(VAR_8->dcid);
 VAR_11 = FUNC_1(VAR_8->result);
 VAR_12 = FUNC_1(VAR_8->status);

 FUNC_0("dcid 0x%4.4x scid 0x%4.4x result 0x%2.2x status 0x%2.2x", VAR_10, VAR_9, VAR_11, VAR_12);

 if (VAR_9) {
  VAR_13 = FUNC_6(&VAR_5->chan_list, VAR_9);
  if (!VAR_13)
   return 0;
 } else {
  VAR_13 = FUNC_5(&VAR_5->chan_list, VAR_6->ident);
  if (!VAR_13)
   return 0;
 }

 switch (VAR_11) {
 case 128:
  VAR_13->sk_state = VAR_0;
  FUNC_8(VAR_13)->ident = 0;
  FUNC_8(VAR_13)->dcid = VAR_10;
  FUNC_8(VAR_13)->conf_state |= VAR_4;

  FUNC_8(VAR_13)->conf_state &= ~VAR_2;

  FUNC_9(VAR_5, FUNC_7(VAR_5), VAR_3,
     FUNC_3(VAR_13, VAR_14), VAR_14);
  FUNC_8(VAR_13)->num_conf_req++;
  break;

 case 129:
  FUNC_8(VAR_13)->conf_state |= VAR_2;
  break;

 default:
  FUNC_4(VAR_13, VAR_1);
  break;
 }

 FUNC_2(VAR_13);
 return 0;
}
