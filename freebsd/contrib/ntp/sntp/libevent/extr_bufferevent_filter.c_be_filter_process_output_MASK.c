
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bufferevent_filtered {int (* process_out ) (int ,int ,int,int,int ) ;int outbuf_cb; int context; TYPE_2__* underlying; } ;
struct bufferevent {int enabled; int output; } ;
typedef int ev_ssize_t ;
typedef enum bufferevent_flush_mode { ____Placeholder_bufferevent_flush_mode } bufferevent_flush_mode ;
typedef enum bufferevent_filter_result { ____Placeholder_bufferevent_filter_result } bufferevent_filter_result ;
struct TYPE_3__ {int high; } ;
struct TYPE_4__ {int output; TYPE_1__ wm_write; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bufferevent*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct bufferevent_filtered*,int) ;
 int FUNC_2 (struct bufferevent*,int,int ) ;
 struct bufferevent* FUNC_3 (struct bufferevent_filtered*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int,int,int ) ;

__attribute__((used)) static enum bufferevent_filter_result
FUNC_7(struct bufferevent_filtered *VAR_4,
    enum bufferevent_flush_mode VAR_5,
    int *VAR_6)
{

 enum bufferevent_filter_result VAR_7 = VAR_1;
 struct bufferevent *VAR_8 = FUNC_3(VAR_4);
 int VAR_9 = 0;

 if (VAR_5 == VAR_0) {





  if (!(VAR_8->enabled & VAR_3) ||
      FUNC_1(VAR_4, VAR_5) ||
      !FUNC_5(VAR_8->output))
   return VAR_1;
 }



 FUNC_4(VAR_8->output, VAR_4->outbuf_cb, 0);

 do {
  int VAR_10 = 0;
  VAR_9 = 0;

  do {
   ev_ssize_t VAR_11 = -1;
   if (VAR_5 == VAR_0 &&
       VAR_4->underlying->wm_write.high)
    VAR_11 = VAR_4->underlying->wm_write.high -
        FUNC_5(VAR_4->underlying->output);

   VAR_7 = VAR_4->process_out(FUNC_3(VAR_4)->output,
       VAR_4->underlying->output,
       VAR_11,
       VAR_5,
       VAR_4->context);

   if (VAR_7 == VAR_1)
    VAR_10 = *VAR_6 = 1;
  } while (
   VAR_7 == VAR_1 &&

   (VAR_8->enabled & VAR_3) &&


   FUNC_5(VAR_8->output) &&

   !FUNC_1(VAR_4,VAR_5));

  if (VAR_10) {

   FUNC_2(VAR_8, VAR_3, 0);

   if (VAR_7 == VAR_1 &&
       (VAR_8->enabled & VAR_3) &&
       FUNC_5(VAR_8->output) &&
       !FUNC_1(VAR_4, VAR_5)) {
    VAR_9 = 1;
   }
  }
 } while (VAR_9);


 FUNC_4(VAR_8->output,VAR_4->outbuf_cb,
     VAR_2);

 if (*VAR_6)
  FUNC_0(VAR_8);

 return VAR_7;
}
