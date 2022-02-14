
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct cf_rendezvous {int xdrs; } ;
struct cf_conn {int xdrs; } ;
struct TYPE_7__ {int maxlen; struct cf_rendezvous* buf; } ;
struct TYPE_6__ {int maxlen; struct cf_rendezvous* buf; } ;
struct TYPE_8__ {scalar_t__ xp_fd; scalar_t__ xp_port; int xp_netid; int xp_tp; TYPE_2__ xp_ltaddr; TYPE_1__ xp_rtaddr; scalar_t__ xp_p1; } ;
typedef TYPE_3__ SVCXPRT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cf_rendezvous*,int) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_5(SVCXPRT *VAR_1)
{
 struct cf_conn *VAR_2;
 struct cf_rendezvous *VAR_3;

 VAR_2 = (struct cf_conn *)VAR_1->xp_p1;

 if (VAR_1->xp_fd != VAR_0)
  (void)FUNC_1(VAR_1->xp_fd);
 if (VAR_1->xp_port != 0) {

  VAR_3 = (struct cf_rendezvous *)VAR_1->xp_p1;
  FUNC_3(VAR_3, sizeof (struct cf_rendezvous));
  VAR_1->xp_port = 0;
 } else {

  FUNC_0(&(VAR_2->xdrs));
  FUNC_3(VAR_2, sizeof(struct cf_conn));
 }
 if (VAR_1->xp_rtaddr.buf)
  FUNC_3(VAR_1->xp_rtaddr.buf, VAR_1->xp_rtaddr.maxlen);
 if (VAR_1->xp_ltaddr.buf)
  FUNC_3(VAR_1->xp_ltaddr.buf, VAR_1->xp_ltaddr.maxlen);
 FUNC_2(VAR_1->xp_tp);
 FUNC_2(VAR_1->xp_netid);
 FUNC_4(VAR_1);
}
