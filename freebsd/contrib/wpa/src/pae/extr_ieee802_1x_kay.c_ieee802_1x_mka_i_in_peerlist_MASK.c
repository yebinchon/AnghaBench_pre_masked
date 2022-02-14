
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct ieee802_1x_mka_peer_id {int mn; int mi; } ;
struct ieee802_1x_mka_peer_body {int dummy; } ;
struct ieee802_1x_mka_participant {int mn; int mi; } ;
struct ieee802_1x_mka_hdr {int dummy; } ;
typedef int Boolean ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (size_t) ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (struct ieee802_1x_mka_hdr*) ;
 scalar_t__ FUNC_3 (struct ieee802_1x_mka_hdr*) ;
 int FUNC_4 (struct ieee802_1x_mka_peer_body*) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,char*,int,...) ;

__attribute__((used)) static Boolean
FUNC_7(struct ieee802_1x_mka_participant *VAR_9,
        const u8 *VAR_10, size_t VAR_11)
{
 struct ieee802_1x_mka_hdr *VAR_12;
 size_t VAR_13;
 size_t VAR_14;
 u8 VAR_15;
 const u8 *VAR_16;
 size_t VAR_17;

 for (VAR_16 = VAR_10, VAR_14 = VAR_11;
      VAR_14 > VAR_3 + VAR_0;
      VAR_14 -= FUNC_0(VAR_13) + VAR_3,
       VAR_16 += FUNC_0(VAR_13) + VAR_3) {
  VAR_12 = (struct ieee802_1x_mka_hdr *) VAR_16;
  VAR_13 = FUNC_2(VAR_12);
  VAR_15 = FUNC_3(VAR_12);

  if (VAR_14 < (VAR_3 + FUNC_0(VAR_13) + VAR_0)) {
   FUNC_6(VAR_7,
       "KaY: MKA Peer Packet Body Length (%zu bytes) is less than the Parameter Set Header Length (%zu bytes) + the Parameter Set Body Length (%zu bytes) + %d bytes of ICV",
       VAR_14, VAR_3,
       FUNC_0(VAR_13),
       VAR_0);
   return VAR_1;
  }

  if (VAR_15 != VAR_4 &&
      VAR_15 != VAR_5)
   continue;

  if ((VAR_13 % 16) != 0) {
   FUNC_6(VAR_7,
       "KaY: MKA Peer Packet Body Length (%zu bytes) should be a multiple of 16 octets",
       VAR_13);
   continue;
  }

  FUNC_4(
   (struct ieee802_1x_mka_peer_body *)VAR_16);

  for (VAR_17 = 0; VAR_17 < VAR_13;
       VAR_17 += sizeof(struct ieee802_1x_mka_peer_id)) {
   const struct ieee802_1x_mka_peer_id *VAR_18;

   VAR_18 = (const struct ieee802_1x_mka_peer_id *)
    (VAR_16 + VAR_3 + VAR_17);
   if (FUNC_5(VAR_18->mi, VAR_9->mi,
          VAR_2) == 0) {
    u32 VAR_19 = FUNC_1(VAR_18->mn);

    FUNC_6(VAR_6,
        "KaY: My MI - received MN %u, most recently transmitted MN %u",
        VAR_19, VAR_9->mn);
    if (VAR_19 == VAR_9->mn ||
        (VAR_9->mn > 1 &&
         VAR_19 == VAR_9->mn - 1))
     return VAR_8;
   }
  }
 }

 return VAR_1;
}
