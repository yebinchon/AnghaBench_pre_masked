
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct listen_port {int dummy; } ;
struct daemon {scalar_t__ listening_port; int reuseport; size_t num_ports; scalar_t__ rc_port; TYPE_1__* cfg; struct listen_port* rc_ports; struct listen_port** ports; } ;
struct TYPE_3__ {scalar_t__ port; scalar_t__ num_threads; scalar_t__ control_port; scalar_t__ remote_control_enable; scalar_t__ so_reuseport; } ;


 scalar_t__ FUNC_0 (int,int) ;
 struct listen_port* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct listen_port**) ;
 int FUNC_3 (struct listen_port*) ;
 void* FUNC_4 (TYPE_1__*,int*) ;
 int FUNC_5 (struct daemon*) ;

int
FUNC_6(struct daemon* VAR_0)
{
 FUNC_5(VAR_0);
 if(VAR_0->cfg->port != VAR_0->listening_port) {
  size_t VAR_1;
  struct listen_port* VAR_2;
  VAR_0->reuseport = 0;

  if(VAR_0->ports != ((void*)0)) {
   for(VAR_1=0; VAR_1<VAR_0->num_ports; VAR_1++)
    FUNC_3(VAR_0->ports[VAR_1]);
   FUNC_2(VAR_0->ports);
   VAR_0->ports = ((void*)0);
  }






  VAR_2 = FUNC_4(VAR_0->cfg, &VAR_0->reuseport);
  if(!VAR_2) {
   FUNC_3(VAR_2);
   return 0;
  }
  if(VAR_0->reuseport) {

   VAR_0->num_ports = (size_t)VAR_0->cfg->num_threads;
  } else {


   VAR_0->num_ports = 1;
  }
  if(!(VAR_0->ports = (struct listen_port**)FUNC_0(
   VAR_0->num_ports, sizeof(*VAR_0->ports)))) {
   FUNC_3(VAR_2);
   return 0;
  }
  VAR_0->ports[0] = VAR_2;
  if(VAR_0->reuseport) {

   for(VAR_1=1; VAR_1<VAR_0->num_ports; VAR_1++) {
    if(!(VAR_0->ports[VAR_1]=
     FUNC_4(VAR_0->cfg,
      &VAR_0->reuseport))
     || !VAR_0->reuseport ) {
     for(VAR_1=0; VAR_1<VAR_0->num_ports; VAR_1++)
      FUNC_3(VAR_0->ports[VAR_1]);
     FUNC_2(VAR_0->ports);
     VAR_0->ports = ((void*)0);
     return 0;
    }
   }
  }
  VAR_0->listening_port = VAR_0->cfg->port;
 }
 if(!VAR_0->cfg->remote_control_enable && VAR_0->rc_port) {
  FUNC_3(VAR_0->rc_ports);
  VAR_0->rc_ports = ((void*)0);
  VAR_0->rc_port = 0;
 }
 if(VAR_0->cfg->remote_control_enable &&
  VAR_0->cfg->control_port != VAR_0->rc_port) {
  FUNC_3(VAR_0->rc_ports);
  if(!(VAR_0->rc_ports=FUNC_1(VAR_0->cfg)))
   return 0;
  VAR_0->rc_port = VAR_0->cfg->control_port;
 }
 return 1;
}
