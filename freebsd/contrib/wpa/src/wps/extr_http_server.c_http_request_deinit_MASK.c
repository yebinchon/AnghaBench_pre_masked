
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct http_server {int request_count; struct http_request* requests; } ;
struct http_request {int fd; int hread; struct http_request* next; struct http_server* srv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct http_request*) ;

void FUNC_3(struct http_request *VAR_0)
{
 struct http_request *VAR_1, *VAR_2;
 struct http_server *VAR_3;

 if (VAR_0 == ((void*)0))
  return;

 VAR_3 = VAR_0->srv;
 VAR_2 = ((void*)0);
 VAR_1 = VAR_3->requests;
 while (VAR_1) {
  if (VAR_1 == VAR_0) {
   if (VAR_2)
    VAR_2->next = VAR_1->next;
   else
    VAR_3->requests = VAR_1->next;
   VAR_3->request_count--;
   break;
  }
  VAR_2 = VAR_1;
  VAR_1 = VAR_1->next;
 }

 FUNC_1(VAR_0->hread);
 FUNC_0(VAR_0->fd);
 FUNC_2(VAR_0);
}
