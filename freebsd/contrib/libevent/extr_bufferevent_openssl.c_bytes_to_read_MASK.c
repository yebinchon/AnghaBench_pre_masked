
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct event_watermark {scalar_t__ high; } ;
struct evbuffer {int dummy; } ;
struct TYPE_3__ {int enabled; struct event_watermark wm_read; struct evbuffer* input; } ;
struct TYPE_4__ {scalar_t__ read_suspended; TYPE_1__ bev; } ;
struct bufferevent_openssl {TYPE_2__ bev; scalar_t__ write_blocked_on_read; } ;
typedef int ev_ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (struct evbuffer*) ;

__attribute__((used)) static int
FUNC_2(struct bufferevent_openssl *VAR_2)
{
 struct evbuffer *VAR_3 = VAR_2->bev.bev.input;
 struct event_watermark *VAR_4 = &VAR_2->bev.bev.wm_read;
 int VAR_5 = VAR_1;
 ev_ssize_t VAR_6;



 if (VAR_2->write_blocked_on_read) {
  return 0;
 }

 if (! (VAR_2->bev.bev.enabled & VAR_0)) {
  return 0;
 }

 if (VAR_2->bev.read_suspended) {
  return 0;
 }

 if (VAR_4->high) {
  if (FUNC_1(VAR_3) >= VAR_4->high) {
   return 0;
  }

  VAR_5 = VAR_4->high - FUNC_1(VAR_3);
 } else {
  VAR_5 = VAR_1;
 }


 VAR_6 = FUNC_0(&VAR_2->bev);
 if (VAR_5 > VAR_6) {
  VAR_5 = VAR_6;
 }

 return VAR_5;
}
