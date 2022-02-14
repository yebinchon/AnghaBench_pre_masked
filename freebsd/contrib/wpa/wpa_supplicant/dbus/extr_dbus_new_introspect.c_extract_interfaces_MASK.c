
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_dbus_object_desc {int properties; int signals; int methods; } ;
struct dl_list {int dummy; } ;


 int FUNC_0 (struct dl_list*,int ) ;
 int FUNC_1 (struct dl_list*,int ) ;
 int FUNC_2 (struct dl_list*,int ) ;

__attribute__((used)) static void FUNC_3(struct dl_list *VAR_0,
          struct wpa_dbus_object_desc *VAR_1)
{
 FUNC_0(VAR_0, VAR_1->methods);
 FUNC_2(VAR_0, VAR_1->signals);
 FUNC_1(VAR_0, VAR_1->properties);
}
