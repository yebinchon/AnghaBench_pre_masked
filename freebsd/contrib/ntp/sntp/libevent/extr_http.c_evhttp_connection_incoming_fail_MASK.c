
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evhttp_request {int cb_arg; int (* cb ) (struct evhttp_request*,int ) ;int * uri_elems; int * uri; TYPE_1__* evcon; int userdone; } ;
typedef enum evhttp_request_error { ____Placeholder_evhttp_request_error } evhttp_request_error ;
struct TYPE_2__ {int requests; } ;
 int FUNC_0 (int *,struct evhttp_request*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (struct evhttp_request*,int ) ;

__attribute__((used)) static int
FUNC_4(struct evhttp_request *VAR_1,
    enum evhttp_request_error VAR_2)
{
 switch (VAR_2) {
 case 128:
 case 131:
  if (!VAR_1->userdone) {

   FUNC_0(&VAR_1->evcon->requests, VAR_1, VAR_0);



   VAR_1->evcon = ((void*)0);
  }
  return (-1);
 case 130:
 case 133:
 case 129:
 case 132:
 default:

  if (VAR_1->uri) {
   FUNC_2(VAR_1->uri);
   VAR_1->uri = ((void*)0);
  }
  if (VAR_1->uri_elems) {
   FUNC_1(VAR_1->uri_elems);
   VAR_1->uri_elems = ((void*)0);
  }





  (*VAR_1->cb)(VAR_1, VAR_1->cb_arg);
 }

 return (0);
}
