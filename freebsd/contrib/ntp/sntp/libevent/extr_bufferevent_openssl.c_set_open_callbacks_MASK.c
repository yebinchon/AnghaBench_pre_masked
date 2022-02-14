
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bufferevent {int timeout_write; int ev_write; int timeout_read; int ev_read; int ev_base; } ;
struct TYPE_2__ {struct bufferevent bev; } ;
struct bufferevent_openssl {int fd_is_set; TYPE_1__ bev; scalar_t__ underlying; } ;
typedef int evutil_socket_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (scalar_t__,int ,int ,int ,struct bufferevent_openssl*) ;
 int FUNC_2 (int *,int ,int ,int,int ,struct bufferevent_openssl*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int *) ;

__attribute__((used)) static int
FUNC_6(struct bufferevent_openssl *VAR_9, evutil_socket_t VAR_10)
{
 if (VAR_9->underlying) {
  FUNC_1(VAR_9->underlying,
      VAR_5, VAR_7, VAR_4,
      VAR_9);
  return 0;
 } else {
  struct bufferevent *VAR_11 = &VAR_9->bev.bev;
  int VAR_12=0, VAR_13=0, VAR_14=0, VAR_15=0;
  if (VAR_10 < 0 && VAR_9->fd_is_set)
   VAR_10 = FUNC_4(&VAR_11->ev_read);
  if (VAR_9->fd_is_set) {
   VAR_12 = FUNC_5(&VAR_11->ev_read, VAR_2, ((void*)0));
   VAR_13 = FUNC_5(&VAR_11->ev_write, VAR_3, ((void*)0));
   FUNC_3(&VAR_11->ev_read);
   FUNC_3(&VAR_11->ev_write);
  }
  FUNC_2(&VAR_11->ev_read, VAR_11->ev_base, VAR_10,
      VAR_2|VAR_1|VAR_0,
      VAR_6, VAR_9);
  FUNC_2(&VAR_11->ev_write, VAR_11->ev_base, VAR_10,
      VAR_3|VAR_1|VAR_0,
      VAR_8, VAR_9);
  if (VAR_12)
   VAR_14 = FUNC_0(&VAR_11->ev_read, &VAR_11->timeout_read);
  if (VAR_13)
   VAR_15 = FUNC_0(&VAR_11->ev_write, &VAR_11->timeout_write);
  if (VAR_10 >= 0) {
   VAR_9->fd_is_set = 1;
  }
  return (VAR_14<0 || VAR_15<0) ? -1 : 0;
 }
}
