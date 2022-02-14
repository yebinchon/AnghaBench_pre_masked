
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int dummy; } ;
struct client_state {size_t received; } ;
struct bufferevent {int dummy; } ;


 struct evbuffer* FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (struct evbuffer*,size_t) ;
 size_t FUNC_2 (struct evbuffer*) ;

__attribute__((used)) static void
FUNC_3(struct bufferevent *VAR_0, void *VAR_1)
{
 struct client_state *VAR_2 = VAR_1;
 struct evbuffer *VAR_3 = FUNC_0(VAR_0);
 size_t VAR_4 = FUNC_2(VAR_3);
 FUNC_1(VAR_3, VAR_4);
 VAR_2->received += VAR_4;
}
