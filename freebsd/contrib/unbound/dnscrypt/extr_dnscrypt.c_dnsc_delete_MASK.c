
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dnsc_env {int nonces_cache; int shared_secrets_cache; int nonces_cache_lock; int shared_secrets_cache_lock; int keypairs; int certs; int rotated_certs; int signed_certs; } ;


 int VAR_0 ;
 int FUNC_0 (struct dnsc_env*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;

void
FUNC_5(struct dnsc_env *VAR_1)
{
 if(!VAR_1) {
  return;
 }
 FUNC_4(VAR_0, "DNSCrypt: Freeing environment.");
 FUNC_3(VAR_1->signed_certs);
 FUNC_3(VAR_1->rotated_certs);
 FUNC_3(VAR_1->certs);
 FUNC_3(VAR_1->keypairs);
 FUNC_1(&VAR_1->shared_secrets_cache_lock);
 FUNC_1(&VAR_1->nonces_cache_lock);
 FUNC_2(VAR_1->shared_secrets_cache);
 FUNC_2(VAR_1->nonces_cache);
 FUNC_0(VAR_1);
}
