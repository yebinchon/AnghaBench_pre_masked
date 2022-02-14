
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wpa_supplicant {int drv_flags; scalar_t__ wpa_state; TYPE_3__* global; TYPE_1__* conf; } ;
struct TYPE_6__ {TYPE_2__* ifaces; } ;
struct TYPE_5__ {scalar_t__ next; } ;
struct TYPE_4__ {scalar_t__ p2p_no_group_iface; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct wpa_supplicant *VAR_4)
{
 if (VAR_4->conf->p2p_no_group_iface)
  return 0;
 if (VAR_4->drv_flags &
     (VAR_2 |
      VAR_3))
  return 1;

 if (!(VAR_4->drv_flags & VAR_1))
  return 0;
 if (VAR_4->global->ifaces->next)
  return 1;
 if (VAR_4->wpa_state >= VAR_0)
  return 1;
 return 0;
}
