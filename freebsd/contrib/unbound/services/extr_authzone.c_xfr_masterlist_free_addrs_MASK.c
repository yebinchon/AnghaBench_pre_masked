
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auth_master {int * list; struct auth_master* next; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct auth_master* VAR_0)
{
 struct auth_master* VAR_1;
 for(VAR_1=VAR_0; VAR_1; VAR_1=VAR_1->next) {
  if(VAR_1->list) {
   FUNC_0(VAR_1->list);
   VAR_1->list = ((void*)0);
  }
 }
}
