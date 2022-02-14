
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hostapd_data {TYPE_3__* conf; TYPE_2__* iface; } ;
struct TYPE_6__ {int iface; } ;
struct TYPE_5__ {TYPE_1__* interfaces; } ;
struct TYPE_4__ {scalar_t__ (* ctrl_iface_init ) (struct hostapd_data*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hostapd_data*) ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct hostapd_data *VAR_1)
{
 if (!VAR_1->iface->interfaces ||
     !VAR_1->iface->interfaces->ctrl_iface_init)
  return 0;

 if (VAR_1->iface->interfaces->ctrl_iface_init(VAR_1)) {
  FUNC_1(VAR_0,
      "Failed to setup control interface for %s",
      VAR_1->conf->iface);
  return -1;
 }

 return 0;
}
