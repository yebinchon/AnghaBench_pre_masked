
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct uni_msg {int dummy; } ;
struct ccreq {scalar_t__ cookie; struct ccconn* conn; int req; } ;
struct ccconn {TYPE_3__* port; } ;
struct TYPE_6__ {int uarg; TYPE_2__* cc; int cookies; } ;
struct TYPE_5__ {scalar_t__ cookie; TYPE_1__* funcs; } ;
struct TYPE_4__ {int (* send_uni ) (struct ccconn*,int ,int ,scalar_t__,struct uni_msg*) ;} ;


 struct ccreq* FUNC_0 (int) ;
 int FUNC_1 (int *,struct ccreq*,int ) ;
 int FUNC_2 (struct ccconn*,char*,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct ccconn*,int ,int ,scalar_t__,struct uni_msg*) ;
 int FUNC_4 (struct uni_msg*) ;

__attribute__((used)) static void
FUNC_5(struct ccconn *VAR_1, u_int VAR_2, struct uni_msg *VAR_3)
{
 struct ccreq *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4));
 if (VAR_4 == ((void*)0)) {
  if (VAR_3 != ((void*)0))
   FUNC_4(VAR_3);
  FUNC_2(VAR_1, "no memory for cookie op=%u", VAR_2);
  return;
 }

 if ((VAR_4->cookie = ++VAR_1->port->cc->cookie) == 0)
  VAR_4->cookie = ++VAR_1->port->cc->cookie;
 VAR_4->req = VAR_2;
 VAR_4->conn = VAR_1;

 FUNC_1(&VAR_1->port->cookies, VAR_4, VAR_0);

 VAR_1->port->cc->funcs->send_uni(VAR_1, VAR_1->port->uarg, VAR_2,
     VAR_4->cookie, VAR_3);
}
