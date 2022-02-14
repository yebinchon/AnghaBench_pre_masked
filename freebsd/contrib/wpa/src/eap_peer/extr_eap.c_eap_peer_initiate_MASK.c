
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct erp_tlvs {int domain_len; scalar_t__ domain; } ;
struct eap_sm {int dummy; } ;
struct eap_hdr {int identifier; } ;


 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct eap_sm*,int ) ;
 int FUNC_1 (struct eap_sm*,int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__ const*,scalar_t__ const*,struct erp_tlvs*,int ) ;
 int FUNC_3 (int ,char*,scalar_t__ const*,int) ;
 int FUNC_4 (int ,char*,scalar_t__,int ) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static void FUNC_6(struct eap_sm *VAR_4, const struct eap_hdr *VAR_5,
         size_t VAR_6)
{
 FUNC_5(VAR_2,
     "EAP: EAP-Initiate/Re-auth-Start - No suitable ERP keys available - try to start full EAP authentication");
 FUNC_1(VAR_4, VAR_0, VAR_3);
}
