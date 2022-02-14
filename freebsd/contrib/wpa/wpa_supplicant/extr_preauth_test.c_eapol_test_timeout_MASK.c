
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct preauth_test_data {int auth_timed_out; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, void *VAR_1)
{
 struct preauth_test_data *VAR_2 = VAR_0;
 FUNC_1("EAPOL test timed out\n");
 VAR_2->auth_timed_out = 1;
 FUNC_0();
}
