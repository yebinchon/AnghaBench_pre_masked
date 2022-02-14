
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sock {int sk_shutdown; } ;
struct l2cap_disconn_rsp {void* scid; void* dcid; } ;
struct l2cap_disconn_req {int dcid; int scid; } ;
struct l2cap_conn {int chan_list; } ;
struct l2cap_cmd_hdr {int ident; } ;
typedef int rsp ;
struct TYPE_2__ {int monitor_timer; int retrans_timer; int dcid; int scid; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sock*) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct sock*,int ) ;
 struct sock* FUNC_8 (int *,int ) ;
 TYPE_1__* FUNC_9 (struct sock*) ;
 int FUNC_10 (struct l2cap_conn*,int ,int ,int,struct l2cap_disconn_rsp*) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static inline int FUNC_13(struct l2cap_conn *VAR_3, struct l2cap_cmd_hdr *VAR_4, u8 *VAR_5)
{
 struct l2cap_disconn_req *VAR_6 = (struct l2cap_disconn_req *) VAR_5;
 struct l2cap_disconn_rsp VAR_7;
 u16 VAR_8, VAR_9;
 struct sock *VAR_10;

 VAR_9 = FUNC_3(VAR_6->scid);
 VAR_8 = FUNC_3(VAR_6->dcid);

 FUNC_0("scid 0x%4.4x dcid 0x%4.4x", VAR_9, VAR_8);

 VAR_10 = FUNC_8(&VAR_3->chan_list, VAR_8);
 if (!VAR_10)
  return 0;

 VAR_7.dcid = FUNC_5(FUNC_9(VAR_10)->scid);
 VAR_7.scid = FUNC_5(FUNC_9(VAR_10)->dcid);
 FUNC_10(VAR_3, VAR_4->ident, VAR_1, sizeof(VAR_7), &VAR_7);

 VAR_10->sk_shutdown = VAR_2;

 FUNC_12(FUNC_2(VAR_10));
 FUNC_12(FUNC_1(VAR_10));
 FUNC_6(&FUNC_9(VAR_10)->retrans_timer);
 FUNC_6(&FUNC_9(VAR_10)->monitor_timer);

 FUNC_7(VAR_10, VAR_0);
 FUNC_4(VAR_10);

 FUNC_11(VAR_10);
 return 0;
}
