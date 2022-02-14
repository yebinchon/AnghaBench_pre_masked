
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sm {int dummy; } ;
struct eap_peap_data {scalar_t__ state; int ssl; scalar_t__ crypto_binding_used; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int) ;
 int * FUNC_1 (struct eap_sm*,int *,char*,int *,int ,int) ;
 int * FUNC_2 (int *,size_t) ;
 int FUNC_3 (int ,char*,int *,size_t) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static u8 * FUNC_5(struct eap_sm *VAR_4, void *VAR_5, size_t *VAR_6)
{
 struct eap_peap_data *VAR_7 = VAR_5;
 u8 *VAR_8, *VAR_9;

 if (VAR_7->state != VAR_3)
  return ((void*)0);

 if (VAR_7->crypto_binding_used) {

  return ((void*)0);
 }


 VAR_8 = FUNC_1(VAR_4, &VAR_7->ssl,
            "client EAP encryption", ((void*)0), 0,
            VAR_1 + VAR_0);
 if (VAR_8) {
  VAR_9 = FUNC_2(VAR_8 + VAR_1, VAR_0);
  FUNC_0(VAR_8, VAR_1 + VAR_0);
  if (!VAR_9)
   return ((void*)0);
  *VAR_6 = VAR_0;
  FUNC_3(VAR_2, "EAP-PEAP: Derived EMSK",
       VAR_9, VAR_0);
 } else {
  FUNC_4(VAR_2, "EAP-PEAP: Failed to derive EMSK");
  VAR_9 = ((void*)0);
 }

 return VAR_9;
}
