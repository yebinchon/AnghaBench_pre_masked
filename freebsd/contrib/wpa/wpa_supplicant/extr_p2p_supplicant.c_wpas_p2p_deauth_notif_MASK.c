
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct wpa_supplicant {TYPE_1__* current_ssid; TYPE_2__* global; } ;
struct TYPE_4__ {int * p2p; scalar_t__ p2p_disabled; } ;
struct TYPE_3__ {scalar_t__ mode; scalar_t__ p2p_group; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int const*,scalar_t__,int const*,size_t) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct wpa_supplicant*,int ) ;

int FUNC_3(struct wpa_supplicant *VAR_4, const u8 *VAR_5,
     u16 VAR_6, const u8 *VAR_7, size_t VAR_8,
     int VAR_9)
{
 if (VAR_4->global->p2p_disabled || VAR_4->global->p2p == ((void*)0))
  return 0;

 if (!VAR_9)
  FUNC_0(VAR_4->global->p2p, VAR_5, VAR_6, VAR_7,
     VAR_8);

 if (VAR_6 == VAR_2 && !VAR_9 &&
     VAR_4->current_ssid &&
     VAR_4->current_ssid->p2p_group &&
     VAR_4->current_ssid->mode == VAR_3) {
  FUNC_1(VAR_0, "P2P: GO indicated that the P2P Group "
      "session is ending");
  if (FUNC_2(VAR_4,
       VAR_1)
      > 0)
   return 1;
 }

 return 0;
}
