
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eapol_test_data {int wpa_s; scalar_t__ radius_access_accept_received; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, void *VAR_1)
{
 struct eapol_test_data *VAR_2 = VAR_0;
 FUNC_0("\n\n\n\n\neapol_test: Triggering EAP reauthentication\n\n");
 VAR_2->radius_access_accept_received = 0;
 FUNC_1(VAR_2->wpa_s, ((void*)0));
}
