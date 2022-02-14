
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_data {scalar_t__ range_req_active; scalar_t__ lci_req_active; } ;


 int FUNC_0 (int ,struct hostapd_data*,int *) ;
 int FUNC_1 (struct hostapd_data*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_2(struct hostapd_data *VAR_2)
{
 FUNC_1(VAR_2);
 FUNC_0(VAR_0, VAR_2, ((void*)0));
 VAR_2->lci_req_active = 0;
 FUNC_0(VAR_1, VAR_2, ((void*)0));
 VAR_2->range_req_active = 0;
}
