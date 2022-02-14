
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evbuffer {int dummy; } ;
struct TYPE_2__ {int high; size_t low; } ;
struct bufferevent {int cbarg; int (* errorcb ) (struct bufferevent*,short,int ) ;int timeout_read; int ev_read; int (* readcb ) (struct bufferevent*,int ) ;struct evbuffer* input; TYPE_1__ wm_read; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 short VAR_2 ;
 short VAR_3 ;
 size_t FUNC_0 (struct evbuffer*) ;
 short VAR_4 ;
 short VAR_5 ;
 short VAR_6 ;
 int FUNC_1 (int *,int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (struct evbuffer*,int,int) ;
 int FUNC_3 (struct evbuffer*,int ,struct bufferevent*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct bufferevent*,int ) ;
 int FUNC_6 (struct bufferevent*,short,int ) ;

__attribute__((used)) static void
FUNC_7(int VAR_9, short VAR_10, void *VAR_11)
{
 struct bufferevent *VAR_12 = VAR_11;
 int VAR_13 = 0;
 short VAR_14 = VAR_4;
 size_t VAR_15;
 int VAR_16 = -1;

 if (VAR_10 == VAR_6) {
  VAR_14 |= VAR_5;
  goto error;
 }





 if (VAR_12->wm_read.high != 0)
  VAR_16 = VAR_12->wm_read.high;

 VAR_13 = FUNC_2(VAR_12->input, VAR_9, VAR_16);
 if (VAR_13 == -1) {
  if (VAR_8 == VAR_0 || VAR_8 == VAR_1)
   goto reschedule;

  VAR_14 |= VAR_3;
 } else if (VAR_13 == 0) {

  VAR_14 |= VAR_2;
 }

 if (VAR_13 <= 0)
  goto error;

 FUNC_1(&VAR_12->ev_read, VAR_12->timeout_read);


 VAR_15 = FUNC_0(VAR_12->input);
 if (VAR_12->wm_read.low != 0 && VAR_15 < VAR_12->wm_read.low)
  return;
 if (VAR_12->wm_read.high != 0 && VAR_15 > VAR_12->wm_read.high) {
  struct evbuffer *VAR_17 = VAR_12->input;
  FUNC_4(&VAR_12->ev_read);


  FUNC_3(VAR_17, VAR_7, VAR_12);
  return;
 }


 if (VAR_12->readcb != ((void*)0))
  (*VAR_12->readcb)(VAR_12, VAR_12->cbarg);
 return;

 reschedule:
 FUNC_1(&VAR_12->ev_read, VAR_12->timeout_read);
 return;

 error:
 (*VAR_12->errorcb)(VAR_12, VAR_14, VAR_12->cbarg);
}
