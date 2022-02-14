
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct sta_info {int acct_terminate_cause; int last_rx_bytes_lo; int last_tx_bytes_lo; int addr; scalar_t__ last_tx_bytes_hi; scalar_t__ last_rx_bytes_hi; int acct_session_start; } ;
struct radius_msg {int dummy; } ;
struct os_reltime {int sec; } ;
struct hostapd_data {int radius; TYPE_2__* conf; } ;
struct hostap_sta_driver_data {int rx_packets; int tx_packets; int rx_bytes; int tx_bytes; scalar_t__ bytes_64bit; } ;
struct TYPE_4__ {TYPE_1__* radius; } ;
struct TYPE_3__ {int acct_server; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct radius_msg* FUNC_0 (struct hostapd_data*,struct sta_info*,int ) ;
 scalar_t__ FUNC_1 (struct hostapd_data*,struct sta_info*,struct hostap_sta_driver_data*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct os_reltime*) ;
 int FUNC_4 (struct os_reltime*,int *,struct os_reltime*) ;
 scalar_t__ FUNC_5 (int ,struct radius_msg*,int ,int ) ;
 int FUNC_6 (struct radius_msg*,int ,int) ;
 int FUNC_7 (struct radius_msg*) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static void FUNC_9(struct hostapd_data *VAR_14,
      struct sta_info *VAR_15, int VAR_16)
{
 struct radius_msg *VAR_17;
 int VAR_18 = VAR_15->acct_terminate_cause;
 struct hostap_sta_driver_data VAR_19;
 struct os_reltime VAR_20, VAR_21;
 u64 VAR_22;

 if (!VAR_14->conf->radius->acct_server)
  return;

 VAR_17 = FUNC_0(VAR_14, VAR_15,
        VAR_16 ? VAR_4 :
        VAR_3);
 if (!VAR_17) {
  FUNC_8(VAR_0, "Could not create RADIUS Accounting message");
  return;
 }

 FUNC_3(&VAR_20);
 FUNC_4(&VAR_20, &VAR_15->acct_session_start, &VAR_21);
 if (!FUNC_6(VAR_17, VAR_12,
           VAR_21.sec)) {
  FUNC_8(VAR_0, "Could not add Acct-Session-Time");
  goto fail;
 }

 if (FUNC_1(VAR_14, VAR_15, &VAR_19) == 0) {
  if (!FUNC_6(VAR_17,
            VAR_8,
            VAR_19.rx_packets)) {
   FUNC_8(VAR_0, "Could not add Acct-Input-Packets");
   goto fail;
  }
  if (!FUNC_6(VAR_17,
            VAR_11,
            VAR_19.tx_packets)) {
   FUNC_8(VAR_0, "Could not add Acct-Output-Packets");
   goto fail;
  }
  if (VAR_19.bytes_64bit)
   VAR_22 = VAR_19.rx_bytes;
  else
   VAR_22 = ((u64) VAR_15->last_rx_bytes_hi << 32) |
    VAR_15->last_rx_bytes_lo;
  if (!FUNC_6(VAR_17,
            VAR_7,
            (u32) VAR_22)) {
   FUNC_8(VAR_0, "Could not add Acct-Input-Octets");
   goto fail;
  }
  if (!FUNC_6(VAR_17,
            VAR_6,
            (u32) (VAR_22 >> 32))) {
   FUNC_8(VAR_0, "Could not add Acct-Input-Gigawords");
   goto fail;
  }
  if (VAR_19.bytes_64bit)
   VAR_22 = VAR_19.tx_bytes;
  else
   VAR_22 = ((u64) VAR_15->last_tx_bytes_hi << 32) |
    VAR_15->last_tx_bytes_lo;
  if (!FUNC_6(VAR_17,
            VAR_10,
            (u32) VAR_22)) {
   FUNC_8(VAR_0, "Could not add Acct-Output-Octets");
   goto fail;
  }
  if (!FUNC_6(VAR_17,
            VAR_9,
            (u32) (VAR_22 >> 32))) {
   FUNC_8(VAR_0, "Could not add Acct-Output-Gigawords");
   goto fail;
  }
 }

 if (FUNC_2())
  VAR_18 = VAR_5;

 if (VAR_16 && VAR_18 &&
     !FUNC_6(VAR_17, VAR_13,
           VAR_18)) {
  FUNC_8(VAR_0, "Could not add Acct-Terminate-Cause");
  goto fail;
 }

 if (FUNC_5(VAR_14->radius, VAR_17,
          VAR_16 ? VAR_1 : VAR_2,
          VAR_15->addr) < 0)
  goto fail;
 return;

 fail:
 FUNC_7(VAR_17);
}
