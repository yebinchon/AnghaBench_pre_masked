
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bufferevent {int ev_write; } ;
struct TYPE_2__ {struct bufferevent bev; } ;
struct bufferevent_openssl {TYPE_1__ bev; scalar_t__ underlying; scalar_t__ read_blocked_on_write; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct bufferevent_openssl *VAR_0)
{
 if (VAR_0->read_blocked_on_write)
  return;
 if (VAR_0->underlying) {
  ;
 } else {
  struct bufferevent *VAR_1 = &VAR_0->bev.bev;
  FUNC_0(&VAR_1->ev_write);
 }
}
