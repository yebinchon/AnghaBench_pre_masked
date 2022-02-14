
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct event_overlapped {int dummy; } ;
struct bufferevent {int input; } ;
struct TYPE_2__ {struct bufferevent bev; } ;
struct bufferevent_async {int read_in_progress; scalar_t__ ok; TYPE_1__ bev; } ;
typedef int ev_uintptr_t ;
typedef int ev_ssize_t ;


 short VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;
 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (struct bufferevent*) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (struct bufferevent_async*) ;
 int FUNC_4 (struct bufferevent*,struct event_overlapped*) ;
 int FUNC_5 (struct bufferevent*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (struct bufferevent*,short,int ) ;
 int FUNC_8 (struct bufferevent*,int ,int ) ;
 int FUNC_9 (int ,int) ;
 struct bufferevent_async* FUNC_10 (struct event_overlapped*) ;

__attribute__((used)) static void
FUNC_11(struct event_overlapped *VAR_4, ev_uintptr_t VAR_5,
    ev_ssize_t VAR_6, int VAR_7)
{
 struct bufferevent_async *VAR_8 = FUNC_10(VAR_4);
 struct bufferevent *VAR_9 = &VAR_8->bev.bev;
 short VAR_10 = VAR_2;
 ev_ssize_t VAR_11;
 FUNC_0(VAR_9);
 FUNC_2(VAR_8->read_in_progress);

 VAR_11 = VAR_8->read_in_progress - VAR_6;
 FUNC_9(VAR_9->input, VAR_6);
 VAR_8->read_in_progress = 0;
 if (VAR_11)
  FUNC_6(&VAR_8->bev, -VAR_11);

 if (!VAR_7)
  FUNC_4(VAR_9, VAR_4);

 if (VAR_8->ok) {
  if (VAR_7 && VAR_6) {
   FUNC_1(VAR_9);
   FUNC_8(VAR_9, VAR_3, 0);
   FUNC_3(VAR_8);
  } else if (!VAR_7) {
   VAR_10 |= VAR_1;
   VAR_8->ok = 0;
   FUNC_7(VAR_9, VAR_10, 0);
  } else if (!VAR_6) {
   VAR_10 |= VAR_0;
   VAR_8->ok = 0;
   FUNC_7(VAR_9, VAR_10, 0);
  }
 }

 FUNC_5(VAR_9);
}
