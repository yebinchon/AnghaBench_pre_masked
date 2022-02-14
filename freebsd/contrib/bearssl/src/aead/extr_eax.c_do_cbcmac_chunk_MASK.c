
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ptr; void const* buf; int cbcmac; TYPE_2__** bctx; } ;
typedef TYPE_1__ br_eax_context ;
struct TYPE_6__ {int (* mac ) (TYPE_2__**,int ,void const*,size_t) ;} ;


 int FUNC_0 (void const*,unsigned char const*,size_t) ;
 int FUNC_1 (TYPE_2__**,int ,void const*,int) ;
 int FUNC_2 (TYPE_2__**,int ,void const*,size_t) ;

__attribute__((used)) static void
FUNC_3(br_eax_context *VAR_0, const void *VAR_1, size_t VAR_2)
{
 size_t VAR_3;

 if (VAR_2 == 0) {
  return;
 }
 VAR_3 = VAR_2 & (size_t)15;
 if (VAR_3 == 0) {
  VAR_2 -= 16;
  VAR_3 = 16;
 } else {
  VAR_2 -= VAR_3;
 }
 if (VAR_0->ptr == 16) {
  (*VAR_0->bctx)->mac(VAR_0->bctx, VAR_0->cbcmac,
   VAR_0->buf, sizeof VAR_0->buf);
 }
 (*VAR_0->bctx)->mac(VAR_0->bctx, VAR_0->cbcmac, VAR_1, VAR_2);
 FUNC_0(VAR_0->buf, (const unsigned char *)VAR_1 + VAR_2, VAR_3);
 VAR_0->ptr = VAR_3;
}
