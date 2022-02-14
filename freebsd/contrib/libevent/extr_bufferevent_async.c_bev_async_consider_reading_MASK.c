
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t high; } ;
struct bufferevent {int enabled; int input; TYPE_1__ wm_read; } ;
struct TYPE_5__ {scalar_t__ read_suspended; scalar_t__ connecting; struct bufferevent bev; } ;
struct bufferevent_async {size_t read_in_progress; TYPE_2__ bev; scalar_t__ ok; int read_overlapped; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bufferevent_async*) ;
 int FUNC_1 (struct bufferevent_async*) ;
 int FUNC_2 (struct bufferevent*) ;
 int FUNC_3 (TYPE_2__*,size_t) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct bufferevent*) ;
 int FUNC_6 (struct bufferevent*,int ,int ) ;
 size_t FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,size_t,int *) ;

__attribute__((used)) static void
FUNC_9(struct bufferevent_async *VAR_2)
{
 size_t VAR_3;
 size_t VAR_4;
 size_t VAR_5;
 int VAR_6;
 struct bufferevent *VAR_7 = &VAR_2->bev.bev;



 if (VAR_2->read_in_progress || VAR_2->bev.connecting)
  return;
 if (!VAR_2->ok || !(VAR_7->enabled&VAR_1)) {
  FUNC_1(VAR_2);
  return;
 }


 VAR_3 = FUNC_7(VAR_7->input);
 VAR_4 = VAR_7->wm_read.high;
 if (VAR_4) {
  if (VAR_3 >= VAR_4) {
   FUNC_1(VAR_2);
   return;
  }
  VAR_5 = VAR_4 - VAR_3;
 } else {
  VAR_5 = 16384;
 }



 VAR_6 = (int)FUNC_4(&VAR_2->bev);
 if (VAR_5 >= (size_t)VAR_6 && VAR_6 >= 0)
  VAR_5 = VAR_6;

 if (VAR_2->bev.read_suspended) {
  FUNC_1(VAR_2);
  return;
 }

 FUNC_5(VAR_7);
 if (FUNC_8(VAR_7->input, VAR_5, &VAR_2->read_overlapped)) {
  VAR_2->ok = 0;
  FUNC_6(VAR_7, VAR_0, 0);
  FUNC_2(VAR_7);
 } else {
  VAR_2->read_in_progress = VAR_5;
  FUNC_3(&VAR_2->bev, VAR_5);
  FUNC_0(VAR_2);
 }

 return;
}
