
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct wpa_state_machine {int TimeoutCtr; int GTimeoutCtr; int pending_1_of_4_timeout; } ;
struct TYPE_2__ {scalar_t__ wpa_disable_eapol_key_retries; scalar_t__ tx_status; } ;
struct wpa_authenticator {TYPE_1__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wpa_authenticator*,struct wpa_state_machine*,int,int const*,int const*,int const*,size_t,int,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,int,int ,struct wpa_authenticator*,struct wpa_state_machine*) ;
 int FUNC_2 (int ,char*,int,int) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_3(struct wpa_authenticator *VAR_8,
      struct wpa_state_machine *VAR_9, int VAR_10,
      const u8 *VAR_11, const u8 *VAR_12,
      const u8 *VAR_13, size_t VAR_14,
      int VAR_15, int VAR_16)
{
 int VAR_17;
 int VAR_18 = VAR_10 & VAR_1;
 u32 VAR_19;

 if (VAR_9 == ((void*)0))
  return;

 FUNC_0(VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14,
    VAR_15, VAR_16, 0);

 VAR_19 = VAR_18 ? VAR_9->TimeoutCtr : VAR_9->GTimeoutCtr;
 if (VAR_19 == 1 && VAR_8->conf.tx_status)
  VAR_17 = VAR_18 ? VAR_3 :
   VAR_4;
 else
  VAR_17 = VAR_6;
 if (VAR_8->conf.wpa_disable_eapol_key_retries &&
     (!VAR_18 || (VAR_10 & VAR_2)))
  VAR_17 = VAR_5;
 if (VAR_18 && VAR_19 == 1 && !(VAR_10 & VAR_2))
  VAR_9->pending_1_of_4_timeout = 1;



 FUNC_2(VAR_0, "WPA: Use EAPOL-Key timeout of %u ms (retry "
     "counter %u)", VAR_17, VAR_19);
 FUNC_1(VAR_17 / 1000, (VAR_17 % 1000) * 1000,
          VAR_7, VAR_8, VAR_9);
}
