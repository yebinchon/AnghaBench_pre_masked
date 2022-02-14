
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpas_dbus_priv {int globals_start; TYPE_1__* all_interface_properties; } ;
struct TYPE_2__ {scalar_t__ dbus_property; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(struct wpas_dbus_priv *VAR_0)
{
 int VAR_1 = VAR_0->globals_start;


 while (VAR_0->all_interface_properties[VAR_1].dbus_property)
  FUNC_0((char *)
   VAR_0->all_interface_properties[VAR_1++].dbus_property);
 FUNC_0((char *) VAR_0->all_interface_properties);
}
