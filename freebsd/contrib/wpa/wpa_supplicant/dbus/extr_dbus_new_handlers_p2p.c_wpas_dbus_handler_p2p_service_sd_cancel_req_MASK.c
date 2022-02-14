
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct wpa_supplicant {int dummy; } ;
typedef int DBusMessageIter ;
typedef int DBusMessage ;


 int FUNC_0 (int *,scalar_t__*) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (struct wpa_supplicant*,scalar_t__) ;

DBusMessage * FUNC_4(
 DBusMessage *VAR_0, struct wpa_supplicant *VAR_1)
{
 DBusMessageIter VAR_2;
 u64 VAR_3 = 0;

 FUNC_1(VAR_0, &VAR_2);
 FUNC_0(&VAR_2, &VAR_3);

 if (VAR_3 == 0)
  goto error;

 if (FUNC_3(VAR_1, VAR_3) < 0)
  goto error;

 return ((void*)0);
error:
 return FUNC_2(VAR_0, ((void*)0));
}
