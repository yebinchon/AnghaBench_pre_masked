
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int dummy; } ;
struct bufferevent {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct bufferevent*,int ) ;
 int FUNC_2 (struct bufferevent*,int ) ;
 struct evbuffer* FUNC_3 (struct bufferevent*) ;
 scalar_t__ FUNC_4 (struct evbuffer*) ;

__attribute__((used)) static void
FUNC_5(struct bufferevent *VAR_2, void *VAR_3)
{
 struct evbuffer *VAR_4 = FUNC_3(VAR_2);
 if (FUNC_4(VAR_4))
  return;
 FUNC_0(("Done writing."));
 FUNC_1(VAR_2, VAR_1);
 FUNC_2(VAR_2, VAR_0);
}
