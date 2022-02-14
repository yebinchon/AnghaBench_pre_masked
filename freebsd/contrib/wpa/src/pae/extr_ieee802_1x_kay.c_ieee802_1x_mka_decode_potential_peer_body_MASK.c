
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct ieee802_1x_mka_peer_id {int mn; } ;
struct ieee802_1x_mka_participant {scalar_t__ mn; int mi; } ;
struct ieee802_1x_mka_hdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (struct ieee802_1x_mka_hdr const*) ;
 scalar_t__ FUNC_2 (struct ieee802_1x_mka_peer_id const*,int ,int ) ;
 int FUNC_3 (struct ieee802_1x_mka_participant*) ;
 int FUNC_4 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_5(
 struct ieee802_1x_mka_participant *VAR_4,
 const u8 *VAR_5, size_t VAR_6)
{
 const struct ieee802_1x_mka_hdr *VAR_7;
 size_t VAR_8;
 size_t VAR_9;

 VAR_7 = (const struct ieee802_1x_mka_hdr *) VAR_5;
 VAR_8 = FUNC_1(VAR_7);
 if (VAR_8 % 16 != 0) {
  FUNC_4(VAR_3,
      "KaY: MKA Peer Packet Body Length (%zu bytes) should be a multiple of 16 octets",
      VAR_8);
  return -1;
 }

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9 += sizeof(struct ieee802_1x_mka_peer_id)) {
  const struct ieee802_1x_mka_peer_id *VAR_10;
  u32 VAR_11;

  VAR_10 = (struct ieee802_1x_mka_peer_id *)
   (VAR_5 + VAR_1 + VAR_9);
  VAR_11 = FUNC_0(VAR_10->mn);


  if (FUNC_2(VAR_10, VAR_4->mi, VAR_0) == 0) {

   if (VAR_11 > VAR_4->mn &&
       !FUNC_3(VAR_4))
    FUNC_4(VAR_2, "KaY: Could not update mi");
   continue;
  }
 }

 return 0;
}
