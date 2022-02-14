
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * st; } ;
typedef TYPE_1__ br_eax_state ;
struct TYPE_9__ {scalar_t__ ptr; int cbcmac; int head; int nonce; int ctr; } ;
typedef TYPE_2__ br_eax_context ;


 int FUNC_0 (TYPE_2__*,void const*,size_t) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (TYPE_2__*,int ) ;

void
FUNC_4(br_eax_context *VAR_0, const br_eax_state *VAR_1,
 const void *VAR_2, size_t VAR_3)
{
 if (VAR_3 == 0) {
  FUNC_3(VAR_0, 0);
 } else {
  FUNC_2(VAR_0->cbcmac, VAR_1->st[0], sizeof VAR_0->cbcmac);
  VAR_0->ptr = 0;
  FUNC_0(VAR_0, VAR_2, VAR_3);
 }
 FUNC_1(VAR_0);
 FUNC_2(VAR_0->nonce, VAR_0->cbcmac, sizeof VAR_0->cbcmac);
 FUNC_2(VAR_0->ctr, VAR_0->nonce, sizeof VAR_0->nonce);

 FUNC_2(VAR_0->head, VAR_1->st[1], sizeof VAR_0->head);

 FUNC_2(VAR_0->cbcmac, VAR_1->st[2], sizeof VAR_0->cbcmac);
 VAR_0->ptr = 0;
}
