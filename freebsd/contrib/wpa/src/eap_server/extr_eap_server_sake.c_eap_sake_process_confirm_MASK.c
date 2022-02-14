
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int server_id_len; int server_id; } ;
struct eap_sake_parse_attr {int mic_p; } ;
struct TYPE_2__ {int auth; } ;
struct eap_sake_data {scalar_t__ state; int peerid_len; int peerid; int rand_p; int rand_s; TYPE_1__ tek; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int,int ,int ,int ,int *) ;
 scalar_t__ FUNC_1 (int const*,size_t,struct eap_sake_parse_attr*) ;
 int FUNC_2 (struct eap_sake_data*,int ) ;
 scalar_t__ FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct wpabuf const*) ;
 int FUNC_6 (struct wpabuf const*) ;

__attribute__((used)) static void FUNC_7(struct eap_sm *VAR_6,
         struct eap_sake_data *VAR_7,
         const struct wpabuf *VAR_8,
         const u8 *VAR_9, size_t VAR_10)
{
 struct eap_sake_parse_attr VAR_11;
 u8 VAR_12[VAR_1];

 if (VAR_7->state != VAR_0)
  return;

 FUNC_4(VAR_3, "EAP-SAKE: Received Response/Confirm");

 if (FUNC_1(VAR_9, VAR_10, &VAR_11))
  return;

 if (!VAR_11.mic_p) {
  FUNC_4(VAR_4, "EAP-SAKE: Response/Confirm did not "
      "include AT_MIC_P");
  return;
 }

 if (FUNC_0(VAR_7->tek.auth, VAR_7->rand_s, VAR_7->rand_p,
     VAR_6->server_id, VAR_6->server_id_len,
     VAR_7->peerid, VAR_7->peerid_len, 1,
     FUNC_5(VAR_8), FUNC_6(VAR_8),
     VAR_11.mic_p, VAR_12) < 0) {
  FUNC_4(VAR_4, "EAP-SAKE: Failed to compute MIC");
  return;
 }
 if (FUNC_3(VAR_11.mic_p, VAR_12, VAR_1) != 0) {
  FUNC_4(VAR_4, "EAP-SAKE: Incorrect AT_MIC_P");
  FUNC_2(VAR_7, VAR_2);
 } else
  FUNC_2(VAR_7, VAR_5);
}
