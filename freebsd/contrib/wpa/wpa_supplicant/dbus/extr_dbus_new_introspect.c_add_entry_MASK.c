
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct wpa_dbus_argument {scalar_t__ dir; int type; int * name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct wpabuf*,int *,int ,char*) ;
 int FUNC_1 (struct wpabuf*,char*,char const*,...) ;

__attribute__((used)) static void FUNC_2(struct wpabuf *VAR_1, const char *VAR_2, const char *VAR_3,
        const struct wpa_dbus_argument *VAR_4, int VAR_5)
{
 const struct wpa_dbus_argument *VAR_6;

 if (VAR_4 == ((void*)0) || VAR_4->name == ((void*)0)) {
  FUNC_1(VAR_1, "<%s name=\"%s\"/>", VAR_2, VAR_3);
  return;
 }
 FUNC_1(VAR_1, "<%s name=\"%s\">", VAR_2, VAR_3);
 for (VAR_6 = VAR_4; VAR_6 && VAR_6->name; VAR_6++) {
  FUNC_0(VAR_1, VAR_6->name, VAR_6->type,
   VAR_5 ? (VAR_6->dir == VAR_0 ? "in" : "out") :
   ((void*)0));
 }
 FUNC_1(VAR_1, "</%s>", VAR_2);
}
