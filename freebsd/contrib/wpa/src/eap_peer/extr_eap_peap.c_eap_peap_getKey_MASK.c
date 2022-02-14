
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sm {int dummy; } ;
struct eap_peap_data {int * key_data; int ipmk; int peap_version; scalar_t__ crypto_binding_used; int phase2_success; } ;
typedef int csk ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (size_t) ;
 int FUNC_3 (int *,int *,size_t) ;
 scalar_t__ FUNC_4 (int ,int ,int,char*,int *,int,int *,int) ;
 int FUNC_5 (int ,char*,int *,size_t) ;
 int FUNC_6 (int ,char*,int *,int) ;

__attribute__((used)) static u8 * FUNC_7(struct eap_sm *VAR_2, void *VAR_3, size_t *VAR_4)
{
 struct eap_peap_data *VAR_5 = VAR_3;
 u8 *VAR_6;

 if (VAR_5->key_data == ((void*)0) || !VAR_5->phase2_success)
  return ((void*)0);

 VAR_6 = FUNC_2(VAR_0);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 *VAR_4 = VAR_0;

 if (VAR_5->crypto_binding_used) {
  u8 VAR_7[128];





  if (FUNC_4(VAR_5->peap_version, VAR_5->ipmk, 40,
     "Session Key Generating Function",
     (u8 *) "\00", 1, VAR_7, sizeof(VAR_7)) < 0) {
   FUNC_1(VAR_6);
   return ((void*)0);
  }
  FUNC_6(VAR_1, "EAP-PEAP: CSK", VAR_7, sizeof(VAR_7));
  FUNC_3(VAR_6, VAR_7, VAR_0);
  FUNC_5(VAR_1, "EAP-PEAP: Derived key",
       VAR_6, VAR_0);
  FUNC_0(VAR_7, sizeof(VAR_7));
 } else
  FUNC_3(VAR_6, VAR_5->key_data, VAR_0);

 return VAR_6;
}
