
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int dummy; } ;
struct bufferevent {int enabled; int ev_write; int ev_read; int output; } ;
struct bufferevent_private {struct bufferevent bev; } ;
struct bufferevent_openssl {int state; int last_write; struct bufferevent_private bev; scalar_t__ fd_is_set; int * ssl; int outbuf_cb; struct bufferevent* underlying; } ;
typedef scalar_t__ evutil_socket_t ;
typedef enum bufferevent_ssl_state { ____Placeholder_bufferevent_ssl_state } bufferevent_ssl_state ;
typedef int SSL ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_5 ;
 int FUNC_3 (struct bufferevent*,int) ;
 int FUNC_4 (struct bufferevent*,int *) ;
 int FUNC_5 (struct bufferevent*) ;
 int FUNC_6 (struct bufferevent*) ;
 scalar_t__ FUNC_7 (struct bufferevent_private*,struct event_base*,int *,int) ;
 int FUNC_8 (struct bufferevent*) ;
 int VAR_6 ;
 int FUNC_9 (struct bufferevent*,int,int ,int ) ;
 int FUNC_10 (struct bufferevent*,int ) ;
 int FUNC_11 (int ,int ,struct bufferevent_openssl*) ;
 scalar_t__ FUNC_12 (int *,int *) ;
 int FUNC_13 (struct bufferevent_openssl*) ;
 struct bufferevent_openssl* FUNC_14 (int,int) ;
 int FUNC_15 (struct bufferevent_openssl*,scalar_t__) ;
 int FUNC_16 (struct bufferevent_openssl*,scalar_t__) ;

__attribute__((used)) static struct bufferevent *
FUNC_17(struct event_base *VAR_7,
    struct bufferevent *VAR_8,
    evutil_socket_t VAR_9,
    SSL *VAR_10,
    enum bufferevent_ssl_state VAR_11,
    int VAR_12)
{
 struct bufferevent_openssl *VAR_13 = ((void*)0);
 struct bufferevent_private *VAR_14 = ((void*)0);
 int VAR_15 = VAR_12 & ~VAR_0;

 if (VAR_8 != ((void*)0) && VAR_9 >= 0)
  return ((void*)0);

 if (!(VAR_13 = FUNC_14(1, sizeof(struct bufferevent_openssl))))
  goto err;

 VAR_14 = &VAR_13->bev;

 if (FUNC_7(VAR_14, VAR_7,
  &VAR_6, VAR_15) < 0)
  goto err;



 FUNC_2(VAR_10, VAR_4);

 VAR_13->underlying = VAR_8;
 VAR_13->ssl = VAR_10;

 VAR_13->outbuf_cb = FUNC_11(VAR_14->bev.output,
     VAR_5, VAR_13);

 if (VAR_12 & VAR_0)
  FUNC_4(&VAR_13->bev.bev, ((void*)0));

 if (VAR_8) {
  FUNC_8(&VAR_13->bev.bev);
  FUNC_6(VAR_8);
 }

 VAR_13->state = VAR_11;
 VAR_13->last_write = -1;

 FUNC_13(VAR_13);

 switch (VAR_11) {
 case 130:
  FUNC_0(VAR_13->ssl);
  if (FUNC_15(VAR_13, VAR_9) < 0)
   goto err;
  break;
 case 129:
  FUNC_1(VAR_13->ssl);
  if (FUNC_15(VAR_13, VAR_9) < 0)
   goto err;
  break;
 case 128:
  if (FUNC_16(VAR_13, VAR_9) < 0)
   goto err;
  break;
 default:
  goto err;
 }

 if (VAR_8) {
  FUNC_9(VAR_8, VAR_2, 0, 0);
  FUNC_3(VAR_8, VAR_2|VAR_3);
  if (VAR_11 == 128)
   FUNC_10(VAR_8,
       VAR_1);
 } else {
  VAR_13->bev.bev.enabled = VAR_2|VAR_3;
  if (VAR_13->fd_is_set) {
   if (VAR_11 != 128)
    if (FUNC_12(&VAR_13->bev.bev.ev_read, ((void*)0)) < 0)
     goto err;
   if (FUNC_12(&VAR_13->bev.bev.ev_write, ((void*)0)) < 0)
    goto err;
  }
 }

 return &VAR_13->bev.bev;
err:
 if (VAR_13)
  FUNC_5(&VAR_13->bev.bev);
 return ((void*)0);
}
