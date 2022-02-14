
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_openssl {int allow_dirty_shutdown; } ;
struct bufferevent {int dummy; } ;


 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (struct bufferevent*) ;
 struct bufferevent_openssl* FUNC_2 (struct bufferevent*) ;

void
FUNC_3(struct bufferevent *VAR_0,
    int VAR_1)
{
 struct bufferevent_openssl *VAR_2;
 FUNC_0(VAR_0);
 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2)
  VAR_2->allow_dirty_shutdown = !!VAR_1;
 FUNC_1(VAR_0);
}
