
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int timeoutie ;
struct wpa_tdls_timeoutie {int dummy; } ;
struct TYPE_2__ {int kck; } ;
struct wpa_tdls_peer {int initiator; scalar_t__ wmm_capable; scalar_t__ ht_capabilities; scalar_t__ vht_capabilities; int rsnie_p; TYPE_1__ tpk; int lifetime; int inonce; int rnonce; int rsnie_p_len; scalar_t__ rsnie_i_len; } ;
struct wpa_tdls_lnkid {int dummy; } ;
struct wpa_tdls_ftie {int ie_len; int* mic; int Snonce; int Anonce; int ie_type; } ;
struct wpa_sm {int dummy; } ;


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
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int * FUNC_2 (size_t) ;
 int VAR_10 ;
 int * FUNC_3 (int *,int ,int ) ;
 int * FUNC_4 (int *,int *,int,int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ,int,int *,int ,int *,int *,int*) ;
 scalar_t__ FUNC_7 (struct wpa_sm*) ;
 int FUNC_8 (struct wpa_sm*,unsigned char const*,int ,int ,int ,int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_9(struct wpa_sm *VAR_11,
    const unsigned char *VAR_12, u8 VAR_13,
    struct wpa_tdls_lnkid *VAR_14,
    const struct wpa_tdls_peer *VAR_15)
{
 u8 *VAR_16, *VAR_17;
 size_t VAR_18;
 struct wpa_tdls_ftie *VAR_19;
 struct wpa_tdls_timeoutie VAR_20;
 u32 VAR_21;
 int VAR_22;
 u32 VAR_23 = 0;

 VAR_18 = 0;
 if (FUNC_7(VAR_11)) {


  VAR_18 += VAR_15->rsnie_i_len + sizeof(struct wpa_tdls_ftie) +
   sizeof(struct wpa_tdls_timeoutie);




 }

 VAR_16 = FUNC_2(VAR_18 + 1);
 if (VAR_16 == ((void*)0))
  return -1;
 VAR_17 = VAR_16;

 if (!FUNC_7(VAR_11))
  goto skip_ies;


 VAR_17 = FUNC_3(VAR_17, VAR_15->rsnie_p, VAR_15->rsnie_p_len);

 VAR_19 = (struct wpa_tdls_ftie *) VAR_17;
 VAR_19->ie_type = VAR_7;

 FUNC_1(VAR_19->Anonce, VAR_15->rnonce, VAR_9);
 FUNC_1(VAR_19->Snonce, VAR_15->inonce, VAR_9);
 VAR_19->ie_len = sizeof(struct wpa_tdls_ftie) - 2;

 VAR_17 = (u8 *) (VAR_19 + 1);
 VAR_21 = VAR_15->lifetime;







 VAR_17 = FUNC_4(VAR_17, (u8 *) &VAR_20,
         sizeof(VAR_20), VAR_21);
 FUNC_5(VAR_0, "TDLS: TPK lifetime %u seconds",
     VAR_21);


 FUNC_6(VAR_15->tpk.kck, 3, (u8 *) VAR_14, VAR_15->rsnie_p,
     (u8 *) &VAR_20, (u8 *) VAR_19, VAR_19->mic);







skip_ies:

 if (VAR_15->vht_capabilities)
  VAR_23 |= VAR_2;
 if (VAR_15->ht_capabilities)
  VAR_23 |= VAR_1;
 if (VAR_15->wmm_capable)
  VAR_23 |= VAR_3;

 VAR_22 = FUNC_8(VAR_11, VAR_12, VAR_8,
       VAR_13, 0, VAR_23, VAR_15->initiator,
       VAR_16, VAR_17 - VAR_16);
 FUNC_0(VAR_16);

 return VAR_22;
}
