
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct wpa_dbus_object_desc {int connection; } ;
typedef int DBusMessage ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wpabuf*,int ,int ) ;
 int FUNC_1 (struct wpabuf*) ;
 int FUNC_2 (struct wpabuf*) ;
 int FUNC_3 (struct wpabuf*,struct wpa_dbus_object_desc*) ;
 int FUNC_4 (int *,int ,char const**,int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 struct wpabuf* FUNC_7 (int) ;
 int FUNC_8 (struct wpabuf*) ;
 char* FUNC_9 (struct wpabuf*) ;
 int FUNC_10 (struct wpabuf*,char*) ;

DBusMessage * FUNC_11(DBusMessage *VAR_3,
      struct wpa_dbus_object_desc *VAR_4)
{

 DBusMessage *VAR_5;
 struct wpabuf *VAR_6;

 VAR_6 = FUNC_7(20000);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 FUNC_10(VAR_6, "<?xml version=\"1.0\"?>\n");
 FUNC_10(VAR_6, VAR_0);
 FUNC_10(VAR_6, "<node>");

 FUNC_1(VAR_6);
 FUNC_2(VAR_6);
 FUNC_3(VAR_6, VAR_4);
 FUNC_0(VAR_6, VAR_4->connection,
   FUNC_5(VAR_3));

 FUNC_10(VAR_6, "</node>\n");

 VAR_5 = FUNC_6(VAR_3);
 if (VAR_5) {
  const char *VAR_7 = FUNC_9(VAR_6);

  FUNC_4(VAR_5, VAR_2, &VAR_7,
      VAR_1);
 }
 FUNC_8(VAR_6);

 return VAR_5;
}
