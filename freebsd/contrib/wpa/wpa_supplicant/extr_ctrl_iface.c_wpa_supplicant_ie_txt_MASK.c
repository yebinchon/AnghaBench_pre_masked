
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_ie_data {int key_mgmt; int capabilities; int pairwise_cipher; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (char*,int,char*,...) ;
 scalar_t__ FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int const*,size_t,struct wpa_ie_data*) ;
 char* FUNC_3 (char*,char*,int ) ;

__attribute__((used)) static char * FUNC_4(char *VAR_19, char *VAR_20, const char *VAR_21,
        const u8 *VAR_22, size_t VAR_23)
{
 struct wpa_ie_data VAR_24;
 char *VAR_25;
 int VAR_26;

 VAR_26 = FUNC_0(VAR_19, VAR_20 - VAR_19, "[%s-", VAR_21);
 if (FUNC_1(VAR_20 - VAR_19, VAR_26))
  return VAR_19;
 VAR_19 += VAR_26;

 if (FUNC_2(VAR_22, VAR_23, &VAR_24) < 0) {
  VAR_26 = FUNC_0(VAR_19, VAR_20 - VAR_19, "?]");
  if (FUNC_1(VAR_20 - VAR_19, VAR_26))
   return VAR_19;
  VAR_19 += VAR_26;
  return VAR_19;
 }

 VAR_25 = VAR_19;
 if (VAR_24.key_mgmt & VAR_9) {
  VAR_26 = FUNC_0(VAR_19, VAR_20 - VAR_19, "%sEAP",
      VAR_19 == VAR_25 ? "" : "+");
  if (FUNC_1(VAR_20 - VAR_19, VAR_26))
   return VAR_19;
  VAR_19 += VAR_26;
 }
 if (VAR_24.key_mgmt & VAR_15) {
  VAR_26 = FUNC_0(VAR_19, VAR_20 - VAR_19, "%sPSK",
      VAR_19 == VAR_25 ? "" : "+");
  if (FUNC_1(VAR_20 - VAR_19, VAR_26))
   return VAR_19;
  VAR_19 += VAR_26;
 }
 if (VAR_24.key_mgmt & VAR_18) {
  VAR_26 = FUNC_0(VAR_19, VAR_20 - VAR_19, "%sNone",
      VAR_19 == VAR_25 ? "" : "+");
  if (FUNC_1(VAR_20 - VAR_19, VAR_26))
   return VAR_19;
  VAR_19 += VAR_26;
 }
 if (VAR_24.key_mgmt & VAR_17) {
  VAR_26 = FUNC_0(VAR_19, VAR_20 - VAR_19, "%sSAE",
      VAR_19 == VAR_25 ? "" : "+");
  if (FUNC_1(VAR_20 - VAR_19, VAR_26))
   return VAR_19;
  VAR_19 += VAR_26;
 }
 if (VAR_24.key_mgmt & VAR_13) {
  VAR_26 = FUNC_0(VAR_19, VAR_20 - VAR_19, "%sOSEN",
      VAR_19 == VAR_25 ? "" : "+");
  if (FUNC_1(VAR_20 - VAR_19, VAR_26))
   return VAR_19;
  VAR_19 += VAR_26;
 }

 VAR_19 = FUNC_3(VAR_19, VAR_20, VAR_24.pairwise_cipher);

 if (VAR_24.capabilities & VAR_0) {
  VAR_26 = FUNC_0(VAR_19, VAR_20 - VAR_19, "-preauth");
  if (FUNC_1(VAR_20 - VAR_19, VAR_26))
   return VAR_19;
  VAR_19 += VAR_26;
 }

 VAR_26 = FUNC_0(VAR_19, VAR_20 - VAR_19, "]");
 if (FUNC_1(VAR_20 - VAR_19, VAR_26))
  return VAR_19;
 VAR_19 += VAR_26;

 return VAR_19;
}
