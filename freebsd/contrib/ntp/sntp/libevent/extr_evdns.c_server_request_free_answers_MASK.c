
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct server_request {struct server_reply_item* additional; struct server_reply_item* authority; struct server_reply_item* answer; } ;
struct server_reply_item {struct server_reply_item* data; struct server_reply_item* name; struct server_reply_item* next; } ;


 int FUNC_0 (struct server_reply_item*) ;

__attribute__((used)) static void
FUNC_1(struct server_request *VAR_0)
{
 struct server_reply_item *VAR_1, *VAR_2, **VAR_3;
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < 3; ++VAR_4) {
  if (VAR_4==0)
   VAR_3 = &VAR_0->answer;
  else if (VAR_4==1)
   VAR_3 = &VAR_0->authority;
  else
   VAR_3 = &VAR_0->additional;

  VAR_1 = *VAR_3;
  while (VAR_1) {
   VAR_2 = VAR_1->next;
   FUNC_0(VAR_1->name);
   if (VAR_1->data)
    FUNC_0(VAR_1->data);
   FUNC_0(VAR_1);
   VAR_1 = VAR_2;
  }
  *VAR_3 = ((void*)0);
 }
}
