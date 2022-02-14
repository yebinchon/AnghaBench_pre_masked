
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct hostapd_data {scalar_t__ lci_req_token; scalar_t__ lci_req_active; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct hostapd_data*,int *) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,scalar_t__,...) ;

__attribute__((used)) static void FUNC_2(struct hostapd_data *VAR_2, u8 VAR_3,
          const u8 *VAR_4, size_t VAR_5)
{
 if (!VAR_2->lci_req_active || VAR_2->lci_req_token != VAR_3) {
  FUNC_1(VAR_0, "Unexpected LCI report, token %u", VAR_3);
  return;
 }

 VAR_2->lci_req_active = 0;
 FUNC_0(VAR_1, VAR_2, ((void*)0));
 FUNC_1(VAR_0, "LCI report token %u len %zu", VAR_3, VAR_5);
}
