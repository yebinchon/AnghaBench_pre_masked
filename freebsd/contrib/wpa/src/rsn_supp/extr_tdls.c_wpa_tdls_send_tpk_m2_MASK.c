
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
struct wpa_tdls_peer {int initiator; int rsnie_p; TYPE_1__ tpk; int lifetime; int inonce; int rnonce; int rsnie_p_len; scalar_t__ rsnie_i_len; } ;
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
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int * FUNC_2 (size_t) ;
 int VAR_7 ;
 int * FUNC_3 (int *,int ,int ) ;
 int * FUNC_4 (int *,int *,int,int ) ;
 int FUNC_5 (int ,char*,int *,int) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ,int,int *,int ,int *,int *,int*) ;
 scalar_t__ FUNC_8 (struct wpa_sm*) ;
 int FUNC_9 (struct wpa_sm*,unsigned char const*,int ,int ,int ,int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_10(struct wpa_sm *VAR_8,
    const unsigned char *VAR_9, u8 VAR_10,
    struct wpa_tdls_lnkid *VAR_11,
    const struct wpa_tdls_peer *VAR_12)
{
 u8 *VAR_13, *VAR_14;
 size_t VAR_15;
 u32 VAR_16;
 struct wpa_tdls_timeoutie VAR_17;
 struct wpa_tdls_ftie *VAR_18;
 int VAR_19;

 VAR_15 = 0;
 if (FUNC_8(VAR_8)) {


  VAR_15 += VAR_12->rsnie_i_len + sizeof(struct wpa_tdls_ftie) +
   sizeof(struct wpa_tdls_timeoutie);




 }

 VAR_13 = FUNC_2(VAR_15 + 1);
 if (VAR_13 == ((void*)0))
  return -1;
 VAR_14 = VAR_13;

 if (!FUNC_8(VAR_8))
  goto skip_ies;


 VAR_14 = FUNC_3(VAR_14, VAR_12->rsnie_p, VAR_12->rsnie_p_len);

 VAR_18 = (struct wpa_tdls_ftie *) VAR_14;
 VAR_18->ie_type = VAR_4;

 FUNC_1(VAR_18->Anonce, VAR_12->rnonce, VAR_6);
 FUNC_1(VAR_18->Snonce, VAR_12->inonce, VAR_6);
 VAR_18->ie_len = sizeof(struct wpa_tdls_ftie) - 2;
 FUNC_5(VAR_0, "TDLS: FTIE for TPK M2",
      (u8 *) VAR_18, sizeof(*VAR_18));

 VAR_14 = (u8 *) (VAR_18 + 1);
 VAR_16 = VAR_12->lifetime;







 VAR_14 = FUNC_4(VAR_14, (u8 *) &VAR_17,
         sizeof(VAR_17), VAR_16);
 FUNC_6(VAR_0, "TDLS: TPK lifetime %u seconds from initiator",
     VAR_16);


 FUNC_7(VAR_12->tpk.kck, 2, (u8 *) VAR_11, VAR_12->rsnie_p,
     (u8 *) &VAR_17, (u8 *) VAR_18, VAR_18->mic);







skip_ies:
 VAR_19 = FUNC_9(VAR_8, VAR_9, VAR_5,
       VAR_10, 0, 0, VAR_12->initiator, VAR_13,
       VAR_14 - VAR_13);
 FUNC_0(VAR_13);

 return VAR_19;
}
