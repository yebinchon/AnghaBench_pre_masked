
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct hostapd_data {int msg_ctx; TYPE_1__* conf; TYPE_2__* iface; int * drv_priv; } ;
struct TYPE_4__ {int driver_ap_teardown; } ;
struct TYPE_3__ {scalar_t__ broadcast_deauth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct hostapd_data*) ;
 int FUNC_1 (struct hostapd_data*,int *,int ) ;
 scalar_t__ FUNC_2 (struct hostapd_data*) ;
 int FUNC_3 (struct hostapd_data*) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int ,int ,char*) ;
 int FUNC_6 (int ,int ,char*) ;

__attribute__((used)) static int FUNC_7(struct hostapd_data *VAR_3, u16 VAR_4)
{
 int VAR_5 = 0;
 u8 VAR_6[VAR_0];

 if (FUNC_0(VAR_3) || VAR_3->drv_priv == ((void*)0))
  return 0;

 if (!VAR_3->iface->driver_ap_teardown) {
  FUNC_5(VAR_3->msg_ctx, VAR_1,
   "Flushing old station entries");

  if (FUNC_2(VAR_3)) {
   FUNC_6(VAR_3->msg_ctx, VAR_2,
    "Could not connect to kernel driver");
   VAR_5 = -1;
  }
 }
 if (VAR_3->conf && VAR_3->conf->broadcast_deauth) {
  FUNC_5(VAR_3->msg_ctx, VAR_1,
   "Deauthenticate all stations");
  FUNC_4(VAR_6, 0xff, VAR_0);
  FUNC_1(VAR_3, VAR_6, VAR_4);
 }
 FUNC_3(VAR_3);

 return VAR_5;
}
