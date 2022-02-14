
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct radius_session {void* eap; int last_from_port; int last_from_addr; int last_fromlen; int last_from; struct radius_msg* last_msg; struct radius_session* next; } ;
struct radius_server_data {struct radius_client* clients; } ;
struct radius_msg {int dummy; } ;
struct radius_client {struct radius_session* sessions; struct radius_client* next; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct radius_msg*) ;
 int FUNC_3 (struct radius_server_data*,struct radius_msg*,struct sockaddr*,int ,struct radius_client*,int ,int ,struct radius_session*) ;

void FUNC_4(struct radius_server_data *VAR_0, void *VAR_1)
{
 struct radius_client *VAR_2;
 struct radius_session *VAR_3, *VAR_4 = ((void*)0);
 struct radius_msg *VAR_5;

 if (VAR_0 == ((void*)0))
  return;

 for (VAR_2 = VAR_0->clients; VAR_2; VAR_2 = VAR_2->next) {
  for (VAR_3 = VAR_2->sessions; VAR_3; VAR_3 = VAR_3->next) {
   if (VAR_3->eap == VAR_1 && VAR_3->last_msg) {
    VAR_4 = VAR_3;
    break;
   }
  }
  if (VAR_4)
   break;
 }

 if (VAR_4 == ((void*)0)) {
  FUNC_0("No session matched callback ctx");
  return;
 }

 VAR_5 = VAR_4->last_msg;
 VAR_4->last_msg = ((void*)0);
 FUNC_1(VAR_4->eap);
 if (FUNC_3(VAR_0, VAR_5,
      (struct sockaddr *) &VAR_4->last_from,
      VAR_4->last_fromlen, VAR_2,
      VAR_4->last_from_addr,
      VAR_4->last_from_port, VAR_4) == -2)
  return;

 FUNC_2(VAR_5);
}
