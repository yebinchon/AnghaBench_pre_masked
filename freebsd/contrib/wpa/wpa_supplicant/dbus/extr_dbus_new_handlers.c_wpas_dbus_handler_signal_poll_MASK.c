
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dummy; } ;
struct wpa_signal_info {int current_signal; int current_txrate; int current_noise; scalar_t__ chanwidth; int center_frq1; int center_frq2; int avg_signal; int frequency; } ;
typedef int DBusMessageIter ;
typedef int DBusMessage ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ,char*,int *) ;
 int * FUNC_4 (int *,int ,char*) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,int) ;
 int FUNC_8 (int *,char*,int ) ;
 int FUNC_9 (int *,char*,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (struct wpa_supplicant*,struct wpa_signal_info*) ;
 int * FUNC_13 (int *) ;

DBusMessage * FUNC_14(DBusMessage *VAR_3,
         struct wpa_supplicant *VAR_4)
{
 struct wpa_signal_info VAR_5;
 DBusMessage *VAR_6 = ((void*)0);
 DBusMessageIter VAR_7, VAR_8, VAR_9;
 int VAR_10;

 VAR_10 = FUNC_12(VAR_4, &VAR_5);
 if (VAR_10) {
  return FUNC_4(VAR_3, VAR_1,
           "Failed to read signal");
 }

 VAR_6 = FUNC_5(VAR_3);
 if (VAR_6 == ((void*)0))
  goto nomem;

 FUNC_2(VAR_6, &VAR_7);

 if (!FUNC_3(&VAR_7, VAR_2,
           "a{sv}", &VAR_9) ||
     !FUNC_11(&VAR_9, &VAR_8) ||
     !FUNC_7(&VAR_8, "rssi",
     VAR_5.current_signal) ||
     !FUNC_7(&VAR_8, "linkspeed",
     VAR_5.current_txrate / 1000) ||
     !FUNC_7(&VAR_8, "noise",
     VAR_5.current_noise) ||
     !FUNC_9(&VAR_8, "frequency",
      VAR_5.frequency) ||
     (VAR_5.chanwidth != VAR_0 &&
      !FUNC_8(
       &VAR_8, "width",
       FUNC_0(VAR_5.chanwidth))) ||
     (VAR_5.center_frq1 > 0 && VAR_5.center_frq2 > 0 &&
      (!FUNC_7(&VAR_8, "center-frq1",
       VAR_5.center_frq1) ||
       !FUNC_7(&VAR_8, "center-frq2",
       VAR_5.center_frq2))) ||
     (VAR_5.avg_signal &&
      !FUNC_7(&VAR_8, "avg-rssi",
      VAR_5.avg_signal)) ||
     !FUNC_10(&VAR_9, &VAR_8) ||
     !FUNC_1(&VAR_7, &VAR_9))
  goto nomem;

 return VAR_6;

nomem:
 if (VAR_6)
  FUNC_6(VAR_6);
 return FUNC_13(VAR_3);
}
