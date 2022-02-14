
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
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (scalar_t__,int ,int ,int ,struct bufferevent_openssl*) ;
 int FUNC_2 (struct bufferevent_openssl*) ;
 int FUNC_3 (int *,int ,int ,int,int ,struct bufferevent_openssl*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct bufferevent_openssl *VAR_7, evutil_socket_t VAR_8)
{
 if (VAR_7->underlying) {
  FUNC_1(VAR_7->underlying,
      VAR_5, VAR_5,
      VAR_4,
      VAR_7);
  return FUNC_2(VAR_7);
 } else {
  struct bufferevent *VAR_9 = &VAR_7->bev.bev;
  int VAR_10=0, VAR_11=0;
  if (VAR_8 < 0 && VAR_7->fd_is_set)
   VAR_8 = FUNC_5(&VAR_9->ev_read);
  if (VAR_7->fd_is_set) {
   FUNC_4(&VAR_9->ev_read);
   FUNC_4(&VAR_9->ev_write);
  }
  FUNC_3(&VAR_9->ev_read, VAR_9->ev_base, VAR_8,
      VAR_2|VAR_1|VAR_0,
      VAR_6, VAR_7);
  FUNC_3(&VAR_9->ev_write, VAR_9->ev_base, VAR_8,
      VAR_3|VAR_1|VAR_0,
      VAR_6, VAR_7);
  if (VAR_8 >= 0) {
   VAR_10 = FUNC_0(&VAR_9->ev_read, &VAR_9->timeout_read);
   VAR_11 = FUNC_0(&VAR_9->ev_write, &VAR_9->timeout_write);
   VAR_7->fd_is_set = 1;
  }
  return (VAR_10<0 || VAR_11<0) ? -1 : 0;
 }
}
