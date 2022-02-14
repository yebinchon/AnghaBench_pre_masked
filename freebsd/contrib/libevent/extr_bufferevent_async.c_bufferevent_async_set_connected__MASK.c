
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_async {int ok; } ;
struct bufferevent {int enabled; } ;


 int FUNC_0 (struct bufferevent*,int ) ;
 int FUNC_1 (struct bufferevent*) ;
 struct bufferevent_async* FUNC_2 (struct bufferevent*) ;

void
FUNC_3(struct bufferevent *VAR_0)
{
 struct bufferevent_async *VAR_1 = FUNC_2(VAR_0);
 VAR_1->ok = 1;
 FUNC_1(VAR_0);

 FUNC_0(VAR_0, VAR_0->enabled);
}
