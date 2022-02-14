
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auth_master {scalar_t__ host; int allow_notify; struct auth_master* next; } ;



__attribute__((used)) static int
FUNC_0(struct auth_master* VAR_0)
{
 struct auth_master* VAR_1;
 for(VAR_1=VAR_0; VAR_1; VAR_1 = VAR_1->next) {
  if(!VAR_1->allow_notify && VAR_1->host)
   return 1;
 }
 return 0;
}
