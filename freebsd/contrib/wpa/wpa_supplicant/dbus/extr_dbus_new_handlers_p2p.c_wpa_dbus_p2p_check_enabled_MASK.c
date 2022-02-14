
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* global; } ;
typedef int dbus_bool_t ;
struct TYPE_2__ {int * p2p; scalar_t__ p2p_disabled; } ;
typedef int DBusMessage ;
typedef int DBusError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,int ,char*) ;

__attribute__((used)) static dbus_bool_t FUNC_2(struct wpa_supplicant *VAR_3,
           DBusMessage *VAR_4,
           DBusMessage **VAR_5,
           DBusError *VAR_6)
{

 if (VAR_3->global->p2p_disabled || VAR_3->global->p2p == ((void*)0)) {
  if (VAR_5) {
   *VAR_5 = FUNC_0(
    VAR_4, VAR_0,
    "P2P is not available for this interface");
  }
  FUNC_1(VAR_6, VAR_0,
         "P2P is not available for this interface");
  return VAR_1;
 }
 return VAR_2;
}
