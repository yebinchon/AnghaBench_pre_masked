
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct eap_eke_data {int failure_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct eap_eke_data*,int ) ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_2(struct eap_eke_data *VAR_2, u32 VAR_3)
{
 FUNC_1(VAR_1, "EAP-EKE: Failure - code 0x%x", VAR_3);
 VAR_2->failure_code = VAR_3;
 FUNC_0(VAR_2, VAR_0);
}
