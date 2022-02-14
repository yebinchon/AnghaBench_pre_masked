
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct event_base {int dummy; } ;
struct evconnlistener {int dummy; } ;
struct bufferevent {int dummy; } ;
typedef int evutil_socket_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bufferevent*,int ) ;
 int FUNC_1 (struct bufferevent*,int ) ;
 int FUNC_2 (struct bufferevent*,int *,int ,int ,int *) ;
 struct bufferevent* FUNC_3 (struct event_base*,int ,int ) ;
 int FUNC_4 (struct bufferevent*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct event_base*) ;
 int FUNC_6 (int ,char*) ;
 int VAR_6 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct evconnlistener *VAR_7, evutil_socket_t VAR_8,
    struct sockaddr *VAR_9, int VAR_10, void *VAR_11)
{
 struct event_base *VAR_12 = VAR_11;
 struct bufferevent *VAR_13;

 VAR_13 = FUNC_3(VAR_12, VAR_8, VAR_0);
 if (!VAR_13) {
  FUNC_6(VAR_6, "Error constructing bufferevent!");
  FUNC_5(VAR_12);
  return;
 }
 FUNC_2(VAR_13, ((void*)0), VAR_5, VAR_4, ((void*)0));
 FUNC_1(VAR_13, VAR_2);
 FUNC_0(VAR_13, VAR_1);

 FUNC_4(VAR_13, VAR_3, FUNC_7(VAR_3));
}
