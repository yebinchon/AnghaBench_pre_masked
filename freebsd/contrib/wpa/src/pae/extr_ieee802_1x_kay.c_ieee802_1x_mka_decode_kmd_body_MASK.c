
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee802_1x_mka_participant {int dummy; } ;
struct ieee802_1x_mka_hdr {int dummy; } ;


 int VAR_0 ;
 size_t FUNC_0 (struct ieee802_1x_mka_hdr*) ;
 int FUNC_1 (int ,char*,size_t) ;

__attribute__((used)) static int
FUNC_2(
 struct ieee802_1x_mka_participant *VAR_1,
 const u8 *VAR_2, size_t VAR_3)
{
 struct ieee802_1x_mka_hdr *VAR_4;
 size_t VAR_5;

 VAR_4 = (struct ieee802_1x_mka_hdr *) VAR_2;
 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5 < 5) {
  FUNC_1(VAR_0,
      "KaY: MKA Use KMD Packet Body Length (%zu bytes) should be 5 or more octets",
      VAR_5);
  return -1;
 }

 return 0;
}
