
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_er {int deinitializing; void (* deinit_done_cb ) (void*) ;void* deinit_done_ctx; int ap_unsubscribing; int http_srv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int,int ,int ,struct wps_er*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct wps_er*) ;
 int VAR_1 ;
 int FUNC_5 (struct wps_er*) ;

void FUNC_6(struct wps_er *VAR_2, void (*VAR_3)(void *VAR_4), void *VAR_5)
{
 if (VAR_2 == ((void*)0))
  return;
 FUNC_2(VAR_2->http_srv);
 FUNC_4(VAR_2);
 FUNC_5(VAR_2);
 FUNC_1(FUNC_0(&VAR_2->ap_unsubscribing) ? 0 : 5, 0,
          VAR_1, VAR_2, ((void*)0));
 FUNC_3(VAR_0, "WPS ER: Finish deinit from timeout");
 VAR_2->deinitializing = 1;
 VAR_2->deinit_done_cb = VAR_3;
 VAR_2->deinit_done_ctx = VAR_5;
}
