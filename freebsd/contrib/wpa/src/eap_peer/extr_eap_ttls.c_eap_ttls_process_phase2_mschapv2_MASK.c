
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttls_parse_avp {scalar_t__* mschapv2; scalar_t__ eapdata; scalar_t__ mschapv2_error; } ;
struct eap_ttls_data {int phase2_success; scalar_t__ ident; int auth_response; int auth_response_valid; } ;
struct eap_sm {int dummy; } ;
struct eap_method_ret {int decision; void* methodState; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,scalar_t__*,int) ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static int FUNC_2(struct eap_sm *VAR_7,
         struct eap_ttls_data *VAR_8,
         struct eap_method_ret *VAR_9,
         struct ttls_parse_avp *VAR_10)
{
 FUNC_1(VAR_4, "EAP-TTLS: MSCHAPv2 not included in the build");
 return -1;

}
