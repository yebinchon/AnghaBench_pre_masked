
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct eap_server_erp_key {char* keyname_nai; size_t rRK_len; size_t rIK_len; struct eap_server_erp_key* rIK; struct eap_server_erp_key* rRK; scalar_t__ recv_seq; } ;
typedef struct eap_server_erp_key u8 ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {size_t eapSessionIdLen; struct eap_server_erp_key* eapSessionId; } ;
struct eap_sm {TYPE_2__ eap_if; int eap_method_priv; TYPE_1__* m; } ;
typedef int len ;
typedef int ctx ;
struct TYPE_3__ {struct eap_server_erp_key* (* get_emsk ) (struct eap_sm*,int ,size_t*) ;} ;


 int VAR_0 ;
 struct eap_server_erp_key VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct eap_server_erp_key*,size_t) ;
 int FUNC_1 (struct eap_server_erp_key*,int) ;
 scalar_t__ FUNC_2 (struct eap_sm*,struct eap_server_erp_key*) ;
 char* FUNC_3 (struct eap_sm*) ;
 scalar_t__ FUNC_4 (struct eap_server_erp_key*,size_t,char*,struct eap_server_erp_key*,int,struct eap_server_erp_key*,size_t) ;
 int FUNC_5 (char*,char const*,size_t) ;
 size_t FUNC_6 (char const*) ;
 struct eap_server_erp_key* FUNC_7 (int) ;
 struct eap_server_erp_key* FUNC_8 (struct eap_sm*,int ,size_t*) ;
 int FUNC_9 (int ,char*,struct eap_server_erp_key*,int) ;
 int FUNC_10 (int ,char*,struct eap_server_erp_key*,size_t) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (char*,size_t,struct eap_server_erp_key*,int) ;

__attribute__((used)) static void FUNC_13(struct eap_sm *VAR_4)
{
}
