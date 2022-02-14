
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct wpa_config {struct wpabuf* ap_vendor_elements; } ;
struct global_parse_data {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int *,int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ,char*,...) ;
 struct wpabuf* FUNC_3 (int) ;
 int FUNC_4 (struct wpabuf*) ;
 int * FUNC_5 (struct wpabuf*,int) ;

__attribute__((used)) static int FUNC_6(
 const struct global_parse_data *VAR_1,
 struct wpa_config *VAR_2, int VAR_3, const char *VAR_4)
{
 struct wpabuf *VAR_5;
 int VAR_6 = FUNC_1(VAR_4) / 2;
 u8 *VAR_7;

 if (!VAR_6) {
  FUNC_2(VAR_0, "Line %d: invalid ap_vendor_elements",
      VAR_3);
  return -1;
 }

 VAR_5 = FUNC_3(VAR_6);
 if (VAR_5) {
  VAR_7 = FUNC_5(VAR_5, VAR_6);

  if (FUNC_0(VAR_4, VAR_7, VAR_6)) {
   FUNC_2(VAR_0, "Line %d: invalid "
       "ap_vendor_elements", VAR_3);
   FUNC_4(VAR_5);
   return -1;
  }

  FUNC_4(VAR_2->ap_vendor_elements);
  VAR_2->ap_vendor_elements = VAR_5;
 } else {
  FUNC_2(VAR_0, "Cannot allocate memory for "
      "ap_vendor_elements");
  return -1;
 }

 return 0;
}
