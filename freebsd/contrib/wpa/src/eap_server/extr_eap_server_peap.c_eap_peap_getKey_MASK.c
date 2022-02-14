
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sm {int dummy; } ;
struct eap_peap_data {scalar_t__ state; int ssl; int ipmk; int peap_version; scalar_t__ crypto_binding_used; } ;
typedef int csk ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_0 (struct eap_sm*,int *,char*,int *,int ,scalar_t__) ;
 int FUNC_1 (int *,int) ;
 int * FUNC_2 (size_t) ;
 int FUNC_3 (int *,int *,size_t) ;
 int FUNC_4 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ,int,char*,int *,int,int *,int) ;
 int FUNC_6 (int ,char*,int *,size_t) ;
 int FUNC_7 (int ,char*,int *,int) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static u8 * FUNC_9(struct eap_sm *VAR_4, void *VAR_5, size_t *VAR_6)
{
 struct eap_peap_data *VAR_7 = VAR_5;
 u8 *VAR_8;

 if (VAR_7->state != VAR_3)
  return ((void*)0);

 if (VAR_7->crypto_binding_used) {
  u8 VAR_9[128];





  if (FUNC_5(VAR_7->peap_version, VAR_7->ipmk, 40,
     "Session Key Generating Function",
     (u8 *) "\00", 1, VAR_9, sizeof(VAR_9)) < 0)
   return ((void*)0);
  FUNC_7(VAR_2, "EAP-PEAP: CSK", VAR_9, sizeof(VAR_9));
  VAR_8 = FUNC_2(VAR_1);
  if (VAR_8) {
   FUNC_3(VAR_8, VAR_9, VAR_1);
   *VAR_6 = VAR_1;
   FUNC_6(VAR_2, "EAP-PEAP: Derived key",
        VAR_8, VAR_1);
  } else {
   FUNC_8(VAR_2, "EAP-PEAP: Failed to derive "
       "key");
  }

  FUNC_1(VAR_9, sizeof(VAR_9));

  return VAR_8;
 }


 VAR_8 = FUNC_0(VAR_4, &VAR_7->ssl,
            "client EAP encryption", ((void*)0), 0,
            VAR_1 + VAR_0);
 if (VAR_8) {
  FUNC_4(VAR_8 + VAR_1, 0, VAR_0);
  *VAR_6 = VAR_1;
  FUNC_6(VAR_2, "EAP-PEAP: Derived key",
       VAR_8, VAR_1);
 } else {
  FUNC_8(VAR_2, "EAP-PEAP: Failed to derive key");
 }

 return VAR_8;
}
