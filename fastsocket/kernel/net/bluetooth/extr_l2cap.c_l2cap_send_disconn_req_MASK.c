
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct l2cap_disconn_req {void* scid; void* dcid; } ;
struct l2cap_conn {int dummy; } ;
typedef int req ;
struct TYPE_2__ {int scid; int dcid; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct l2cap_conn*) ;
 TYPE_1__* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct l2cap_conn*,int ,int ,int,struct l2cap_disconn_req*) ;

__attribute__((used)) static void FUNC_4(struct l2cap_conn *VAR_1, struct sock *VAR_2)
{
 struct l2cap_disconn_req VAR_3;

 VAR_3.dcid = FUNC_0(FUNC_2(VAR_2)->dcid);
 VAR_3.scid = FUNC_0(FUNC_2(VAR_2)->scid);
 FUNC_3(VAR_1, FUNC_1(VAR_1),
   VAR_0, sizeof(VAR_3), &VAR_3);
}
