
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sta_info {int acct_session_started; int acct_interim_interval; int addr; scalar_t__ last_tx_bytes_lo; scalar_t__ last_tx_bytes_hi; scalar_t__ last_rx_bytes_lo; scalar_t__ last_rx_bytes_hi; int acct_session_start; scalar_t__ acct_session_id; } ;
struct radius_msg {int dummy; } ;
struct hostapd_data {int radius; TYPE_2__* conf; } ;
struct TYPE_4__ {TYPE_1__* radius; } ;
struct TYPE_3__ {int acct_server; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct radius_msg* FUNC_0 (struct hostapd_data*,struct sta_info*,int ) ;
 int FUNC_1 (int,int ,int ,struct hostapd_data*,struct sta_info*) ;
 int FUNC_2 (struct hostapd_data*,int ) ;
 int FUNC_3 (struct hostapd_data*,int ,int ,int ,char*,unsigned long long) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,struct radius_msg*,int ,int ) ;
 int FUNC_6 (struct radius_msg*) ;

void FUNC_7(struct hostapd_data *VAR_6, struct sta_info *VAR_7)
{
 struct radius_msg *VAR_8;
 int VAR_9;

 if (VAR_7->acct_session_started)
  return;

 FUNC_3(VAR_6, VAR_7->addr, VAR_2,
         VAR_1,
         "starting accounting session %016llX",
         (unsigned long long) VAR_7->acct_session_id);

 FUNC_4(&VAR_7->acct_session_start);
 VAR_7->last_rx_bytes_hi = 0;
 VAR_7->last_rx_bytes_lo = 0;
 VAR_7->last_tx_bytes_hi = 0;
 VAR_7->last_tx_bytes_lo = 0;
 FUNC_2(VAR_6, VAR_7->addr);

 if (!VAR_6->conf->radius->acct_server)
  return;

 if (VAR_7->acct_interim_interval)
  VAR_9 = VAR_7->acct_interim_interval;
 else
  VAR_9 = VAR_0;
 FUNC_1(VAR_9, 0, VAR_5,
          VAR_6, VAR_7);

 VAR_8 = FUNC_0(VAR_6, VAR_7, VAR_4);
 if (VAR_8 &&
     FUNC_5(VAR_6->radius, VAR_8, VAR_3, VAR_7->addr) < 0)
  FUNC_6(VAR_8);

 VAR_7->acct_session_started = 1;
}
