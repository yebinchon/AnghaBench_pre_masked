
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eap_erp_key {char* keyname_nai; size_t rRK_len; size_t rIK_len; int list; struct eap_erp_key* rIK; struct eap_erp_key* rRK; } ;
typedef struct eap_erp_key u8 ;
struct eap_sm {size_t eapSessionIdLen; int erp_keys; struct eap_erp_key* eapSessionId; int eap_method_priv; TYPE_1__* m; } ;
typedef int len ;
typedef int ctx ;
struct TYPE_2__ {struct eap_erp_key* (* get_emsk ) (struct eap_sm*,int ,size_t*) ;} ;


 int VAR_0 ;
 struct eap_erp_key VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct eap_erp_key*,size_t) ;
 int FUNC_1 (struct eap_erp_key*,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct eap_sm*,char*) ;
 char* FUNC_4 (struct eap_sm*) ;
 scalar_t__ FUNC_5 (struct eap_erp_key*,size_t,char*,struct eap_erp_key*,int,struct eap_erp_key*,size_t) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,size_t) ;
 size_t FUNC_8 (char*) ;
 struct eap_erp_key* FUNC_9 (int) ;
 struct eap_erp_key* FUNC_10 (struct eap_sm*,int ,size_t*) ;
 int FUNC_11 (int ,char*,struct eap_erp_key*,int) ;
 int FUNC_12 (int ,char*,struct eap_erp_key*,size_t) ;
 int FUNC_13 (int ,char*,...) ;
 int FUNC_14 (char*,size_t,struct eap_erp_key*,int) ;

void FUNC_15(struct eap_sm *VAR_4, u8 *VAR_5,
         size_t VAR_6, u8 *VAR_7,
         size_t VAR_8)
{
}
