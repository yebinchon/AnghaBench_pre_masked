
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pkcs11_provider {scalar_t__ refcount; struct pkcs11_provider* slotinfo; struct pkcs11_provider* slotlist; scalar_t__ valid; } ;


 int FUNC_0 (char*,struct pkcs11_provider*,scalar_t__) ;
 int FUNC_1 (char*,struct pkcs11_provider*) ;
 int FUNC_2 (struct pkcs11_provider*) ;

__attribute__((used)) static void
FUNC_3(struct pkcs11_provider *VAR_0)
{
 FUNC_0("pkcs11_provider_unref: %p refcount %d", VAR_0, VAR_0->refcount);
 if (--VAR_0->refcount <= 0) {
  if (VAR_0->valid)
   FUNC_1("pkcs11_provider_unref: %p still valid", VAR_0);
  FUNC_2(VAR_0->slotlist);
  FUNC_2(VAR_0->slotinfo);
  FUNC_2(VAR_0);
 }
}
