
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bufferevent_filtered {int (* process_in ) (int ,int ,int,int,int ) ;int context; TYPE_2__* underlying; } ;
struct TYPE_3__ {int high; } ;
struct bufferevent {int enabled; int input; TYPE_1__ wm_read; } ;
typedef int ev_ssize_t ;
typedef enum bufferevent_flush_mode { ____Placeholder_bufferevent_flush_mode } bufferevent_flush_mode ;
typedef enum bufferevent_filter_result { ____Placeholder_bufferevent_filter_result } bufferevent_filter_result ;
struct TYPE_4__ {int input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bufferevent*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct bufferevent_filtered*,int) ;
 struct bufferevent* FUNC_2 (struct bufferevent_filtered*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int,int,int ) ;

__attribute__((used)) static enum bufferevent_filter_result
FUNC_5(struct bufferevent_filtered *VAR_3,
   enum bufferevent_flush_mode VAR_4,
   int *VAR_5)
{
 enum bufferevent_filter_result VAR_6;
 struct bufferevent *VAR_7 = FUNC_2(VAR_3);

 if (VAR_4 == VAR_0) {


  if (!(VAR_7->enabled & VAR_2) ||
      FUNC_1(VAR_3, VAR_4))
   return VAR_1;
 }

 do {
  ev_ssize_t VAR_8 = -1;
  if (VAR_4 == VAR_0 && VAR_7->wm_read.high)
   VAR_8 = VAR_7->wm_read.high -
       FUNC_3(VAR_7->input);

  VAR_6 = VAR_3->process_in(VAR_3->underlying->input,
      VAR_7->input, VAR_8, VAR_4, VAR_3->context);

  if (VAR_6 == VAR_1)
   *VAR_5 = 1;
 } while (VAR_6 == VAR_1 &&
   (VAR_7->enabled & VAR_2) &&
   FUNC_3(VAR_3->underlying->input) &&
   !FUNC_1(VAR_3, VAR_4));

 if (*VAR_5)
  FUNC_0(VAR_7);

 return VAR_6;
}
