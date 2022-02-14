
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_dbus_object_desc {struct wpa_dbus_object_desc* prop_changed_flags; struct wpa_dbus_object_desc* path; int user_data; int (* user_data_free_func ) (int ) ;} ;


 int FUNC_0 (struct wpa_dbus_object_desc*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct wpa_dbus_object_desc *VAR_0)
{
 if (!VAR_0)
  return;


 if (VAR_0->user_data_free_func)
  VAR_0->user_data_free_func(VAR_0->user_data);

 FUNC_0(VAR_0->path);
 FUNC_0(VAR_0->prop_changed_flags);
 FUNC_0(VAR_0);
}
