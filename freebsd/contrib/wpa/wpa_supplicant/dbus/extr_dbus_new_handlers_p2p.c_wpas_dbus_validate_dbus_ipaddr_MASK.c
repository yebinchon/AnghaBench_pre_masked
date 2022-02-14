
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_dbus_dict_entry {scalar_t__ type; scalar_t__ array_type; int array_len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct wpa_dbus_dict_entry VAR_2)
{
 if (VAR_2.type != VAR_0 ||
     VAR_2.array_type != VAR_1 ||
     VAR_2.array_len != 4)
  return 0;

 return 1;
}
