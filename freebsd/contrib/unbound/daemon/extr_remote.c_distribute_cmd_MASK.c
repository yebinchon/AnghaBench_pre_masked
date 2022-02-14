
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct daemon_remote {TYPE_2__* worker; } ;
struct TYPE_6__ {int cmd; } ;
struct TYPE_5__ {TYPE_1__* daemon; } ;
struct TYPE_4__ {int num; TYPE_3__** workers; } ;
typedef int RES ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int ,int *,scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_3__*,int ) ;

__attribute__((used)) static void
FUNC_4(struct daemon_remote* VAR_1, RES* VAR_2, char* VAR_3)
{
 int VAR_4;
 if(!VAR_3 || !VAR_2)
  return;

 for(VAR_4=1; VAR_4<VAR_1->worker->daemon->num; VAR_4++) {
  FUNC_3(VAR_1->worker->daemon->workers[VAR_4],
   VAR_0);
  if(!FUNC_2(VAR_1->worker->daemon->workers[VAR_4]->cmd,
   (uint8_t*)VAR_3, FUNC_1(VAR_3)+1, 0)) {
   FUNC_0(VAR_2, "error could not distribute cmd\n");
   return;
  }
 }
}
