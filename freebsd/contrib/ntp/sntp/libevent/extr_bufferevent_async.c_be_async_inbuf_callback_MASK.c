
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_cb_info {scalar_t__ n_deleted; } ;
struct evbuffer {int dummy; } ;
struct bufferevent_async {int dummy; } ;
struct bufferevent {int dummy; } ;


 int FUNC_0 (struct bufferevent_async*) ;
 int FUNC_1 (struct bufferevent*) ;
 int FUNC_2 (struct bufferevent*) ;
 struct bufferevent_async* FUNC_3 (struct bufferevent*) ;

__attribute__((used)) static void
FUNC_4(struct evbuffer *VAR_0,
    const struct evbuffer_cb_info *VAR_1,
    void *VAR_2)
{
 struct bufferevent *VAR_3 = VAR_2;
 struct bufferevent_async *VAR_4 = FUNC_3(VAR_3);




 FUNC_2(VAR_3);

 if (VAR_1->n_deleted)
  FUNC_0(VAR_4);

 FUNC_1(VAR_3);
}
