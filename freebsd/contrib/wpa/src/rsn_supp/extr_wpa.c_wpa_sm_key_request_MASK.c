
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_sm {scalar_t__ pairwise_cipher; scalar_t__ proto; int ptk; scalar_t__ ptk_set; TYPE_1__* ctx; int request_counter; int pmk_len; int key_mgmt; } ;
struct wpa_eapol_key {int replay_counter; int * key_length; int * key_info; int type; } ;
struct TYPE_2__ {int msg_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 (int *,int) ;
 int VAR_19 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct wpa_sm*,int *,int,int *,int ,int *,size_t,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 size_t FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,char*,...) ;
 int * FUNC_8 (struct wpa_sm*,int ,int *,size_t,size_t*,void*) ;
 scalar_t__ FUNC_9 (struct wpa_sm*,int *) ;
 scalar_t__ FUNC_10 (int ) ;

void FUNC_11(struct wpa_sm *VAR_20, int VAR_21, int VAR_22)
{
 size_t VAR_23, VAR_24, VAR_25;
 struct wpa_eapol_key *VAR_26;
 int VAR_27, VAR_28;
 u8 VAR_29[VAR_2], *VAR_30, *VAR_31, *VAR_32;

 if (FUNC_10(VAR_20->key_mgmt))
  VAR_28 = VAR_14;
 else if (FUNC_4(VAR_20->key_mgmt) ||
   FUNC_5(VAR_20->key_mgmt))
  VAR_28 = VAR_13;
 else if (VAR_20->pairwise_cipher != VAR_7)
  VAR_28 = VAR_16;
 else
  VAR_28 = VAR_15;

 if (FUNC_9(VAR_20, VAR_29) < 0) {
  FUNC_7(VAR_20->ctx->msg_ctx, VAR_6,
   "Failed to read BSSID for EAPOL-Key request");
  return;
 }

 VAR_23 = FUNC_6(VAR_20->key_mgmt, VAR_20->pmk_len);
 VAR_24 = sizeof(*VAR_26) + VAR_23 + 2;
 VAR_30 = FUNC_8(VAR_20, VAR_4, ((void*)0),
      VAR_24, &VAR_25, (void *) &VAR_26);
 if (VAR_30 == ((void*)0))
  return;

 VAR_26->type = (VAR_20->proto == VAR_18 ||
         VAR_20->proto == VAR_17) ?
  VAR_0 : VAR_1;
 VAR_27 = VAR_11 | VAR_28;
 if (VAR_20->ptk_set)
  VAR_27 |= VAR_12;
 if (VAR_20->ptk_set && VAR_23)
  VAR_27 |= VAR_10;
 if (VAR_21)
  VAR_27 |= VAR_8;
 if (VAR_22)
  VAR_27 |= VAR_9;
 FUNC_0(VAR_26->key_info, VAR_27);
 FUNC_0(VAR_26->key_length, 0);
 FUNC_2(VAR_26->replay_counter, VAR_20->request_counter,
    VAR_19);
 FUNC_1(VAR_20->request_counter, VAR_19);

 VAR_32 = (u8 *) (VAR_26 + 1);
 FUNC_0(VAR_32 + VAR_23, 0);
 if (!(VAR_27 & VAR_10))
  VAR_31 = ((void*)0);
 else
  VAR_31 = VAR_32;

 FUNC_7(VAR_20->ctx->msg_ctx, VAR_5,
  "WPA: Sending EAPOL-Key Request (error=%d "
  "pairwise=%d ptk_set=%d len=%lu)",
  VAR_21, VAR_22, VAR_20->ptk_set, (unsigned long) VAR_25);
 FUNC_3(VAR_20, &VAR_20->ptk, VAR_28, VAR_29, VAR_3, VAR_30, VAR_25,
      VAR_31);
}
