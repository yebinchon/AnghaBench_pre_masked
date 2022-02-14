
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eapol_test_data {int wpa_s; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_1)
{
 struct eapol_test_data *VAR_2 = VAR_1;

 FUNC_0("WPA: EAPOL processing complete\n");
 FUNC_1(VAR_2->wpa_s);
 FUNC_2(VAR_2->wpa_s, VAR_0);
}
