
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* head; int* cbcmac; int* ctr; int* nonce; scalar_t__ ptr; } ;
typedef TYPE_1__ br_eax_context ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

void
FUNC_3(br_eax_context *VAR_0)
{
 int VAR_1;






 VAR_1 = VAR_0->head[0];




 FUNC_0(VAR_0);
 FUNC_1(VAR_0->head, VAR_0->cbcmac, sizeof VAR_0->cbcmac);






 if (VAR_1) {
  FUNC_1(VAR_0->cbcmac, VAR_0->ctr, sizeof VAR_0->cbcmac);
  VAR_0->ptr = 0;
 } else {
  FUNC_2(VAR_0, 2);
 }




 FUNC_1(VAR_0->ctr, VAR_0->nonce, sizeof VAR_0->nonce);
}
