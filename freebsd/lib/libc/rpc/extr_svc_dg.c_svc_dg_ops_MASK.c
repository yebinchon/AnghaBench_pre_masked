
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct xp_ops2 {int xp_control; } ;
struct xp_ops {int xp_destroy; int xp_freeargs; int xp_reply; int xp_getargs; int xp_stat; int * xp_recv; } ;
struct TYPE_3__ {struct xp_ops2* xp_ops2; struct xp_ops* xp_ops; } ;
typedef TYPE_1__ SVCXPRT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_2(SVCXPRT *VAR_8)
{
 static struct xp_ops VAR_9;
 static struct xp_ops2 VAR_10;



 FUNC_0(&VAR_0);
 if (VAR_9.xp_recv == ((void*)0)) {
  VAR_9.xp_recv = VAR_5;
  VAR_9.xp_stat = VAR_7;
  VAR_9.xp_getargs = VAR_4;
  VAR_9.xp_reply = VAR_6;
  VAR_9.xp_freeargs = VAR_3;
  VAR_9.xp_destroy = VAR_2;
  VAR_10 = VAR_1;
 }
 VAR_8->xp_ops = &VAR_9;
 VAR_8->xp_ops2 = &VAR_10;
 FUNC_1(&VAR_0);
}
