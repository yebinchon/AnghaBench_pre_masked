
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ctrl_iface_priv {int sock; TYPE_1__* wpa_s; } ;
struct TYPE_2__ {int ifname; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;

void FUNC_2(struct ctrl_iface_priv *VAR_1)
{
 FUNC_1(VAR_0, "CTRL_IFACE - %s - wait for monitor",
     VAR_1->wpa_s->ifname);
 FUNC_0(VAR_1->sock);
}
