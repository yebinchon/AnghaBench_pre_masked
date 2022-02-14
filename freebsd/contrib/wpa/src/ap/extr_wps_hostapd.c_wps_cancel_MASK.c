
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wps_cancel_ctx {int count; } ;
struct hostapd_data {TYPE_1__* wps; } ;
struct TYPE_2__ {int registrar; } ;


 int FUNC_0 (struct hostapd_data*,int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct hostapd_data *VAR_1, void *VAR_2)
{
 struct wps_cancel_ctx *VAR_3 = VAR_2;

 if (VAR_1->wps) {
  VAR_3->count++;
  FUNC_1(VAR_1->wps->registrar);
  FUNC_0(VAR_1, VAR_0, ((void*)0));
 }

 return 0;
}
