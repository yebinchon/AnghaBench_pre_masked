
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int server_id_len; int server_id; } ;
struct TYPE_2__ {int auth; } ;
struct eap_sake_data {void* state; int peerid_len; int peerid; int rand_p; int rand_s; TYPE_1__ tek; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct wpabuf* FUNC_0 (struct eap_sake_data*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int *,int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct wpabuf*) ;
 int FUNC_4 (struct wpabuf*) ;
 int FUNC_5 (struct wpabuf*) ;
 int * FUNC_6 (struct wpabuf*,scalar_t__) ;
 int FUNC_7 (struct wpabuf*,scalar_t__) ;

__attribute__((used)) static struct wpabuf * FUNC_8(struct eap_sm *VAR_6,
           struct eap_sake_data *VAR_7,
           u8 VAR_8)
{
 struct wpabuf *VAR_9;
 u8 *VAR_10;

 FUNC_2(VAR_4, "EAP-SAKE: Request/Confirm");

 VAR_9 = FUNC_0(VAR_7, VAR_8, 2 + VAR_1,
     VAR_2);
 if (VAR_9 == ((void*)0)) {
  VAR_7->state = VAR_3;
  return ((void*)0);
 }

 FUNC_2(VAR_4, "EAP-SAKE: * AT_MIC_S");
 FUNC_7(VAR_9, VAR_0);
 FUNC_7(VAR_9, 2 + VAR_1);
 VAR_10 = FUNC_6(VAR_9, VAR_1);
 if (FUNC_1(VAR_7->tek.auth, VAR_7->rand_s, VAR_7->rand_p,
     VAR_6->server_id, VAR_6->server_id_len,
     VAR_7->peerid, VAR_7->peerid_len, 0,
     FUNC_4(VAR_9), FUNC_5(VAR_9), VAR_10, VAR_10))
 {
  FUNC_2(VAR_5, "EAP-SAKE: Failed to compute MIC");
  VAR_7->state = VAR_3;
  FUNC_3(VAR_9);
  return ((void*)0);
 }

 return VAR_9;
}
