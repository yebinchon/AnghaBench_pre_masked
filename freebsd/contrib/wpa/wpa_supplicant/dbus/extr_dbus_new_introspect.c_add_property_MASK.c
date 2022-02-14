
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct wpa_dbus_property_desc {scalar_t__ setter; scalar_t__ getter; int type; int dbus_property; } ;


 int FUNC_0 (struct wpabuf*,char*,int ,int ,char*,char*) ;

__attribute__((used)) static void FUNC_1(struct wpabuf *VAR_0,
    const struct wpa_dbus_property_desc *VAR_1)
{
 FUNC_0(VAR_0, "<property name=\"%s\" type=\"%s\" "
        "access=\"%s%s\"/>",
        VAR_1->dbus_property, VAR_1->type,
        VAR_1->getter ? "read" : "",
        VAR_1->setter ? "write" : "");
}
