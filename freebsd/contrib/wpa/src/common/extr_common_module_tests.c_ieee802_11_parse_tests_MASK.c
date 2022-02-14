
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct ieee802_11_parse_test_data {scalar_t__ result; scalar_t__ count; int len; scalar_t__ data; } ;
struct ieee802_11_elems {int dummy; } ;
typedef scalar_t__ ParseRes ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,struct ieee802_11_elems*,int) ;
 struct wpabuf* FUNC_2 (int const*,int,int) ;
 struct ieee802_11_parse_test_data* VAR_2 ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct wpabuf*) ;
 int* FUNC_5 (struct wpabuf*) ;
 int FUNC_6 (struct wpabuf*) ;

__attribute__((used)) static int FUNC_7(void)
{
 int VAR_3, VAR_4 = 0;
 struct wpabuf *VAR_5;

 FUNC_3(VAR_1, "ieee802_11_parse tests");

 for (VAR_3 = 0; VAR_2[VAR_3].data; VAR_3++) {
  const struct ieee802_11_parse_test_data *VAR_6;
  struct ieee802_11_elems VAR_7;
  ParseRes VAR_8;

  VAR_6 = &VAR_2[VAR_3];
  VAR_8 = FUNC_1(VAR_6->data, VAR_6->len, &VAR_7, 1);
  if (VAR_8 != VAR_6->result ||
      FUNC_0(VAR_6->data, VAR_6->len) != VAR_6->count) {
   FUNC_3(VAR_0, "ieee802_11_parse test %d failed",
       VAR_3);
   VAR_4 = -1;
  }
 }

 if (FUNC_2((const u8 *) "\x00\x01", 2, 0) != ((void*)0))
 {
  FUNC_3(VAR_0,
      "ieee802_11_vendor_ie_concat test failed");
  VAR_4 = -1;
 }

 VAR_5 = FUNC_2((const u8 *) "\xdd\x05\x11\x22\x33\x44\x01\xdd\x05\x11\x22\x33\x44\x02\x00\x01",
       16, 0x11223344);
 do {
  const u8 *VAR_9;

  if (!VAR_5) {
   FUNC_3(VAR_0,
       "ieee802_11_vendor_ie_concat test 2 failed");
   VAR_4 = -1;
   break;
  }

  if (FUNC_6(VAR_5) != 2) {
   FUNC_3(VAR_0,
       "ieee802_11_vendor_ie_concat test 3 failed");
   VAR_4 = -1;
   break;
  }

  VAR_9 = FUNC_5(VAR_5);
  if (VAR_9[0] != 0x01 || VAR_9[1] != 0x02) {
   FUNC_3(VAR_0,
       "ieee802_11_vendor_ie_concat test 3 failed");
   VAR_4 = -1;
   break;
  }
 } while (0);
 FUNC_4(VAR_5);

 return VAR_4;
}
