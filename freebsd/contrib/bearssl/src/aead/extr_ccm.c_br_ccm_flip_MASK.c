
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t ptr; int buf; int cbcmac; TYPE_2__** bctx; } ;
typedef TYPE_1__ br_ccm_context ;
struct TYPE_5__ {int (* mac ) (TYPE_2__**,int ,int ,int) ;} ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (TYPE_2__**,int ,int ,int) ;

void
FUNC_2(br_ccm_context *VAR_0)
{
 size_t VAR_1;




 VAR_1 = VAR_0->ptr;
 if (VAR_1 != 0) {
  FUNC_0(VAR_0->buf + VAR_1, 0, (sizeof VAR_0->buf) - VAR_1);
  (*VAR_0->bctx)->mac(VAR_0->bctx, VAR_0->cbcmac,
   VAR_0->buf, sizeof VAR_0->buf);
  VAR_0->ptr = 0;
 }




}
