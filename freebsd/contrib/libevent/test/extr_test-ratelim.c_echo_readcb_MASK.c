
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int dummy; } ;
struct bufferevent {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bufferevent*,int ) ;
 struct evbuffer* FUNC_1 (struct bufferevent*) ;
 struct evbuffer* FUNC_2 (struct bufferevent*) ;
 int FUNC_3 (struct evbuffer*,struct evbuffer*) ;
 int FUNC_4 (struct evbuffer*) ;

__attribute__((used)) static void
FUNC_5(struct bufferevent *VAR_1, void *VAR_2)
{
 struct evbuffer *VAR_3 = FUNC_1(VAR_1);
 struct evbuffer *VAR_4 = FUNC_2(VAR_1);

 FUNC_3(VAR_4, VAR_3);
 if (FUNC_4(VAR_4) > 1024000)
  FUNC_0(VAR_1, VAR_0);
}
