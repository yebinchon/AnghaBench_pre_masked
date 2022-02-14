
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int dummy; } ;
struct event_base {int dummy; } ;
typedef enum http_cancel_test_type { ____Placeholder_http_cancel_test_type } http_cancel_test_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct evhttp_request* FUNC_0 (int ,struct event_base*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static struct evhttp_request *
FUNC_1(enum http_cancel_test_type VAR_5,
 struct event_base *VAR_6)
{

 if (!(VAR_5 & VAR_1) && (VAR_5 & VAR_2))
  return FUNC_0(VAR_4, VAR_6);
 else

 if ((VAR_5 & VAR_0) || (VAR_5 & VAR_1))
  return FUNC_0(VAR_3, VAR_6);
 else
  return ((void*)0);
}
