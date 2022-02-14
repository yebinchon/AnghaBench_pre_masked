
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_state {int c; scalar_t__ ssl; struct rc_state* next; } ;
struct daemon_remote {int * worker; scalar_t__ active; struct rc_state* busy_list; int * accept_list; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rc_state*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct daemon_remote* VAR_0)
{
 struct rc_state* VAR_1, *VAR_2;
 if(!VAR_0) return;

 FUNC_3(VAR_0->accept_list);
 VAR_0->accept_list = ((void*)0);

 VAR_1 = VAR_0->busy_list;
 while(VAR_1) {
  VAR_2 = VAR_1->next;
  if(VAR_1->ssl)
   FUNC_0(VAR_1->ssl);
  FUNC_1(VAR_1->c);
  FUNC_2(VAR_1);
  VAR_1 = VAR_2;
 }
 VAR_0->busy_list = ((void*)0);
 VAR_0->active = 0;
 VAR_0->worker = ((void*)0);
}
