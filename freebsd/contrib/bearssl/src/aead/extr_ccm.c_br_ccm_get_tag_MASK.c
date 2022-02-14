
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t ptr; size_t tag_len; int * cbcmac; int * tagmask; int buf; TYPE_2__** bctx; } ;
typedef TYPE_1__ br_ccm_context ;
struct TYPE_5__ {int (* mac ) (TYPE_2__**,int *,int ,int) ;} ;


 int FUNC_0 (void*,int *,size_t) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_2__**,int *,int ,int) ;

size_t
FUNC_3(br_ccm_context *VAR_0, void *VAR_1)
{
 size_t VAR_2;
 size_t VAR_3;





 VAR_2 = VAR_0->ptr;
 if (VAR_2 != 0) {
  FUNC_1(VAR_0->buf + VAR_2, 0, (sizeof VAR_0->buf) - VAR_2);
  (*VAR_0->bctx)->mac(VAR_0->bctx, VAR_0->cbcmac,
   VAR_0->buf, sizeof VAR_0->buf);
 }




 for (VAR_3 = 0; VAR_3 < VAR_0->tag_len; VAR_3 ++) {
  VAR_0->cbcmac[VAR_3] ^= VAR_0->tagmask[VAR_3];
 }
 FUNC_0(VAR_1, VAR_0->cbcmac, VAR_0->tag_len);
 return VAR_0->tag_len;
}
