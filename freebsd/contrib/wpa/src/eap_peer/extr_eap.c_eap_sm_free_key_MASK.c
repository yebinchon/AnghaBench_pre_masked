
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int * eapKeyData; int eapKeyDataLen; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct eap_sm *VAR_0)
{
 if (VAR_0->eapKeyData) {
  FUNC_0(VAR_0->eapKeyData, VAR_0->eapKeyDataLen);
  VAR_0->eapKeyData = ((void*)0);
 }
}
