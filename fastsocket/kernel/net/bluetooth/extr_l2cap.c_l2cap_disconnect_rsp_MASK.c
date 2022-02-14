
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sock {int dummy; } ;
struct l2cap_disconn_rsp {int dcid; int scid; } ;
struct l2cap_conn {int chan_list; } ;
struct l2cap_cmd_hdr {int dummy; } ;
struct TYPE_2__ {int monitor_timer; int retrans_timer; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct sock*,int ) ;
 struct sock* FUNC_7 (int *,int ) ;
 TYPE_1__* FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static inline int FUNC_11(struct l2cap_conn *VAR_0, struct l2cap_cmd_hdr *VAR_1, u8 *VAR_2)
{
 struct l2cap_disconn_rsp *VAR_3 = (struct l2cap_disconn_rsp *) VAR_2;
 u16 VAR_4, VAR_5;
 struct sock *VAR_6;

 VAR_5 = FUNC_3(VAR_3->scid);
 VAR_4 = FUNC_3(VAR_3->dcid);

 FUNC_0("dcid 0x%4.4x scid 0x%4.4x", VAR_4, VAR_5);

 VAR_6 = FUNC_7(&VAR_0->chan_list, VAR_5);
 if (!VAR_6)
  return 0;

 FUNC_10(FUNC_2(VAR_6));
 FUNC_10(FUNC_1(VAR_6));
 FUNC_5(&FUNC_8(VAR_6)->retrans_timer);
 FUNC_5(&FUNC_8(VAR_6)->monitor_timer);

 FUNC_6(VAR_6, 0);
 FUNC_4(VAR_6);

 FUNC_9(VAR_6);
 return 0;
}
