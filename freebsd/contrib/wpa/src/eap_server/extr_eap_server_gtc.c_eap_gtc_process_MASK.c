
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int identity_len; TYPE_1__* user; scalar_t__ const* identity; scalar_t__ require_identity_match; } ;
struct eap_gtc_data {void* state; scalar_t__ prefix; } ;
struct TYPE_2__ {size_t password_len; int * password; scalar_t__ password_hash; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 scalar_t__* FUNC_0 (int ,int ,struct wpabuf*,size_t*) ;
 scalar_t__ FUNC_1 (struct eap_sm*,scalar_t__ const*,int,int) ;
 int FUNC_2 (scalar_t__ const*) ;
 scalar_t__ FUNC_3 (scalar_t__ const*,scalar_t__ const*,int) ;
 scalar_t__ FUNC_4 (scalar_t__ const*,int *,size_t) ;
 scalar_t__ const* FUNC_5 (scalar_t__ const*,int) ;
 int FUNC_6 (int ,char*,scalar_t__ const*,int) ;
 int FUNC_7 (int ,char*,scalar_t__ const*,size_t) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static void FUNC_9(struct eap_sm *VAR_7, void *VAR_8,
       struct wpabuf *VAR_9)
{
 struct eap_gtc_data *VAR_10 = VAR_8;
 const u8 *VAR_11;
 size_t VAR_12;

 VAR_11 = FUNC_0(VAR_1, VAR_0, VAR_9, &VAR_12);
 if (VAR_11 == ((void*)0) || VAR_12 < 1)
  return;

 FUNC_7(VAR_5, "EAP-GTC: Response", VAR_11, VAR_12);
 if (VAR_7->user == ((void*)0) || VAR_7->user->password == ((void*)0) ||
     VAR_7->user->password_hash) {
  FUNC_8(VAR_4, "EAP-GTC: Plaintext password not "
      "configured");
  VAR_10->state = VAR_2;
  return;
 }

 if (VAR_12 != VAR_7->user->password_len ||
     FUNC_4(VAR_11, VAR_7->user->password, VAR_12) != 0) {
  FUNC_8(VAR_3, "EAP-GTC: Done - Failure");
  VAR_10->state = VAR_2;
 } else {
  FUNC_8(VAR_3, "EAP-GTC: Done - Success");
  VAR_10->state = VAR_6;
 }
}
