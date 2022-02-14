
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int dummy; } ;
struct bufferevent {int dummy; } ;
typedef scalar_t__ evutil_socket_t ;
typedef enum bufferevent_ssl_state { ____Placeholder_bufferevent_ssl_state } bufferevent_ssl_state ;
typedef int SSL ;
typedef int BIO ;


 long FUNC_0 (int *,int *) ;
 int * FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int *) ;
 struct bufferevent* FUNC_5 (struct event_base*,int *,scalar_t__,int *,int,int) ;

struct bufferevent *
FUNC_6(struct event_base *VAR_0,
    evutil_socket_t VAR_1,
    SSL *VAR_2,
    enum bufferevent_ssl_state VAR_3,
    int VAR_4)
{

 BIO *VAR_5 = FUNC_3(VAR_2);
 long VAR_6 = -1;

 if (VAR_5)
  VAR_6 = FUNC_0(VAR_5, ((void*)0));

 if (VAR_6 >= 0) {

  if (VAR_1 < 0) {

   VAR_1 = (evutil_socket_t) VAR_6;
  } else if (VAR_6 == (long)VAR_1) {

  } else {


   return ((void*)0);
  }
  (void) FUNC_2(VAR_5, 0);
 } else {

  if (VAR_1 >= 0) {

   VAR_5 = FUNC_1(VAR_1, 0);
   FUNC_4(VAR_2, VAR_5, VAR_5);
  } else {

  }
 }

 return FUNC_5(
  VAR_0, ((void*)0), VAR_1, VAR_2, VAR_3, VAR_4);
}
