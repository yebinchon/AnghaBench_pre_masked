
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_context {int cb_ctx; int (* event_cb ) (int ,int ,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;

void FUNC_1(struct wps_context *VAR_1)
{
 if (VAR_1->event_cb == ((void*)0))
  return;

 VAR_1->event_cb(VAR_1->cb_ctx, VAR_0, ((void*)0));
}
