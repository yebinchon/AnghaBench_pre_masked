
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_xprt {int xpt_flags; int xpt_ready; int xpt_list; TYPE_1__* xpt_ops; struct svc_serv* xpt_server; } ;
struct svc_serv {int sv_lock; int sv_tmpcnt; } ;
struct svc_deferred_req {int dummy; } ;
struct TYPE_2__ {int (* xpo_detach ) (struct svc_xprt*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct svc_xprt*) ;
 int FUNC_3 (char*,struct svc_xprt*) ;
 int FUNC_4 (struct svc_deferred_req*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct svc_xprt*) ;
 struct svc_deferred_req* FUNC_10 (struct svc_xprt*) ;
 int FUNC_11 (struct svc_xprt*) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (int ,int *) ;

void FUNC_14(struct svc_xprt *VAR_3)
{
 struct svc_serv *VAR_4 = VAR_3->xpt_server;
 struct svc_deferred_req *VAR_5;


 if (FUNC_12(VAR_0, &VAR_3->xpt_flags))
  FUNC_0();

 FUNC_3("svc: svc_delete_xprt(%p)\n", VAR_3);
 VAR_3->xpt_ops->xpo_detach(VAR_3);

 FUNC_7(&VAR_4->sv_lock);
 if (!FUNC_12(VAR_1, &VAR_3->xpt_flags))
  FUNC_5(&VAR_3->xpt_list);
 FUNC_1(!FUNC_6(&VAR_3->xpt_ready));
 if (FUNC_13(VAR_2, &VAR_3->xpt_flags))
  VAR_4->sv_tmpcnt--;
 FUNC_8(&VAR_4->sv_lock);

 while ((VAR_5 = FUNC_10(VAR_3)) != ((void*)0))
  FUNC_4(VAR_5);

 FUNC_2(VAR_3);
 FUNC_11(VAR_3);
}
