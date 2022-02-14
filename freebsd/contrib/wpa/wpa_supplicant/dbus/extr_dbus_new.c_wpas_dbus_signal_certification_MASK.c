
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpas_dbus_priv {int con; } ;
struct wpabuf {int dummy; } ;
struct wpa_supplicant {int dbus_new_path; TYPE_1__* global; } ;
struct TYPE_2__ {struct wpas_dbus_priv* dbus; } ;
typedef int DBusMessageIter ;
typedef int DBusMessage ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int ,int ) ;
 int FUNC_5 (int *,char*,char const*) ;
 int FUNC_6 (int *,char*,char const**,int) ;
 int FUNC_7 (int *,char*,int) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (struct wpabuf const*) ;
 int FUNC_12 (struct wpabuf const*) ;

void FUNC_13(struct wpa_supplicant *VAR_2,
        int VAR_3, const char *VAR_4,
        const char *VAR_5[],
        int VAR_6,
        const char *VAR_7,
        const struct wpabuf *VAR_8)
{
 struct wpas_dbus_priv *VAR_9;
 DBusMessage *VAR_10;
 DBusMessageIter VAR_11, VAR_12;

 VAR_9 = VAR_2->global->dbus;


 if (VAR_9 == ((void*)0) || !VAR_2->dbus_new_path)
  return;

 VAR_10 = FUNC_2(VAR_2->dbus_new_path,
          VAR_1,
          "Certification");
 if (VAR_10 == ((void*)0))
  return;

 FUNC_1(VAR_10, &VAR_11);
 if (!FUNC_9(&VAR_11, &VAR_12) ||
     !FUNC_7(&VAR_12, "depth", VAR_3) ||
     !FUNC_5(&VAR_12, "subject", VAR_4) ||
     (VAR_5 && VAR_6 &&
      !FUNC_6(&VAR_12, "altsubject",
      VAR_5, VAR_6)) ||
     (VAR_7 &&
      !FUNC_5(&VAR_12, "cert_hash",
       VAR_7)) ||
     (VAR_8 &&
      !FUNC_4(&VAR_12, "cert",
           FUNC_11(VAR_8),
           FUNC_12(VAR_8))) ||
     !FUNC_8(&VAR_11, &VAR_12))
  FUNC_10(VAR_0, "dbus: Failed to construct signal");
 else
  FUNC_0(VAR_9->con, VAR_10, ((void*)0));
 FUNC_3(VAR_10);
}
