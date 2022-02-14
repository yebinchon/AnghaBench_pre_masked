
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int major; int minor; scalar_t__ kind; int output_headers; } ;
struct evbuffer {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct evhttp_request*,int,char*) ;
 int FUNC_3 (struct evhttp_request*,struct evbuffer*) ;

void
FUNC_4(struct evhttp_request *VAR_1, struct evbuffer *VAR_2)
{
 if (!VAR_1->major || !VAR_1->minor) {
  VAR_1->major = 1;
  VAR_1->minor = 1;
 }

 if (VAR_1->kind != VAR_0)
  FUNC_2(VAR_1, 200, "OK");

 FUNC_1(VAR_1->output_headers);
 FUNC_0(VAR_1->output_headers, "Content-Type", "text/html");
 FUNC_0(VAR_1->output_headers, "Connection", "close");

 FUNC_3(VAR_1, VAR_2);
}
