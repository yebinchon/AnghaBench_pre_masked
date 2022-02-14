
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ unicast; } ;
union wpa_event_data {TYPE_1__ michael_mic_failure; } ;
typedef int u8 ;
struct os_reltime {scalar_t__ sec; } ;
struct wpa_supplicant {int pending_mic_error_report; int pending_mic_error_pairwise; int countermeasures; scalar_t__ mic_errors_seen; struct os_reltime last_michael_mic_error; int wpa; int bssid; } ;
typedef int rval ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct wpa_supplicant*,int *) ;
 int FUNC_2 (int,int,int ,struct wpa_supplicant*,int *) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (struct os_reltime*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct os_reltime*,struct os_reltime*,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (struct wpa_supplicant*,int ) ;
 int FUNC_9 (struct wpa_supplicant*,int ,char*,int) ;
 int FUNC_10 (struct wpa_supplicant*,int) ;
 int FUNC_11 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_12 (int ,int,int) ;
 int FUNC_13 (struct wpa_supplicant*,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_14(struct wpa_supplicant *VAR_5,
      union wpa_event_data *VAR_6)
{
 int VAR_7;
 struct os_reltime VAR_8;

 FUNC_11(VAR_5, VAR_1, "Michael MIC failure detected");
 VAR_7 = (VAR_6 && VAR_6->michael_mic_failure.unicast);
 FUNC_4(&VAR_8);
 if ((VAR_5->last_michael_mic_error.sec &&
      !FUNC_6(&VAR_8, &VAR_5->last_michael_mic_error, 60)) ||
     VAR_5->pending_mic_error_report) {
  if (VAR_5->pending_mic_error_report) {





   FUNC_12(VAR_5->wpa, 1,
        VAR_5->pending_mic_error_pairwise);
  }




  FUNC_12(VAR_5->wpa, 1, VAR_7);


  VAR_5->countermeasures = 1;

  FUNC_8(VAR_5, VAR_5->bssid);

  FUNC_11(VAR_5, VAR_1, "TKIP countermeasures started");





  FUNC_7(0, 10000);

  FUNC_10(VAR_5, 1);
  FUNC_13(VAR_5,
           VAR_2);
  FUNC_1(VAR_4,
         VAR_5, ((void*)0));
  FUNC_2(60, 0,
           VAR_4,
           VAR_5, ((void*)0));


 } else {
  FUNC_12(VAR_5->wpa, 1, VAR_7);

 }
 VAR_5->last_michael_mic_error = VAR_8;
 VAR_5->mic_errors_seen++;
}
