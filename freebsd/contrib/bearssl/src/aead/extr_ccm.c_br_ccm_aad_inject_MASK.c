
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t ptr; unsigned char const* buf; int cbcmac; TYPE_2__** bctx; } ;
typedef TYPE_1__ br_ccm_context ;
struct TYPE_6__ {int (* mac ) (TYPE_2__**,int ,unsigned char const*,size_t) ;} ;


 int FUNC_0 (unsigned char const*,unsigned char const*,size_t) ;
 int FUNC_1 (TYPE_2__**,int ,unsigned char const*,int) ;
 int FUNC_2 (TYPE_2__**,int ,unsigned char const*,size_t) ;

void
FUNC_3(br_ccm_context *VAR_0, const void *VAR_1, size_t VAR_2)
{
 const unsigned char *VAR_3;
 size_t VAR_4;

 VAR_3 = VAR_1;




 VAR_4 = VAR_0->ptr;
 if (VAR_4 != 0) {
  size_t VAR_5;

  VAR_5 = (sizeof VAR_0->buf) - VAR_4;
  if (VAR_5 > VAR_2) {
   FUNC_0(VAR_0->buf + VAR_4, VAR_3, VAR_2);
   VAR_0->ptr = VAR_4 + VAR_2;
   return;
  }
  FUNC_0(VAR_0->buf + VAR_4, VAR_3, VAR_5);
  VAR_3 += VAR_5;
  VAR_2 -= VAR_5;
  (*VAR_0->bctx)->mac(VAR_0->bctx, VAR_0->cbcmac,
   VAR_0->buf, sizeof VAR_0->buf);
 }




 VAR_4 = VAR_2 & 15;
 VAR_2 -= VAR_4;
 (*VAR_0->bctx)->mac(VAR_0->bctx, VAR_0->cbcmac, VAR_3, VAR_2);
 VAR_3 += VAR_2;




 FUNC_0(VAR_0->buf, VAR_3, VAR_4);
 VAR_0->ptr = VAR_4;
}
