
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evhttp_request {int cb_arg; int (* cb ) (struct evhttp_request*,int ) ;int * uri_elems; int * uri; TYPE_1__* evcon; int userdone; int response_code; } ;
typedef enum evhttp_request_error { ____Placeholder_evhttp_request_error } evhttp_request_error ;
struct TYPE_2__ {int requests; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct evhttp_request*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (struct evhttp_request*,int ) ;

__attribute__((used)) static int
FUNC_4(struct evhttp_request *VAR_3,
    enum evhttp_request_error VAR_4)
{
 switch (VAR_4) {
  case 132:
   VAR_3->response_code = VAR_1;
   break;
  default:
   VAR_3->response_code = VAR_0;
 }

 switch (VAR_4) {
 case 128:
 case 131:
  if (!VAR_3->userdone) {

   FUNC_0(&VAR_3->evcon->requests, VAR_3, VAR_2);



   VAR_3->evcon = ((void*)0);
  }
  return (-1);
 case 130:
 case 133:
 case 129:
 case 132:
 default:

  if (VAR_3->uri) {
   FUNC_2(VAR_3->uri);
   VAR_3->uri = ((void*)0);
  }
  if (VAR_3->uri_elems) {
   FUNC_1(VAR_3->uri_elems);
   VAR_3->uri_elems = ((void*)0);
  }





  (*VAR_3->cb)(VAR_3, VAR_3->cb_arg);
 }

 return (0);
}
