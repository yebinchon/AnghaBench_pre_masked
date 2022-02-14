
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int dummy; } ;
struct bufferevent {int output; } ;
struct bufferevent_private {struct bufferevent bev; } ;
struct bufferevent_openssl {int old_state; int last_write; struct bufferevent_private bev; int outbuf_cb; int * ssl; struct bufferevent* underlying; } ;
typedef int evutil_socket_t ;
typedef enum bufferevent_ssl_state { ____Placeholder_bufferevent_ssl_state } bufferevent_ssl_state ;
typedef int SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct bufferevent_openssl*,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct bufferevent_openssl*,int,int ) ;
 int FUNC_3 (struct bufferevent*,int) ;
 int FUNC_4 (struct bufferevent*,int *) ;
 int FUNC_5 (struct bufferevent*) ;
 int FUNC_6 (struct bufferevent*) ;
 scalar_t__ FUNC_7 (struct bufferevent_private*,struct event_base*,int *,int) ;
 int FUNC_8 (struct bufferevent*) ;
 int VAR_7 ;
 int FUNC_9 (struct bufferevent*,int,int ,int ) ;
 int FUNC_10 (struct bufferevent*,int ) ;
 int FUNC_11 (int ,int ,struct bufferevent_openssl*) ;
 int FUNC_12 (struct bufferevent_openssl*) ;
 struct bufferevent_openssl* FUNC_13 (int,int) ;

__attribute__((used)) static struct bufferevent *
FUNC_14(struct event_base *VAR_8,
    struct bufferevent *VAR_9,
    evutil_socket_t VAR_10,
    SSL *VAR_11,
    enum bufferevent_ssl_state VAR_12,
    int VAR_13)
{
 struct bufferevent_openssl *VAR_14 = ((void*)0);
 struct bufferevent_private *VAR_15 = ((void*)0);
 int VAR_16 = VAR_13 & ~VAR_0;

 if (VAR_9 != ((void*)0) && VAR_10 >= 0)
  return ((void*)0);

 if (!(VAR_14 = FUNC_13(1, sizeof(struct bufferevent_openssl))))
  goto err;

 VAR_15 = &VAR_14->bev;

 if (FUNC_7(VAR_15, VAR_8,
  &VAR_7, VAR_16) < 0)
  goto err;



 FUNC_0(VAR_11, VAR_5);

 VAR_14->underlying = VAR_9;
 VAR_14->ssl = VAR_11;

 VAR_14->outbuf_cb = FUNC_11(VAR_15->bev.output,
     VAR_6, VAR_14);

 if (VAR_13 & VAR_0)
  FUNC_4(&VAR_14->bev.bev, ((void*)0));

 if (VAR_9) {
  FUNC_8(&VAR_14->bev.bev);
  FUNC_6(VAR_9);
 }

 VAR_14->old_state = VAR_12;
 VAR_14->last_write = -1;

 FUNC_12(VAR_14);

 VAR_10 = FUNC_1(VAR_14, VAR_10);
 if (FUNC_2(VAR_14, VAR_12, VAR_10))
  goto err;

 if (VAR_9) {
  FUNC_9(VAR_9, VAR_3, 0, 0);
  FUNC_3(VAR_9, VAR_3|VAR_4);
  if (VAR_12 == VAR_2)
   FUNC_10(VAR_9,
       VAR_1);
 }

 return &VAR_14->bev.bev;
err:
 if (VAR_14)
  FUNC_5(&VAR_14->bev.bev);
 return ((void*)0);
}
