
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct prune_data {int const* addr; struct hostapd_data* hapd; } ;
struct hostapd_data {TYPE_1__* iface; } ;
struct TYPE_4__ {int (* for_each_interface ) (TYPE_2__*,int ,struct prune_data*) ;} ;
struct TYPE_3__ {TYPE_2__* interfaces; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,struct prune_data*) ;

void FUNC_1(struct hostapd_data *VAR_1, const u8 *VAR_2)
{
 struct prune_data VAR_3;
 VAR_3.hapd = VAR_1;
 VAR_3.addr = VAR_2;
 if (VAR_1->iface->interfaces &&
     VAR_1->iface->interfaces->for_each_interface)
  VAR_1->iface->interfaces->for_each_interface(
   VAR_1->iface->interfaces, VAR_0, &VAR_3);
}
