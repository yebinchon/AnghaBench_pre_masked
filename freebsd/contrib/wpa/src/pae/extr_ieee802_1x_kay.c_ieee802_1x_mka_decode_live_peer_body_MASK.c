
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct ieee802_1x_mka_peer_id {int mi; int mn; } ;
struct TYPE_2__ {int mi; } ;
struct ieee802_1x_mka_participant {scalar_t__ mn; int mi; TYPE_1__ current_peer_id; } ;
struct ieee802_1x_mka_hdr {int dummy; } ;
struct ieee802_1x_kay_peer {scalar_t__ mn; } ;
typedef int Boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (struct ieee802_1x_mka_hdr const*) ;
 int FUNC_2 (struct ieee802_1x_mka_participant*,int ,scalar_t__) ;
 struct ieee802_1x_kay_peer* FUNC_3 (struct ieee802_1x_mka_participant*,int ) ;
 int FUNC_4 (struct ieee802_1x_mka_participant*,int ) ;
 scalar_t__ FUNC_5 (struct ieee802_1x_mka_peer_id const*,int ,int ) ;
 int FUNC_6 (struct ieee802_1x_mka_participant*) ;
 int FUNC_7 (int ,char*,...) ;

__attribute__((used)) static int FUNC_8(
 struct ieee802_1x_mka_participant *VAR_4,
 const u8 *VAR_5, size_t VAR_6)
{
 const struct ieee802_1x_mka_hdr *VAR_7;
 struct ieee802_1x_kay_peer *VAR_8;
 size_t VAR_9;
 size_t VAR_10;
 Boolean VAR_11;

 VAR_11 = FUNC_4(
  VAR_4, VAR_4->current_peer_id.mi);

 VAR_7 = (const struct ieee802_1x_mka_hdr *) VAR_5;
 VAR_9 = FUNC_1(VAR_7);
 if (VAR_9 % 16 != 0) {
  FUNC_7(VAR_3,
      "KaY: MKA Peer Packet Body Length (%zu bytes) should be a multiple of 16 octets",
      VAR_9);
  return -1;
 }

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10 += sizeof(struct ieee802_1x_mka_peer_id)) {
  const struct ieee802_1x_mka_peer_id *VAR_12;
  u32 VAR_13;

  VAR_12 = (const struct ieee802_1x_mka_peer_id *)
   (VAR_5 + VAR_1 + VAR_10);
  VAR_13 = FUNC_0(VAR_12->mn);


  if (FUNC_5(VAR_12, VAR_4->mi, VAR_0) == 0) {

   if (VAR_13 > VAR_4->mn &&
       !FUNC_6(VAR_4))
    FUNC_7(VAR_2, "KaY: Could not update mi");
   continue;
  }

  if (!VAR_11)
   continue;

  VAR_8 = FUNC_3(VAR_4, VAR_12->mi);
  if (VAR_8) {
   VAR_8->mn = VAR_13;
  } else if (!FUNC_2(
    VAR_4, VAR_12->mi, VAR_13)) {
   return -1;
  }
 }

 return 0;
}
