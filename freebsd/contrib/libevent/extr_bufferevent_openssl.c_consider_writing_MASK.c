
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct event_watermark {scalar_t__ high; } ;
struct evbuffer {int dummy; } ;
struct bufferevent {int enabled; int ev_write; struct evbuffer* output; } ;
struct TYPE_4__ {struct bufferevent bev; scalar_t__ write_suspended; } ;
struct bufferevent_openssl {TYPE_2__ bev; TYPE_1__* underlying; scalar_t__ read_blocked_on_write; } ;
struct TYPE_3__ {struct event_watermark wm_write; struct evbuffer* output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bufferevent*,int ,int ) ;
 int FUNC_1 (struct bufferevent_openssl*,int) ;
 int FUNC_2 (struct bufferevent_openssl*,int) ;
 scalar_t__ FUNC_3 (struct evbuffer*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct bufferevent_openssl *VAR_6)
{
 int VAR_7;
 struct evbuffer *VAR_8 = VAR_6->bev.bev.output;
 struct evbuffer *VAR_9 = ((void*)0);
 struct event_watermark *VAR_10 = ((void*)0);

 while (VAR_6->read_blocked_on_write) {
  VAR_7 = FUNC_1(VAR_6, 1024);
  if (VAR_7 & VAR_4) {
   struct bufferevent *VAR_11 = &VAR_6->bev.bev;

   FUNC_0(VAR_11, VAR_0, 0);
  }
  if (VAR_7 & (VAR_3|VAR_2))
   break;
 }
 if (VAR_6->read_blocked_on_write)
  return;
 if (VAR_6->underlying) {
  VAR_9 = VAR_6->underlying->output;
  VAR_10 = &VAR_6->underlying->wm_write;
 }
 while ((VAR_6->bev.bev.enabled & VAR_1) &&
     (! VAR_6->bev.write_suspended) &&
     FUNC_3(VAR_8) &&
     (!VAR_9 || (! VAR_10->high || FUNC_3(VAR_9) < VAR_10->high))) {
  int VAR_12;
  if (VAR_10 && VAR_10->high)
   VAR_12 = VAR_10->high - FUNC_3(VAR_9);
  else
   VAR_12 = VAR_5;
  VAR_7 = FUNC_2(VAR_6, VAR_12);
  if (VAR_7 & (VAR_2|VAR_3))
   break;
 }

 if (!VAR_6->underlying) {
  if (FUNC_3(VAR_8) == 0) {
   FUNC_4(&VAR_6->bev.bev.ev_write);
  } else if (VAR_6->bev.write_suspended ||
      !(VAR_6->bev.bev.enabled & VAR_1)) {

   FUNC_4(&VAR_6->bev.bev.ev_write);
  }
 }
}
