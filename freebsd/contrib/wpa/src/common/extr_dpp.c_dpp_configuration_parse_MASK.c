
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
struct dpp_configuration {size_t ssid_len; char* ssid; char* psk; int psk_set; char* group_id; long netaccesskey_expiry; scalar_t__ passphrase; } ;
struct dpp_authentication {struct dpp_configuration* conf_ap; struct dpp_configuration* conf_sta; } ;


 size_t VAR_0 ;
 struct dpp_configuration* FUNC_0 (char const*) ;
 int FUNC_1 (struct dpp_configuration*) ;
 int FUNC_2 (struct dpp_configuration*) ;
 scalar_t__ FUNC_3 (char const*,char*,size_t) ;
 char* FUNC_4 (size_t) ;
 int FUNC_5 (char*,char const*,size_t) ;
 char* FUNC_6 (char const*,char) ;
 size_t FUNC_7 (char const*) ;
 char* FUNC_8 (char const*,char*) ;
 scalar_t__ FUNC_9 (size_t) ;
 long FUNC_10 (char const*,int *,int ) ;

__attribute__((used)) static int FUNC_11(struct dpp_authentication *VAR_1,
       const char *VAR_2)
{
 const char *VAR_3, *VAR_4;
 struct dpp_configuration *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
 struct dpp_configuration *VAR_7 = ((void*)0);

 VAR_3 = FUNC_8(VAR_2, " conf=sta-");
 if (VAR_3) {
  VAR_5 = FUNC_0(VAR_3 + 10);
  if (!VAR_5)
   goto fail;
  VAR_7 = VAR_5;
 }

 VAR_3 = FUNC_8(VAR_2, " conf=ap-");
 if (VAR_3) {
  VAR_6 = FUNC_0(VAR_3 + 9);
  if (!VAR_6)
   goto fail;
  VAR_7 = VAR_6;
 }

 if (!VAR_7)
  return 0;

 VAR_3 = FUNC_8(VAR_2, " ssid=");
 if (VAR_3) {
  VAR_3 += 6;
  VAR_4 = FUNC_6(VAR_3, ' ');
  VAR_7->ssid_len = VAR_4 ? (size_t) (VAR_4 - VAR_3) : FUNC_7(VAR_3);
  VAR_7->ssid_len /= 2;
  if (VAR_7->ssid_len > sizeof(VAR_7->ssid) ||
      FUNC_3(VAR_3, VAR_7->ssid, VAR_7->ssid_len) < 0)
   goto fail;
 } else {





  goto fail;

 }

 VAR_3 = FUNC_8(VAR_2, " pass=");
 if (VAR_3) {
  size_t VAR_8;

  VAR_3 += 6;
  VAR_4 = FUNC_6(VAR_3, ' ');
  VAR_8 = VAR_4 ? (size_t) (VAR_4 - VAR_3) : FUNC_7(VAR_3);
  VAR_8 /= 2;
  if (VAR_8 > 63 || VAR_8 < 8)
   goto fail;
  VAR_7->passphrase = FUNC_9(VAR_8 + 1);
  if (!VAR_7->passphrase ||
      FUNC_3(VAR_3, (u8 *) VAR_7->passphrase, VAR_8) < 0)
   goto fail;
 }

 VAR_3 = FUNC_8(VAR_2, " psk=");
 if (VAR_3) {
  VAR_3 += 5;
  if (FUNC_3(VAR_3, VAR_7->psk, VAR_0) < 0)
   goto fail;
  VAR_7->psk_set = 1;
 }

 VAR_3 = FUNC_8(VAR_2, " group_id=");
 if (VAR_3) {
  size_t VAR_9;

  VAR_3 += 10;
  VAR_4 = FUNC_6(VAR_3, ' ');
  VAR_9 = VAR_4 ? (size_t) (VAR_4 - VAR_3) : FUNC_7(VAR_3);
  VAR_7->group_id = FUNC_4(VAR_9 + 1);
  if (!VAR_7->group_id)
   goto fail;
  FUNC_5(VAR_7->group_id, VAR_3, VAR_9);
  VAR_7->group_id[VAR_9] = '\0';
 }

 VAR_3 = FUNC_8(VAR_2, " expiry=");
 if (VAR_3) {
  long int VAR_10;

  VAR_3 += 8;
  VAR_10 = FUNC_10(VAR_3, ((void*)0), 0);
  if (VAR_10 <= 0)
   goto fail;
  VAR_7->netaccesskey_expiry = VAR_10;
 }

 if (!FUNC_2(VAR_7))
  goto fail;

 VAR_1->conf_sta = VAR_5;
 VAR_1->conf_ap = VAR_6;
 return 0;

fail:
 FUNC_1(VAR_5);
 FUNC_1(VAR_6);
 return -1;
}
