
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sm {int dummy; } ;
struct eap_aka_data {scalar_t__ state; int reauth_mac; int nonce_s; int autn; int rand; int reauth; int eap_method; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_0 (size_t) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ,char*,int *,size_t) ;

__attribute__((used)) static u8 * FUNC_3(struct eap_sm *VAR_6, void *VAR_7, size_t *VAR_8)
{
 struct eap_aka_data *VAR_9 = VAR_7;
 u8 *VAR_10;

 if (VAR_9->state != VAR_5)
  return ((void*)0);

 if (!VAR_9->reauth)
  *VAR_8 = 1 + VAR_1 + VAR_0;
 else
  *VAR_8 = 1 + VAR_3 + VAR_2;
 VAR_10 = FUNC_0(*VAR_8);
 if (VAR_10 == ((void*)0))
  return ((void*)0);

 VAR_10[0] = VAR_9->eap_method;
 if (!VAR_9->reauth) {
  FUNC_1(VAR_10 + 1, VAR_9->rand, VAR_1);
  FUNC_1(VAR_10 + 1 + VAR_1, VAR_9->autn,
     VAR_0);
 } else {
  FUNC_1(VAR_10 + 1, VAR_9->nonce_s, VAR_3);
  FUNC_1(VAR_10 + 1 + VAR_3, VAR_9->reauth_mac,
     VAR_2);
 }
 FUNC_2(VAR_4, "EAP-AKA: Derived Session-Id", VAR_10, *VAR_8);

 return VAR_10;
}
