
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worker {int dummy; } ;
struct listen_port {int fd; struct listen_port* next; } ;
struct daemon_remote {struct worker* worker; } ;


 int FUNC_0 (struct daemon_remote*,int ) ;
 int FUNC_1 (char*) ;

int FUNC_2(struct daemon_remote* VAR_0,
 struct listen_port* VAR_1, struct worker* VAR_2)
{
 struct listen_port* VAR_3;
 VAR_0->worker = VAR_2;
 for(VAR_3 = VAR_1; VAR_3; VAR_3 = VAR_3->next) {
  if(!FUNC_0(VAR_0, VAR_3->fd)) {
   FUNC_1("could not create accept comm point");
   return 0;
  }
 }
 return 1;
}
