
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_private {scalar_t__ refcnt; } ;
struct bufferevent_filtered {scalar_t__ got_eof; } ;
struct bufferevent {int dummy; } ;
typedef enum bufferevent_flush_mode { ____Placeholder_bufferevent_flush_mode } bufferevent_flush_mode ;
typedef enum bufferevent_filter_result { ____Placeholder_bufferevent_filter_result } bufferevent_filter_result ;


 int VAR_0 ;
 int FUNC_0 (struct bufferevent*) ;
 int VAR_1 ;
 int FUNC_1 (struct bufferevent*) ;
 struct bufferevent_private* FUNC_2 (struct bufferevent*) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (struct bufferevent_filtered*,int,int*) ;
 int FUNC_5 (struct bufferevent*,int ,int ) ;
 struct bufferevent* FUNC_6 (struct bufferevent_filtered*) ;

__attribute__((used)) static void
FUNC_7(struct bufferevent *VAR_3, void *VAR_4)
{
 struct bufferevent_filtered *VAR_5 = VAR_4;
 enum bufferevent_filter_result VAR_6;
 enum bufferevent_flush_mode VAR_7;
 struct bufferevent *VAR_8 = FUNC_6(VAR_5);
 struct bufferevent_private *VAR_9 = FUNC_2(VAR_8);
 int VAR_10 = 0;

 FUNC_0(VAR_8);


 FUNC_3(VAR_9->refcnt >= 0);


 if (VAR_9->refcnt > 0) {

  if (VAR_5->got_eof)
   VAR_7 = VAR_0;
  else
   VAR_7 = VAR_1;


  VAR_6 = FUNC_4(VAR_5, VAR_7, &VAR_10);
  (void)VAR_6;




  if (VAR_10)
   FUNC_5(VAR_8, VAR_2, 0);
 }

 FUNC_1(VAR_8);
}
