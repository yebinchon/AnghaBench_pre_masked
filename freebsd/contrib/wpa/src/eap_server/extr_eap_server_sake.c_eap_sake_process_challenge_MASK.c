
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int server_id_len; int server_id; TYPE_1__* user; } ;
struct eap_sake_parse_attr {int mic_p; int peerid_len; scalar_t__ peerid; int rand_p; } ;
struct TYPE_4__ {int auth; } ;
struct eap_sake_data {scalar_t__ state; int peerid_len; int * peerid; int rand_p; int rand_s; TYPE_2__ tek; int emsk; int msk; } ;
struct TYPE_3__ {int password_len; int * password; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ,int *,int ,int,int ,int ,int ,int *) ;
 scalar_t__ FUNC_1 (int *,int *,int ,int ,int *,int ,int ) ;
 scalar_t__ FUNC_2 (int const*,size_t,struct eap_sake_parse_attr*) ;
 int FUNC_3 (struct eap_sake_data*,void*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int *,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int * FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (struct wpabuf const*) ;
 int FUNC_10 (struct wpabuf const*) ;

__attribute__((used)) static void FUNC_11(struct eap_sm *VAR_8,
           struct eap_sake_data *VAR_9,
           const struct wpabuf *VAR_10,
           const u8 *VAR_11, size_t VAR_12)
{
 struct eap_sake_parse_attr VAR_13;
 u8 VAR_14[VAR_2];

 if (VAR_9->state != VAR_0)
  return;

 FUNC_8(VAR_6, "EAP-SAKE: Received Response/Challenge");

 if (FUNC_2(VAR_11, VAR_12, &VAR_13))
  return;

 if (!VAR_13.rand_p || !VAR_13.mic_p) {
  FUNC_8(VAR_7, "EAP-SAKE: Response/Challenge did not "
      "include AT_RAND_P or AT_MIC_P");
  return;
 }

 FUNC_6(VAR_9->rand_p, VAR_13.rand_p, VAR_3);

 FUNC_4(VAR_9->peerid);
 VAR_9->peerid = ((void*)0);
 VAR_9->peerid_len = 0;
 if (VAR_13.peerid) {
  VAR_9->peerid = FUNC_7(VAR_13.peerid, VAR_13.peerid_len);
  if (VAR_9->peerid == ((void*)0))
   return;
  VAR_9->peerid_len = VAR_13.peerid_len;
 }

 if (VAR_8->user == ((void*)0) || VAR_8->user->password == ((void*)0) ||
     VAR_8->user->password_len != 2 * VAR_4) {
  FUNC_8(VAR_7, "EAP-SAKE: Plaintext password with "
      "%d-byte key not configured",
      2 * VAR_4);
  VAR_9->state = VAR_5;
  return;
 }
 if (FUNC_1(VAR_8->user->password,
     VAR_8->user->password + VAR_4,
     VAR_9->rand_s, VAR_9->rand_p,
     (u8 *) &VAR_9->tek, VAR_9->msk,
     VAR_9->emsk) < 0) {
  FUNC_8(VAR_7, "EAP-SAKE: Failed to derive keys");
  VAR_9->state = VAR_5;
  return;
 }

 if (FUNC_0(VAR_9->tek.auth, VAR_9->rand_s, VAR_9->rand_p,
     VAR_8->server_id, VAR_8->server_id_len,
     VAR_9->peerid, VAR_9->peerid_len, 1,
     FUNC_9(VAR_10), FUNC_10(VAR_10),
     VAR_13.mic_p, VAR_14) < 0) {
  FUNC_8(VAR_7, "EAP-SAKE: Failed to compute MIC");
  VAR_9->state = VAR_5;
  return;
 }
 if (FUNC_5(VAR_13.mic_p, VAR_14, VAR_2) != 0) {
  FUNC_8(VAR_7, "EAP-SAKE: Incorrect AT_MIC_P");
  FUNC_3(VAR_9, VAR_5);
  return;
 }

 FUNC_3(VAR_9, VAR_1);
}
