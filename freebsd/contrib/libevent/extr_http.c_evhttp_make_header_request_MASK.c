
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {scalar_t__ type; int output_headers; int output_buffer; int minor; int major; int uri; } ;
struct evhttp_connection {int bufev; } ;
typedef int size ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char const*,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,char*) ;
 int * FUNC_5 (int ,char*) ;
 char* FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (char*,int,int ,int ) ;

__attribute__((used)) static void
FUNC_9(struct evhttp_connection *VAR_3,
    struct evhttp_request *VAR_4)
{
 const char *VAR_5;

 FUNC_7(VAR_4->output_headers, "Proxy-Connection");


 if (!(VAR_5 = FUNC_6(VAR_4->type))) {
  VAR_5 = "NULL";
 }

 FUNC_2(FUNC_1(VAR_3->bufev),
     "%s %s HTTP/%d.%d\r\n",
     VAR_5, VAR_4->uri, VAR_4->major, VAR_4->minor);


 if ((VAR_4->type == VAR_0 || VAR_4->type == VAR_1) &&
     FUNC_5(VAR_4->output_headers, "Content-Length") == ((void*)0)){
  char VAR_6[22];
  FUNC_8(VAR_6, sizeof(VAR_6), VAR_2,
      FUNC_0(FUNC_3(VAR_4->output_buffer)));
  FUNC_4(VAR_4->output_headers, "Content-Length", VAR_6);
 }
}
