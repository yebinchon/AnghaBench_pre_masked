
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int dummy; } ;
struct bufferevent {int dummy; } ;
typedef enum bufferevent_ssl_state { ____Placeholder_bufferevent_ssl_state } bufferevent_ssl_state ;
typedef int SSL ;
typedef int BIO ;


 int * FUNC_0 (struct bufferevent*,int) ;
 int FUNC_1 (int *,int *,int *) ;
 struct bufferevent* FUNC_2 (struct event_base*,struct bufferevent*,int,int *,int,int) ;

struct bufferevent *
FUNC_3(struct event_base *VAR_0,
    struct bufferevent *VAR_1,
    SSL *VAR_2,
    enum bufferevent_ssl_state VAR_3,
    int VAR_4)
{


 int VAR_5 = 0;
 BIO *VAR_6;
 if (!VAR_1)
  return ((void*)0);
 if (!(VAR_6 = FUNC_0(VAR_1, VAR_5)))
  return ((void*)0);

 FUNC_1(VAR_2, VAR_6, VAR_6);

 return FUNC_2(
  VAR_0, VAR_1, -1, VAR_2, VAR_3, VAR_4);
}
