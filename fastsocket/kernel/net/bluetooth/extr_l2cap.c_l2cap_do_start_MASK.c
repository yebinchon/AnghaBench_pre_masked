
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct l2cap_info_req {void* type; int psm; void* scid; } ;
struct l2cap_conn_req {void* type; int psm; void* scid; } ;
struct l2cap_conn {int info_state; void* info_ident; int info_timer; } ;
typedef int req ;
struct TYPE_2__ {void* ident; int psm; int scid; struct l2cap_conn* conn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (struct sock*) ;
 void* FUNC_2 (struct l2cap_conn*) ;
 TYPE_1__* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct l2cap_conn*,void*,int ,int,struct l2cap_info_req*) ;
 int FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_7)
{
 struct l2cap_conn *VAR_8 = FUNC_3(VAR_7)->conn;

 if (VAR_8->info_state & VAR_2) {
  if (!(VAR_8->info_state & VAR_1))
   return;

  if (FUNC_1(VAR_7)) {
   struct l2cap_conn_req VAR_9;
   VAR_9.scid = FUNC_0(FUNC_3(VAR_7)->scid);
   VAR_9.psm = FUNC_3(VAR_7)->psm;

   FUNC_3(VAR_7)->ident = FUNC_2(VAR_8);

   FUNC_4(VAR_8, FUNC_3(VAR_7)->ident,
     VAR_0, sizeof(VAR_9), &VAR_9);
  }
 } else {
  struct l2cap_info_req VAR_10;
  VAR_10.type = FUNC_0(VAR_5);

  VAR_8->info_state |= VAR_2;
  VAR_8->info_ident = FUNC_2(VAR_8);

  FUNC_5(&VAR_8->info_timer, VAR_6 +
     FUNC_6(VAR_4));

  FUNC_4(VAR_8, VAR_8->info_ident,
     VAR_3, sizeof(VAR_10), &VAR_10);
 }
}
