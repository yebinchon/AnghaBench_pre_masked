
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshmac {scalar_t__ type; int key_len; int mac_len; int etm; int * umac_ctx; int * hmac_ctx; } ;
struct macalg {scalar_t__ type; int len; int key_len; int truncatebits; int etm; int alg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct sshmac *VAR_2, const struct macalg *VAR_3)
{
 VAR_2->type = VAR_3->type;
 if (VAR_2->type == VAR_0) {
  if ((VAR_2->hmac_ctx = FUNC_1(VAR_3->alg)) == ((void*)0))
   return VAR_1;
  VAR_2->key_len = VAR_2->mac_len = FUNC_0(VAR_3->alg);
 } else {
  VAR_2->mac_len = VAR_3->len / 8;
  VAR_2->key_len = VAR_3->key_len / 8;
  VAR_2->umac_ctx = ((void*)0);
 }
 if (VAR_3->truncatebits != 0)
  VAR_2->mac_len = VAR_3->truncatebits / 8;
 VAR_2->etm = VAR_3->etm;
 return 0;
}
