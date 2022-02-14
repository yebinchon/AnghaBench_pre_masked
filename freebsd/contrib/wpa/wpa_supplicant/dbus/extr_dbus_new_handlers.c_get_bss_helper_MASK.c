
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_bss {int dummy; } ;
struct bss_handler_args {int id; int wpa_s; } ;
typedef int DBusError ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*,char const*,int ) ;
 struct wpa_bss* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,char const*,int ) ;

__attribute__((used)) static struct wpa_bss * FUNC_3(struct bss_handler_args *VAR_2,
           DBusError *VAR_3, const char *VAR_4)
{
 struct wpa_bss *VAR_5 = FUNC_1(VAR_2->wpa_s, VAR_2->id);

 if (!VAR_5) {
  FUNC_2(VAR_1, "%s[dbus]: no bss with id %d found",
      VAR_4, VAR_2->id);
  FUNC_0(VAR_3, VAR_0,
          "%s: BSS %d not found",
          VAR_4, VAR_2->id);
 }

 return VAR_5;
}
