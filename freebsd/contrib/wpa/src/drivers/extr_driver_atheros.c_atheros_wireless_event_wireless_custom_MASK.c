
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int unicast; int * src; } ;
union wpa_event_data {TYPE_1__ michael_mic_failure; } ;
typedef int u8 ;
typedef void* u32 ;
struct TYPE_4__ {void* tx_bytes; void* rx_bytes; void* tx_packets; void* rx_packets; } ;
struct atheros_driver_data {int hapd; TYPE_2__ acct_data; int * acct_mac; } ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct atheros_driver_data*,int *,int *,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,int *) ;
 int FUNC_3 (union wpa_event_data*,int ,int) ;
 char* FUNC_4 (char*,char) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 char* FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;
 void* FUNC_9 (char*,int *,int) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (int ,int ,union wpa_event_data*) ;

__attribute__((used)) static void
FUNC_12(struct atheros_driver_data *VAR_5,
           char *VAR_6, char *VAR_7)
{

 FUNC_10(VAR_4, "Custom wireless event: '%s'", VAR_6);

 if (FUNC_6(VAR_6, "MLME-MICHAELMICFAILURE.indication", 33) == 0) {
  char *VAR_8;
  u8 VAR_9[VAR_0];
  VAR_8 = FUNC_7(VAR_6, "addr=");
  if (VAR_8 == ((void*)0)) {
   FUNC_10(VAR_4,
       "MLME-MICHAELMICFAILURE.indication "
       "without sender address ignored");
   return;
  }
  VAR_8 += 5;
  if (FUNC_2(VAR_8, VAR_9) == 0) {
   union wpa_event_data VAR_10;
   FUNC_3(&VAR_10, 0, sizeof(VAR_10));
   VAR_10.michael_mic_failure.unicast = 1;
   VAR_10.michael_mic_failure.src = VAR_9;
   FUNC_11(VAR_5->hapd,
          VAR_1, &VAR_10);
  } else {
   FUNC_10(VAR_4,
       "MLME-MICHAELMICFAILURE.indication "
       "with invalid MAC address");
  }
 } else if (FUNC_8(VAR_6, "STA-TRAFFIC-STAT", 16) == 0) {
  char *VAR_11, *VAR_12;
  u32 VAR_13;
  VAR_11 = VAR_6;
  while ((VAR_11 = FUNC_4(VAR_11, '\n')) != ((void*)0)) {
   VAR_11++;
   VAR_12 = FUNC_4(VAR_11, '=');
   if (VAR_12 == ((void*)0))
    continue;
   *VAR_12++ = '\0';
   VAR_13 = FUNC_9(VAR_12, ((void*)0), 10);
   if (FUNC_5(VAR_11, "mac") == 0)
    FUNC_2(VAR_12, VAR_5->acct_mac);
   else if (FUNC_5(VAR_11, "rx_packets") == 0)
    VAR_5->acct_data.rx_packets = VAR_13;
   else if (FUNC_5(VAR_11, "tx_packets") == 0)
    VAR_5->acct_data.tx_packets = VAR_13;
   else if (FUNC_5(VAR_11, "rx_bytes") == 0)
    VAR_5->acct_data.rx_bytes = VAR_13;
   else if (FUNC_5(VAR_11, "tx_bytes") == 0)
    VAR_5->acct_data.tx_bytes = VAR_13;
   VAR_11 = VAR_12;
  }
 }
}
