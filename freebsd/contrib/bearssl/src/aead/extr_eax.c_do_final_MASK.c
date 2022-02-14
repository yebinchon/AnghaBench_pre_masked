
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* cbcmac; int* nonce; int* head; } ;
typedef TYPE_1__ br_eax_context ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(br_eax_context *VAR_0)
{
 size_t VAR_1;

 FUNC_0(VAR_0);





 for (VAR_1 = 0; VAR_1 < 16; VAR_1 ++) {
  VAR_0->cbcmac[VAR_1] ^= VAR_0->nonce[VAR_1] ^ VAR_0->head[VAR_1];
 }
}
