
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evbuffer {int dummy; } ;
struct TYPE_2__ {size_t high; } ;
struct bufferevent {int enabled; int timeout_read; int ev_read; TYPE_1__ wm_read; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct evbuffer*,int *,int *) ;

void
FUNC_2(struct evbuffer *VAR_1, size_t VAR_2, size_t VAR_3,
    void *VAR_4) {
 struct bufferevent *VAR_5 = VAR_4;




 if (VAR_5->wm_read.high == 0 || VAR_3 < VAR_5->wm_read.high) {
  FUNC_1(VAR_1, ((void*)0), ((void*)0));

  if (VAR_5->enabled & VAR_0)
   FUNC_0(&VAR_5->ev_read, VAR_5->timeout_read);
 }
}
