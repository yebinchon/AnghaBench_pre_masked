
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bufferevent {int enabled; } ;
struct TYPE_2__ {struct bufferevent bev; } ;
struct bufferevent_openssl {scalar_t__ read_blocked_on_write; TYPE_1__ bev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bufferevent_openssl*) ;
 int FUNC_1 (struct bufferevent_openssl*) ;

__attribute__((used)) static int
FUNC_2(struct bufferevent_openssl *VAR_2)
{
 struct bufferevent *VAR_3 = &VAR_2->bev.bev;
 int VAR_4 = 0;
 VAR_2->read_blocked_on_write = 0;
 if (!(VAR_3->enabled & VAR_1))
  FUNC_1(VAR_2);
 if (VAR_3->enabled & VAR_0)
  VAR_4 = FUNC_0(VAR_2);
 return VAR_4;
}
