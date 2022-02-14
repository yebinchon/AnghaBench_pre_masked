
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_serv {scalar_t__ sv_nrthreads; struct svc_serv* sv_pools; int (* sv_shutdown ) (struct svc_serv*) ;int sv_temptimer; TYPE_1__* sv_program; } ;
struct TYPE_2__ {int pg_name; } ;


 int FUNC_0 (struct svc_serv*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,scalar_t__) ;
 int FUNC_3 (struct svc_serv*) ;
 int FUNC_4 (char*,struct svc_serv*) ;
 int FUNC_5 (struct svc_serv*) ;
 int FUNC_6 (struct svc_serv*) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (struct svc_serv*) ;
 int FUNC_9 (struct svc_serv*) ;

void
FUNC_10(struct svc_serv *VAR_0)
{
 FUNC_2("svc: svc_destroy(%s, %d)\n",
    VAR_0->sv_program->pg_name,
    VAR_0->sv_nrthreads);

 if (VAR_0->sv_nrthreads) {
  if (--(VAR_0->sv_nrthreads) != 0) {
   FUNC_9(VAR_0);
   return;
  }
 } else
  FUNC_4("svc_destroy: no threads for serv=%p!\n", VAR_0);

 FUNC_1(&VAR_0->sv_temptimer);
 FUNC_6(VAR_0);

 if (VAR_0->sv_shutdown)
  VAR_0->sv_shutdown(VAR_0);

 FUNC_0(VAR_0);

 if (FUNC_8(VAR_0))
  FUNC_7();

 FUNC_3(VAR_0->sv_pools);
 FUNC_3(VAR_0);
}
