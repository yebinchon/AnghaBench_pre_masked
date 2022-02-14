
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_type; } ;
struct l2cap_chan_list {int dummy; } ;
struct l2cap_conn {int disc_reason; struct l2cap_chan_list chan_list; } ;
struct TYPE_2__ {void* omtu; void* dcid; void* scid; struct l2cap_conn* conn; int psm; } ;


 int FUNC_0 (char*,struct l2cap_conn*,int ,void*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct l2cap_chan_list*,struct sock*) ;
 int FUNC_2 (struct sock*,struct sock*) ;
 void* FUNC_3 (struct l2cap_chan_list*) ;
 TYPE_1__* FUNC_4 (struct sock*) ;

__attribute__((used)) static void FUNC_5(struct l2cap_conn *VAR_5, struct sock *VAR_6, struct sock *VAR_7)
{
 struct l2cap_chan_list *VAR_8 = &VAR_5->chan_list;

 FUNC_0("conn %p, psm 0x%2.2x, dcid 0x%4.4x", VAR_5,
   FUNC_4(VAR_6)->psm, FUNC_4(VAR_6)->dcid);

 VAR_5->disc_reason = 0x13;

 FUNC_4(VAR_6)->conn = VAR_5;

 if (VAR_6->sk_type == VAR_4) {

  FUNC_4(VAR_6)->scid = FUNC_3(VAR_8);
 } else if (VAR_6->sk_type == VAR_3) {

  FUNC_4(VAR_6)->scid = VAR_0;
  FUNC_4(VAR_6)->dcid = VAR_0;
  FUNC_4(VAR_6)->omtu = VAR_2;
 } else {

  FUNC_4(VAR_6)->scid = VAR_1;
  FUNC_4(VAR_6)->dcid = VAR_1;
  FUNC_4(VAR_6)->omtu = VAR_2;
 }

 FUNC_1(VAR_8, VAR_6);

 if (VAR_7)
  FUNC_2(VAR_7, VAR_6);
}
