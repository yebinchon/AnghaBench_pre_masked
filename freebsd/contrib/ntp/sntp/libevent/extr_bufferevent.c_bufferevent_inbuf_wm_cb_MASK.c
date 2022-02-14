
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evbuffer_cb_info {int dummy; } ;
struct evbuffer {int dummy; } ;
struct TYPE_2__ {size_t high; } ;
struct bufferevent {TYPE_1__ wm_read; } ;


 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (struct bufferevent*) ;
 size_t FUNC_2 (struct evbuffer*) ;

__attribute__((used)) static void
FUNC_3(struct evbuffer *VAR_0,
    const struct evbuffer_cb_info *VAR_1,
    void *VAR_2)
{
 struct bufferevent *VAR_3 = VAR_2;
 size_t VAR_4;

 VAR_4 = FUNC_2(VAR_0);

 if (VAR_4 >= VAR_3->wm_read.high)
  FUNC_0(VAR_3);
 else
  FUNC_1(VAR_3);
}
