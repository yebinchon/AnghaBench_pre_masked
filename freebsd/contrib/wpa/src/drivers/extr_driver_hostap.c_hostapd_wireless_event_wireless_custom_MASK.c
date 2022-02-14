
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int unicast; int * src; } ;
union wpa_event_data {TYPE_1__ michael_mic_failure; } ;
typedef int u8 ;
struct hostap_driver_data {int hapd; } ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int *) ;
 int FUNC_1 (union wpa_event_data*,int ,int) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 char* FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,int ,union wpa_event_data*) ;

__attribute__((used)) static void
FUNC_6(struct hostap_driver_data *VAR_3,
           char *VAR_4)
{
 FUNC_4(VAR_2, "Custom wireless event: '%s'", VAR_4);

 if (FUNC_2(VAR_4, "MLME-MICHAELMICFAILURE.indication", 33) == 0) {
  char *VAR_5;
  u8 VAR_6[VAR_0];
  VAR_5 = FUNC_3(VAR_4, "addr=");
  if (VAR_5 == ((void*)0)) {
   FUNC_4(VAR_2,
       "MLME-MICHAELMICFAILURE.indication "
       "without sender address ignored");
   return;
  }
  VAR_5 += 5;
  if (FUNC_0(VAR_5, VAR_6) == 0) {
   union wpa_event_data VAR_7;
   FUNC_1(&VAR_7, 0, sizeof(VAR_7));
   VAR_7.michael_mic_failure.unicast = 1;
   VAR_7.michael_mic_failure.src = VAR_6;
   FUNC_5(VAR_3->hapd,
          VAR_1, &VAR_7);
  } else {
   FUNC_4(VAR_2,
       "MLME-MICHAELMICFAILURE.indication "
       "with invalid MAC address");
  }
 }
}
