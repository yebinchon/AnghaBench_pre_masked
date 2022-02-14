
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct auth_xfer {struct auth_master* allow_notify_list; TYPE_1__* task_probe; } ;
struct auth_master {struct auth_master* next; } ;
struct TYPE_2__ {struct auth_master* masters; } ;


 int FUNC_0 (struct auth_master*) ;
 struct auth_master* FUNC_1 (struct auth_master*) ;

__attribute__((used)) static void
FUNC_2(struct auth_xfer* VAR_0)
{
 struct auth_master* VAR_1 = ((void*)0), *VAR_2 = ((void*)0);
 struct auth_master* VAR_3;

 for(VAR_3 = VAR_0->task_probe->masters; VAR_3; VAR_3=VAR_3->next) {
  struct auth_master* VAR_4 = FUNC_1(VAR_3);
  if(!VAR_4) {
   FUNC_0(VAR_1);

   return;
  }
  VAR_4->next = ((void*)0);
  if(VAR_2) VAR_2->next = VAR_4;
  if(!VAR_1) VAR_1 = VAR_4;
  VAR_2 = VAR_4;
 }

 FUNC_0(VAR_0->allow_notify_list);
 VAR_0->allow_notify_list = VAR_1;
}
