
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radius_session {struct radius_session* next; struct radius_client* client; } ;
struct radius_server_data {int dummy; } ;
struct radius_client {struct radius_session* sessions; } ;


 int FUNC_0 (int ,struct radius_server_data*,struct radius_session*) ;
 int FUNC_1 (struct radius_server_data*,struct radius_session*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct radius_server_data *VAR_1,
      struct radius_session *VAR_2)
{
 struct radius_client *VAR_3 = VAR_2->client;
 struct radius_session *VAR_4, *VAR_5;

 FUNC_0(VAR_0, VAR_1, VAR_2);

 VAR_5 = ((void*)0);
 VAR_4 = VAR_3->sessions;
 while (VAR_4) {
  if (VAR_4 == VAR_2) {
   if (VAR_5 == ((void*)0)) {
    VAR_3->sessions = VAR_2->next;
   } else {
    VAR_5->next = VAR_2->next;
   }
   FUNC_1(VAR_1, VAR_2);
   break;
  }
  VAR_5 = VAR_4;
  VAR_4 = VAR_4->next;
 }
}
