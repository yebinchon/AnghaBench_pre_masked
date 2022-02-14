
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_ssid {char const* passphrase; int psk_set; int psk; int * ext_psk; } ;
struct parse_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char const* FUNC_0 (char const*,size_t) ;
 scalar_t__ FUNC_1 (int *,size_t) ;
 scalar_t__ FUNC_2 (char const*,int ,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char const*,char const*,size_t) ;
 int * FUNC_5 (char const*) ;
 size_t FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char const*,char*,int) ;
 char* FUNC_8 (char const*,char) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (int ,char*,int *,size_t) ;
 int FUNC_11 (int ,char*,int ,int) ;
 int FUNC_12 (int ,char*,int,...) ;

__attribute__((used)) static int FUNC_13(const struct parse_data *VAR_4,
    struct wpa_ssid *VAR_5, int VAR_6,
    const char *VAR_7)
{
 if (*VAR_7 == '"') {

  const char *VAR_8;
  size_t VAR_9;

  VAR_7++;
  VAR_8 = FUNC_8(VAR_7, '"');
  if (VAR_8)
   VAR_9 = VAR_8 - VAR_7;
  else
   VAR_9 = FUNC_6(VAR_7);
  if (VAR_9 < 8 || VAR_9 > 63) {
   FUNC_12(VAR_1, "Line %d: Invalid passphrase "
       "length %lu (expected: 8..63) '%s'.",
       VAR_6, (unsigned long) VAR_9, VAR_7);
   return -1;
  }
  FUNC_10(VAR_2, "PSK (ASCII passphrase)",
          (u8 *) VAR_7, VAR_9);
  if (FUNC_1((u8 *) VAR_7, VAR_9)) {
   FUNC_12(VAR_1,
       "Line %d: Invalid passphrase character",
       VAR_6);
   return -1;
  }
  if (VAR_5->passphrase && FUNC_6(VAR_5->passphrase) == VAR_9 &&
      FUNC_4(VAR_5->passphrase, VAR_7, VAR_9) == 0) {

   return 1;
  }
  VAR_5->psk_set = 0;
  FUNC_9(VAR_5->passphrase);
  VAR_5->passphrase = FUNC_0(VAR_7, VAR_9);
  if (VAR_5->passphrase == ((void*)0))
   return -1;
  return 0;





 }

 if (FUNC_2(VAR_7, VAR_5->psk, VAR_3) ||
     VAR_7[VAR_3 * 2] != '\0') {
  FUNC_12(VAR_1, "Line %d: Invalid PSK '%s'.",
      VAR_6, VAR_7);
  return -1;
 }

 FUNC_9(VAR_5->passphrase);
 VAR_5->passphrase = ((void*)0);

 VAR_5->psk_set = 1;
 FUNC_11(VAR_2, "PSK", VAR_5->psk, VAR_3);
 return 0;
}
