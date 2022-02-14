
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_4__ {int mi; int mn; } ;
struct ieee802_1x_mka_participant {void* active; scalar_t__ retry_count; TYPE_1__ current_peer_id; int mi; } ;
struct ieee802_1x_mka_hdr {int dummy; } ;
struct ieee802_1x_kay_peer {scalar_t__ missing_sak_use_count; scalar_t__ expire; scalar_t__ sak_used; } ;
struct ieee802_1x_kay {void* active; int if_name; } ;
struct ieee802_1x_hdr {int dummy; } ;
struct ieee8023_hdr {int dummy; } ;
struct TYPE_5__ {scalar_t__ (* body_rx ) (struct ieee802_1x_mka_participant*,size_t const*,size_t) ;} ;
typedef void* Boolean ;


 size_t FUNC_0 (TYPE_2__*) ;
 size_t VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t FUNC_1 (int ) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ieee802_1x_mka_hdr*) ;
 size_t FUNC_4 (struct ieee802_1x_mka_hdr*) ;
 int FUNC_5 (struct ieee802_1x_mka_participant*,int ,int ) ;
 int FUNC_6 (struct ieee802_1x_mka_participant*) ;
 int FUNC_7 (struct ieee802_1x_mka_participant*) ;
 struct ieee802_1x_kay_peer* FUNC_8 (struct ieee802_1x_mka_participant*,int ) ;
 struct ieee802_1x_kay_peer* FUNC_9 (struct ieee802_1x_mka_participant*,int ) ;
 void* FUNC_10 (struct ieee802_1x_mka_participant*,int ) ;
 void* FUNC_11 (struct ieee802_1x_mka_participant*,int ) ;
 scalar_t__ FUNC_12 (struct ieee802_1x_kay*,size_t const*,size_t) ;
 int FUNC_13 (struct ieee802_1x_mka_participant*,int ,int ) ;
 struct ieee802_1x_mka_participant* FUNC_14 (struct ieee802_1x_kay*,size_t const*,size_t) ;
 void* FUNC_15 (struct ieee802_1x_mka_participant*,size_t const*,size_t) ;
 int FUNC_16 (int ) ;
 TYPE_2__* VAR_13 ;
 int FUNC_17 (struct ieee802_1x_mka_participant*) ;
 scalar_t__ FUNC_18 (struct ieee802_1x_mka_participant*,size_t const*,size_t) ;
 scalar_t__ FUNC_19 (int *) ;
 int FUNC_20 (int ,char*,...) ;
 int FUNC_21 (void*) ;

__attribute__((used)) static int FUNC_22(struct ieee802_1x_kay *VAR_14,
           const u8 *VAR_15, size_t VAR_16)
{
 struct ieee802_1x_mka_participant *VAR_17;
 struct ieee802_1x_mka_hdr *VAR_18;
 struct ieee802_1x_kay_peer *VAR_19;
 size_t VAR_20;
 size_t VAR_21;
 u8 VAR_22;
 int VAR_23;
 const u8 *VAR_24;
 Boolean VAR_25[256];
 Boolean VAR_26 = VAR_1;

 Boolean VAR_27, VAR_28, VAR_29;

 FUNC_20(VAR_9, "KaY: Decode received MKPDU (ifname=%s)",
     VAR_14->if_name);
 if (FUNC_12(VAR_14, VAR_15, VAR_16))
  return -1;


 VAR_24 = VAR_15 + sizeof(struct ieee8023_hdr) + sizeof(struct ieee802_1x_hdr);
 VAR_21 = VAR_16 - sizeof(struct ieee8023_hdr) -
  sizeof(struct ieee802_1x_hdr);
 VAR_17 = FUNC_14(VAR_14, VAR_24, VAR_21);
 if (!VAR_17)
  return -1;


 VAR_18 = (struct ieee802_1x_mka_hdr *) VAR_24;
 VAR_20 = FUNC_1(FUNC_3(VAR_18));
 if (VAR_21 < VAR_20 + VAR_4)
  return -1;
 VAR_24 += VAR_20 + VAR_4;
 VAR_21 -= VAR_20 + VAR_4;


 VAR_27 = FUNC_15(VAR_17, VAR_24,
           VAR_21);
 VAR_28 = FUNC_10(
  VAR_17, VAR_17->current_peer_id.mi);
 FUNC_20(VAR_9, "KaY: i_in_peerlist=%s is_in_live_peer=%s",
     FUNC_21(VAR_27), FUNC_21(VAR_28));
 if (VAR_27 && !VAR_28) {

  VAR_29 = FUNC_11(
   VAR_17, VAR_17->current_peer_id.mi);
  if (VAR_29) {
   if (!FUNC_13(
        VAR_17,
        VAR_17->current_peer_id.mi,
        FUNC_2(VAR_17->
       current_peer_id.mn)))
    return -1;
  } else if (!FUNC_5(
       VAR_17, VAR_17->current_peer_id.mi,
       FUNC_2(VAR_17->
      current_peer_id.mn))) {
    return -1;
  }

  FUNC_7(VAR_17);
  FUNC_6(VAR_17);
 }





 for (VAR_23 = 0; VAR_23 < 256; VAR_23++)
  VAR_25[VAR_23] = VAR_1;

 VAR_25[0] = VAR_12;
 for (; VAR_21 > VAR_4 + VAR_0;
      VAR_24 += VAR_20 + VAR_4,
       VAR_21 -= VAR_20 + VAR_4) {
  VAR_18 = (struct ieee802_1x_mka_hdr *) VAR_24;
  VAR_20 = FUNC_1(FUNC_3(VAR_18));
  VAR_22 = FUNC_4(VAR_18);

  if (VAR_22 == VAR_5)
   return 0;

  if (VAR_21 < (VAR_4 + VAR_20 + VAR_0)) {
   FUNC_20(VAR_10,
       "KaY: MKA Peer Packet Body Length (%zu bytes) is less than the Parameter Set Header Length (%zu bytes) + the Parameter Set Body Length (%zu bytes) + %d bytes of ICV",
       VAR_21, VAR_4,
       VAR_20, VAR_0);
   return -1;
  }

  if (VAR_25[VAR_22]) {
   FUNC_20(VAR_9,
       "KaY: Ignore duplicated body type %u",
       VAR_22);
   continue;
  }

  VAR_25[VAR_22] = VAR_12;
  if (VAR_22 < FUNC_0(VAR_13) &&
      VAR_13[VAR_22].body_rx) {
   if (VAR_13[VAR_22].body_rx
    (VAR_17, VAR_24, VAR_21) != 0) {

    if (VAR_22 != VAR_7) {
     FUNC_20(VAR_11,
         "KaY: Discarding Rx MKPDU: decode of parameter set type (%d) failed",
         VAR_22);
     return -1;
    }
    VAR_26 = VAR_12;
   }
  } else {
   FUNC_20(VAR_10,
       "KaY: The body type %d is not supported in this MKA version %d",
       VAR_22, VAR_8);
  }
 }

 if (VAR_26 && !VAR_25[VAR_3]) {
  FUNC_20(VAR_11,
      "KaY: Discarding Rx MKPDU: decode of parameter set type (%d) failed",
      VAR_7);
  if (!FUNC_17(VAR_17))
   FUNC_20(VAR_9, "KaY: Could not update mi");
  else
   FUNC_20(VAR_9,
       "KaY: Selected a new random MI: %s",
       FUNC_16(VAR_17->mi));
  return -1;
 }


 VAR_19 = FUNC_8(VAR_17,
         VAR_17->current_peer_id.mi);
 if (VAR_19) {

  if (!VAR_25[VAR_7]) {


   if (VAR_19->sak_used) {
    FUNC_20(VAR_11,
        "KaY: Discarding Rx MKPDU: Live Peer stopped sending SAK-USE");
    return -1;
   }




   if (++VAR_19->missing_sak_use_count >
       VAR_2) {
    FUNC_20(VAR_11,
        "KaY: Discarding Rx MKPDU: Live Peer not sending SAK-USE");
    return -1;
   }
  } else {
   VAR_19->missing_sak_use_count = 0;



   VAR_19->expire = FUNC_19(((void*)0)) + VAR_6 / 1000;
  }
 } else {

  VAR_19 = FUNC_9(VAR_17,
            VAR_17->current_peer_id.mi);
  if (!VAR_19) {
   FUNC_20(VAR_9, "KaY: No peer entry found");
   return -1;
  }







 }

 VAR_14->active = VAR_12;
 VAR_17->retry_count = 0;
 VAR_17->active = VAR_12;

 return 0;
}
