
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {TYPE_1__* user; } ;
struct eap_md5_data {void* state; int challenge; } ;
struct TYPE_2__ {int password_len; int * password; scalar_t__ password_hash; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 scalar_t__ FUNC_0 (int,int *,int ,int ,int ,int*) ;
 int FUNC_1 (struct wpabuf*) ;
 int* FUNC_2 (int ,int ,struct wpabuf*,size_t*) ;
 scalar_t__ FUNC_3 (int*,int const*,int) ;
 int FUNC_4 (int ,char*,int const*,int) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void FUNC_6(struct eap_sm *VAR_9, void *VAR_10,
       struct wpabuf *VAR_11)
{
 struct eap_md5_data *VAR_12 = VAR_10;
 const u8 *VAR_13;
 size_t VAR_14;
 u8 VAR_15[VAR_1], VAR_16;

 if (VAR_9->user == ((void*)0) || VAR_9->user->password == ((void*)0) ||
     VAR_9->user->password_hash) {
  FUNC_5(VAR_6, "EAP-MD5: Plaintext password not "
      "configured");
  VAR_12->state = VAR_4;
  return;
 }

 VAR_13 = FUNC_2(VAR_3, VAR_2, VAR_11, &VAR_14);
 if (VAR_13 == ((void*)0) || *VAR_13 != VAR_1 || VAR_14 < 1 + VAR_1)
  return;

 VAR_13++;
 FUNC_4(VAR_7, "EAP-MD5: Response", VAR_13, VAR_1);

 VAR_16 = FUNC_1(VAR_11);
 if (FUNC_0(VAR_16, VAR_9->user->password, VAR_9->user->password_len,
       VAR_12->challenge, VAR_0, VAR_15)) {
  FUNC_5(VAR_6, "EAP-MD5: CHAP MD5 operation failed");
  VAR_12->state = VAR_4;
  return;
 }

 if (FUNC_3(VAR_15, VAR_13, VAR_1) == 0) {
  FUNC_5(VAR_5, "EAP-MD5: Done - Success");
  VAR_12->state = VAR_8;
 } else {
  FUNC_5(VAR_5, "EAP-MD5: Done - Failure");
  VAR_12->state = VAR_4;
 }
}
