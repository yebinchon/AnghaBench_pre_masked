
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct http_request {struct http_request* next; } ;


 int FUNC_0 (struct http_request*) ;

__attribute__((used)) static void FUNC_1(struct http_request *VAR_0)
{
 struct http_request *VAR_1;
 while (VAR_0) {
  VAR_1 = VAR_0;
  VAR_0 = VAR_0->next;
  FUNC_0(VAR_1);
 }
}
