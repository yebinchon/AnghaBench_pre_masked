
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sae_password_entry {struct sae_password_entry* identifier; int password; struct sae_password_entry* next; } ;
struct hostapd_bss_config {struct sae_password_entry* sae_passwords; } ;


 int FUNC_0 (struct sae_password_entry*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct hostapd_bss_config *VAR_0)
{
 struct sae_password_entry *VAR_1, *VAR_2;

 VAR_1 = VAR_0->sae_passwords;
 VAR_0->sae_passwords = ((void*)0);
 while (VAR_1) {
  VAR_2 = VAR_1;
  VAR_1 = VAR_1->next;
  FUNC_1(VAR_2->password);
  FUNC_0(VAR_2->identifier);
  FUNC_0(VAR_2);
 }
}
