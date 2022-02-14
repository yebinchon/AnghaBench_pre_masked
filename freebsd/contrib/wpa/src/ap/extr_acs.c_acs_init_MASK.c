
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_iface {int drv_flags; TYPE_1__** bss; int current_mode; } ;
typedef enum hostapd_chan_status { ____Placeholder_hostapd_chan_status } hostapd_chan_status ;
struct TYPE_2__ {int msg_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hostapd_iface*) ;
 scalar_t__ FUNC_1 (struct hostapd_iface*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct hostapd_iface*,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,char*) ;

enum hostapd_chan_status FUNC_6(struct hostapd_iface *VAR_6)
{
 FUNC_5(VAR_4, "ACS: Automatic channel selection started, this may take a bit");

 if (VAR_6->drv_flags & VAR_5) {
  FUNC_5(VAR_4, "ACS: Offloading to driver");
  if (FUNC_2(VAR_6->bss[0]))
   return VAR_3;
  return VAR_2;
 }

 if (!VAR_6->current_mode)
  return VAR_3;

 FUNC_0(VAR_6);

 if (FUNC_1(VAR_6) < 0)
  return VAR_3;

 FUNC_3(VAR_6, VAR_1);
 FUNC_4(VAR_6->bss[0]->msg_ctx, VAR_4, VAR_0);

 return VAR_2;
}
