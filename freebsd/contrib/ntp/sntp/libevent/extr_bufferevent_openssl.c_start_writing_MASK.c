
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bufferevent {int timeout_read; int ev_read; int timeout_write; int ev_write; } ;
struct TYPE_2__ {struct bufferevent bev; } ;
struct bufferevent_openssl {scalar_t__ write_blocked_on_read; TYPE_1__ bev; scalar_t__ underlying; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int
FUNC_1(struct bufferevent_openssl *VAR_0)
{
 int VAR_1 = 0;
 if (VAR_0->underlying) {
  ;
 } else {
  struct bufferevent *VAR_2 = &VAR_0->bev.bev;
  VAR_1 = FUNC_0(&VAR_2->ev_write, &VAR_2->timeout_write);
  if (!VAR_1 && VAR_0->write_blocked_on_read)
   VAR_1 = FUNC_0(&VAR_2->ev_read,
       &VAR_2->timeout_read);
 }
 return VAR_1;
}
